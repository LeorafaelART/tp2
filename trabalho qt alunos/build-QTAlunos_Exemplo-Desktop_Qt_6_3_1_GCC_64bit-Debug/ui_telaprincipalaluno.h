/********************************************************************************
** Form generated from reading UI file 'telaprincipalaluno.ui'
**
** Created by: Qt User Interface Compiler version 6.3.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TELAPRINCIPALALUNO_H
#define UI_TELAPRINCIPALALUNO_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_TelaPrincipalAluno
{
public:
    QWidget *centralwidget;
    QLineEdit *lineEditMat;
    QLineEdit *lineEditNome;
    QLabel *label;
    QLabel *label_2;
    QPushButton *pushButtonIncluir;
    QPushButton *pushButtonConsultar;
    QPushButton *pushButtonAtualizar;
    QPushButton *pushButtonRemover;
    QTableView *tableView;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *TelaPrincipalAluno)
    {
        if (TelaPrincipalAluno->objectName().isEmpty())
            TelaPrincipalAluno->setObjectName(QString::fromUtf8("TelaPrincipalAluno"));
        TelaPrincipalAluno->resize(534, 423);
        centralwidget = new QWidget(TelaPrincipalAluno);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        lineEditMat = new QLineEdit(centralwidget);
        lineEditMat->setObjectName(QString::fromUtf8("lineEditMat"));
        lineEditMat->setGeometry(QRect(100, 40, 181, 31));
        lineEditNome = new QLineEdit(centralwidget);
        lineEditNome->setObjectName(QString::fromUtf8("lineEditNome"));
        lineEditNome->setGeometry(QRect(100, 90, 381, 31));
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(30, 50, 58, 16));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(30, 100, 58, 16));
        pushButtonIncluir = new QPushButton(centralwidget);
        pushButtonIncluir->setObjectName(QString::fromUtf8("pushButtonIncluir"));
        pushButtonIncluir->setGeometry(QRect(30, 140, 100, 32));
        pushButtonConsultar = new QPushButton(centralwidget);
        pushButtonConsultar->setObjectName(QString::fromUtf8("pushButtonConsultar"));
        pushButtonConsultar->setGeometry(QRect(150, 140, 100, 32));
        pushButtonAtualizar = new QPushButton(centralwidget);
        pushButtonAtualizar->setObjectName(QString::fromUtf8("pushButtonAtualizar"));
        pushButtonAtualizar->setGeometry(QRect(270, 140, 100, 32));
        pushButtonRemover = new QPushButton(centralwidget);
        pushButtonRemover->setObjectName(QString::fromUtf8("pushButtonRemover"));
        pushButtonRemover->setGeometry(QRect(390, 140, 100, 32));
        tableView = new QTableView(centralwidget);
        tableView->setObjectName(QString::fromUtf8("tableView"));
        tableView->setGeometry(QRect(20, 180, 491, 192));
        TelaPrincipalAluno->setCentralWidget(centralwidget);
        menubar = new QMenuBar(TelaPrincipalAluno);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 534, 20));
        TelaPrincipalAluno->setMenuBar(menubar);
        statusbar = new QStatusBar(TelaPrincipalAluno);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        TelaPrincipalAluno->setStatusBar(statusbar);

        retranslateUi(TelaPrincipalAluno);

        QMetaObject::connectSlotsByName(TelaPrincipalAluno);
    } // setupUi

    void retranslateUi(QMainWindow *TelaPrincipalAluno)
    {
        TelaPrincipalAluno->setWindowTitle(QCoreApplication::translate("TelaPrincipalAluno", "Cadastro de Alunos", nullptr));
        label->setText(QCoreApplication::translate("TelaPrincipalAluno", "Matr\303\255cula:", nullptr));
        label_2->setText(QCoreApplication::translate("TelaPrincipalAluno", "Nome:", nullptr));
        pushButtonIncluir->setText(QCoreApplication::translate("TelaPrincipalAluno", "Incluir", nullptr));
        pushButtonConsultar->setText(QCoreApplication::translate("TelaPrincipalAluno", "Consultar", nullptr));
        pushButtonAtualizar->setText(QCoreApplication::translate("TelaPrincipalAluno", "Atualizar", nullptr));
        pushButtonRemover->setText(QCoreApplication::translate("TelaPrincipalAluno", "Remover", nullptr));
    } // retranslateUi

};

namespace Ui {
    class TelaPrincipalAluno: public Ui_TelaPrincipalAluno {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TELAPRINCIPALALUNO_H
