#include "mainwindow.h"
#include "ui_mainwindow.h"

std::vector<Pessoa>lista;

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButtonBuscar_clicked()
{
    try {
        // nomeDoArquivo - atributo da classe MainWindow
        //Buscando o arquivo no disco
        nomeDoArquivo = QFileDialog::getOpenFileName(this,"Abrir Arquivo",QDir::currentPath(),"Arquivos Textos (*.csv *.txt *.*)");
        if(nomeDoArquivo.isEmpty()) throw QString("Arquivo nao foi selecionado");
        ui->lineEditNomeDoArquivo->setText(nomeDoArquivo);
    } catch (QString &erro) {
        QMessageBox::information(this,"ERRO",erro);
    }
}


void MainWindow::on_pushButtonSplit_clicked()
{
    try {
        QString saida = "Dados Separados \n\n";
        int tamanho=lista.size();
        for(int i=0;i<tamanho;i++)
        {
            int matricula=lista[i].getMatricula();
            QString nome=lista[i].getNome();
            saida += "Matricula: "+ QString::number(matricula) + "\n";
            saida += "Nome: " + nome + "\n\n";
        }
        ui->textEdit->setText(saida);

    } catch (QString &erro) {
        QMessageBox::information(this,"ERRO",erro);
    }



}


void MainWindow::on_pushButtonSplitMostrarDadosDoArquivo_clicked()
{
    try {

        // criando um arquivo de entrada
        std::ifstream arquivo;

        // abrindo um arquivo de entrada
        arquivo.open(nomeDoArquivo.toStdString().c_str());

        // verificando erro de abertura do arquivo de entrada
        if(!arquivo.is_open()){
            throw QString("ERRO Arquivo nao pode ser aberto");
        }

        std::string linha;
        QString texto;

        // lendo do arquivo
        getline(arquivo,linha);

        // Teste de fim do arquivo
        while(!arquivo.eof()){

            Pessoa P1;

            texto += QString::fromStdString(linha);
            texto += "\n";
            //lendo do arquivo
            QString str = QString::fromStdString(linha);
            QStringList strList = str.split(';');
            if(strList.length()!=2) throw QString("Faltou informação");
            P1.setMatricula(strList[0].toInt());
            P1.setNome(strList[1]);

            lista.push_back(P1);
            getline(arquivo,linha);
        }
        // fechado o arquivo de entrada
        arquivo.close();

        ui->textEdit->setText(texto);

    } catch (QString &erro) {
        QMessageBox::information(this,"ERRO",erro);
    }
}

