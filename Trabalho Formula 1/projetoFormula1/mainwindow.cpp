#include "mainwindow.h"
#include "ui_mainwindow.h"

std::vector<piloto>pilotos;

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
        ui->lineEditArquivo->setText(nomeDoArquivo);
    } catch (QString &erro) {
        QMessageBox::information(this,"ERRO",erro);
    }
}

void MainWindow::on_pushButtonLer_clicked()
{
    try {
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



void MainWindow::on_pushButtonSplit_clicked()
{
    try {

            std::ifstream arquivo;
            arquivo.open(nomeDoArquivo.toStdString().c_str());

            // verificando erro de abertura do arquivo de entrada
            if(!arquivo.is_open()){
                throw QString("ERRO Arquivo nao foi aberto");
            }

            std::string linha;
            QString texto;
            QString saida= "Dados separados: \n \n";

            // lendo do arquivo
            getline(arquivo,linha);

            // Teste de fim do arquivo
            while(!arquivo.eof()){

                texto += QString::fromStdString(linha);
                texto += "\n";
                //lendo do arquivo
                QString str = QString::fromStdString(linha);
                QStringList strList = str.split(';');
                if(strList.length()!=13) throw QString("Faltou informação");
                QString codigoPiloto=strList[0];
                QString nomePiloto=strList[1];
                QString paisPiloto=strList[2];
                QString idadePiloto=strList[3];
                QString equipePiloto=strList[4];
                QString motorPiloto=strList[5];
                QString p1 =strList[6];
                QString p2 =strList[7];
                QString p3 =strList[8];
                QString p4 =strList[9];
                QString p5 =strList[10];
                QString p6 =strList[11];
                QString p7 =strList[12];

                saida+="Codigo do piloto: "+codigoPiloto+"\n";
                saida+="Nome do piloto: "+nomePiloto+"\n";
                saida+="Pais do piloto: "+paisPiloto+"\n";
                saida+="Idade do piloto: "+idadePiloto+"\n";
                saida+="Equipe do piloto: "+equipePiloto+"\n";
                saida+="Motor do Piloto: "+motorPiloto+"\n";
                saida+="Pontuação corrida: \n";
                saida+="|1º corrida: "+p1+"| ";
                saida+="|2º corrida: "+p2+"| ";
                saida+="|3º corrida: "+p3+"| ";
                saida+="|4º corrida: "+p4+"| ";
                saida+="|5º corrida: "+p5+"| ";
                saida+="|6º corrida: "+p6+"| ";
                saida+="|7º corrida: "+p7+"| ";
                saida+="n\n";


                getline(arquivo,linha);
            }
            // fechado o arquivo de entrada
            arquivo.close();

            ui->textEditSaida->setText(saida);

        } catch (QString &erro) {
            QMessageBox::information(this,"ERRO",erro);
        }
}


void MainWindow::on_pushButtonResultado_clicked()
{
    try {
        piloto P1;
        P1.setPFinal(0);
        std::ifstream arquivo;
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
            QString str = QString::fromStdString(linha);
            QStringList strList = str.split(';');
            if(strList.length()!=13) throw QString("Faltou informação");
            P1.setCodigoPiloto(strList[0].toInt());
            P1.setNomePiloto(strList[1]);
            P1.setPaisPiloto(strList[2]);
            P1.setIdadePiloto(strList[3].toInt());
            P1.setEquipePiloto(strList[4]);
            P1.setMotorPiloto(strList[5]);
            for(int i=6;i<13;i++)
            {
                if(strList[i].toInt()==1)
                {
                 P1.setPFinal(P1.getPFinal()+40);
                }
                if(strList[i].toInt()==2)
                {
                 P1.setPFinal(P1.getPFinal()+30);
                }
                if(strList[i].toInt()==3)
                {
                 P1.setPFinal(P1.getPFinal()+25);
                }
                if(strList[i].toInt()==4)
                {
                 P1.setPFinal(P1.getPFinal()+20);
                }
                if(strList[i].toInt()==5)
                {
                 P1.setPFinal(P1.getPFinal()+15);
                }
                if(strList[i].toInt()==6)
                {
                 P1.setPFinal(P1.getPFinal()+10);
                }
            }
            pilotos.push_back(P1);
            P1.setPFinal(0);
            getline(arquivo,linha);
        }
        // fechado o arquivo de entrada
        arquivo.close();
        int tamanho=pilotos.size();
        piloto troca;
        for(int i=0;i<tamanho;i++)
        {
           for(int j=0;j<tamanho;j++)
           {
               if(pilotos[i].getPFinal()>pilotos[j].getPFinal())
               {
                   troca=pilotos[i];
                   pilotos[i]=pilotos[j];
                   pilotos[j]=troca;
               }
           }
        }
        QString saida="Resultado Final: \n\n";
        for(int i=0;i<tamanho;i++)
        {
            saida+="Codigo do piloto: "+QString::number(pilotos[i].getCodigoPiloto())+"\n";
            saida+="Nome do piloto: "+pilotos[i].getNomePiloto()+"\n";
            saida+="Pais do piloto: "+pilotos[i].getPaisPiloto()+"\n";
            saida+="Idade do piloto: "+QString::number(pilotos[i].getIdadePiloto())+"\n";
            saida+="Equipe do piloto: "+pilotos[i].getEquipePiloto()+"\n";
            saida+="Motor do Piloto: "+pilotos[i].getMotorPiloto()+"\n";
            saida+="Pontução Final: "+QString::number(pilotos[i].getPFinal())+"\n\n";

        }
        ui->textEditSaida->setText(saida);

    } catch (QString &erro) {
        QMessageBox::information(this,"ERRO",erro);
    }

}

