#include "mainwindow.h"
#include "ui_mainwindow.h"

std::vector<Dados>dados;

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


void MainWindow::on_pushButtonBuscArq_clicked()
{
    try {
            // nomeDoArquivo - atributo da classe MainWindow
            //Buscando o arquivo no disco
            nomeDoArquivo = QFileDialog::getOpenFileName(this,"Abrir Arquivo",QDir::currentPath(),"Arquivos Textos (*.csv *.txt *.*)");
            if(nomeDoArquivo.isEmpty()) throw QString("Arquivo nao foi selecionado");
            ui->lineEditLerArq->setText(nomeDoArquivo);
        }
        catch (QString &erro)
        {
            QMessageBox::information(this,"ERRO",erro);
        }
}


void MainWindow::on_pushButtonLerArq_clicked()
{
    try
    {

            std::ifstream arquivo;
            arquivo.open(nomeDoArquivo.toStdString().c_str());

            if(!arquivo.is_open())
            {
                throw QString("ERRO Arquivo nao foi aberto");
            }

            std::string linha;
            QString texto;

            // lendo do arquivo
            getline(arquivo,linha);
            while(!arquivo.eof())
            {
                texto += QString::fromStdString(linha);
                texto += "\n";
                //lendo do arquivo
                getline(arquivo,linha);
            }
            // fechado o arquivo de entrada
            arquivo.close();

            ui->textEditSaida->setText(texto);

        }
        catch (QString &erro)
        {
            QMessageBox::information(this,"ERRO",erro);
        }
}


void MainWindow::on_pushButtonSplit_clicked()
{
    try
    {

        std::ifstream arquivo;
        arquivo.open(nomeDoArquivo.toStdString().c_str());

        if(!arquivo.is_open())
        {
            throw QString("ERRO Arquivo nao foi aberto");
        }

        Dados D1;
        std::string linha;
        QString texto;

        getline(arquivo,linha);

         while(!arquivo.eof())
         {
             texto += QString::fromStdString(linha);
             texto += "\n";
             //lendo do arquivo
             QString str = QString::fromStdString(linha);
             QStringList strList = str.split(';');
         }
     }
     catch (QString &erro)
     {
        QMessageBox::information(this,"ERRO",erro);
     }
}

