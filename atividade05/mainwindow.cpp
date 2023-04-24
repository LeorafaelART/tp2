#include "mainwindow.h"
#include "ui_mainwindow.h"

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


//ler arquivo
void MainWindow::on_pushButtonBuscArq_clicked()
{
    try
    {
        // nomeDoArquivo - atributo da classe MainWindow
        //Buscando o arquivo no disco
        nomeDoArquivo = QFileDialog::getOpenFileName(this,"Abrir Arquivo",QDir::currentPath(),"Arquivos Textos (*.csv *.txt *.*)");
        if(nomeDoArquivo.isEmpty()) throw QString("Arquivo não foi selecionado");
        ui->lineEditBuscArq->setText(nomeDoArquivo);
    }
    catch (QString &erro)
    {
        QMessageBox::information(this,"ERRO",erro);
    }
}


void MainWindow::on_pushButtonLer_clicked()
{
    try
    {
            // criando um arquivo de entrada
            std::ifstream arquivo;

            // abrindo um arquivo de entrada
            arquivo.open(nomeDoArquivo.toStdString().c_str());

            // verificando erro de abertura do arquivo de entrada
            if(!arquivo.is_open()){
                throw QString("ERRO Arquivo nao foi aberto");
            }

            std::string linha;
            QString texto;

            // lendo do arquivo
            getline(arquivo,linha);

            // Teste de fim do arquivo
            while(!arquivo.eof()){

                texto += QString::fromStdString(linha);
                texto += "\n";
                //lendo do arquivo
                getline(arquivo,linha);
            }
            // fechado o arquivo de entrada
            arquivo.close();

            ui->textEditSaida->setText(texto);

        } catch (QString &erro) {
            QMessageBox::information(this,"ERRO",erro);
        }
}

