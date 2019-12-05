/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionSalvar;
    QAction *actionEditar;
    QAction *actionExcluir;
    QWidget *centralwidget;
    QTabWidget *tabWidget;
    QWidget *tab;
    QGroupBox *groupBox;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label;
    QLineEdit *input_nome_receita;
    QHBoxLayout *horizontalLayout;
    QLabel *label_12;
    QRadioButton *RB_1;
    QRadioButton *RB_2;
    QRadioButton *RB_3;
    QRadioButton *RB_4;
    QRadioButton *RB_5;
    QPushButton *BT1_cadastro;
    QGroupBox *groupBox_2;
    QWidget *layoutWidget1;
    QVBoxLayout *verticalLayout_3;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_2;
    QLineEdit *input_ingrediente;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_3;
    QLineEdit *input_quantidade;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_4;
    QComboBox *input_unidade;
    QPushButton *BT2_inserir_ingrediente;
    QGroupBox *groupBox_3;
    QTableWidget *tabela_ingredientes;
    QPushButton *BT3_finalizar_cadastro;
    QWidget *tab_2;
    QMenuBar *menubar;
    QMenu *menuMenu;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(1153, 768);
        actionSalvar = new QAction(MainWindow);
        actionSalvar->setObjectName(QString::fromUtf8("actionSalvar"));
        actionEditar = new QAction(MainWindow);
        actionEditar->setObjectName(QString::fromUtf8("actionEditar"));
        actionExcluir = new QAction(MainWindow);
        actionExcluir->setObjectName(QString::fromUtf8("actionExcluir"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        tabWidget = new QTabWidget(centralwidget);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tabWidget->setGeometry(QRect(40, 20, 1071, 691));
        tab = new QWidget();
        tab->setObjectName(QString::fromUtf8("tab"));
        groupBox = new QGroupBox(tab);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(30, 10, 991, 171));
        layoutWidget = new QWidget(groupBox);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(20, 40, 961, 111));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        label = new QLabel(layoutWidget);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout_3->addWidget(label);

        input_nome_receita = new QLineEdit(layoutWidget);
        input_nome_receita->setObjectName(QString::fromUtf8("input_nome_receita"));

        horizontalLayout_3->addWidget(input_nome_receita);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label_12 = new QLabel(layoutWidget);
        label_12->setObjectName(QString::fromUtf8("label_12"));

        horizontalLayout->addWidget(label_12);

        RB_1 = new QRadioButton(layoutWidget);
        RB_1->setObjectName(QString::fromUtf8("RB_1"));

        horizontalLayout->addWidget(RB_1);

        RB_2 = new QRadioButton(layoutWidget);
        RB_2->setObjectName(QString::fromUtf8("RB_2"));

        horizontalLayout->addWidget(RB_2);

        RB_3 = new QRadioButton(layoutWidget);
        RB_3->setObjectName(QString::fromUtf8("RB_3"));

        horizontalLayout->addWidget(RB_3);

        RB_4 = new QRadioButton(layoutWidget);
        RB_4->setObjectName(QString::fromUtf8("RB_4"));

        horizontalLayout->addWidget(RB_4);

        RB_5 = new QRadioButton(layoutWidget);
        RB_5->setObjectName(QString::fromUtf8("RB_5"));

        horizontalLayout->addWidget(RB_5);


        verticalLayout->addLayout(horizontalLayout);

        BT1_cadastro = new QPushButton(layoutWidget);
        BT1_cadastro->setObjectName(QString::fromUtf8("BT1_cadastro"));

        verticalLayout->addWidget(BT1_cadastro);

        groupBox_2 = new QGroupBox(tab);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        groupBox_2->setGeometry(QRect(30, 190, 991, 201));
        layoutWidget1 = new QWidget(groupBox_2);
        layoutWidget1->setObjectName(QString::fromUtf8("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(20, 40, 961, 140));
        verticalLayout_3 = new QVBoxLayout(layoutWidget1);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        label_2 = new QLabel(layoutWidget1);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout_5->addWidget(label_2);

        input_ingrediente = new QLineEdit(layoutWidget1);
        input_ingrediente->setObjectName(QString::fromUtf8("input_ingrediente"));

        horizontalLayout_5->addWidget(input_ingrediente);


        verticalLayout_2->addLayout(horizontalLayout_5);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        label_3 = new QLabel(layoutWidget1);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        horizontalLayout_4->addWidget(label_3);

        input_quantidade = new QLineEdit(layoutWidget1);
        input_quantidade->setObjectName(QString::fromUtf8("input_quantidade"));

        horizontalLayout_4->addWidget(input_quantidade);


        verticalLayout_2->addLayout(horizontalLayout_4);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_4 = new QLabel(layoutWidget1);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        horizontalLayout_2->addWidget(label_4);

        input_unidade = new QComboBox(layoutWidget1);
        input_unidade->addItem(QString());
        input_unidade->addItem(QString());
        input_unidade->addItem(QString());
        input_unidade->addItem(QString());
        input_unidade->addItem(QString());
        input_unidade->addItem(QString());
        input_unidade->addItem(QString());
        input_unidade->addItem(QString());
        input_unidade->addItem(QString());
        input_unidade->setObjectName(QString::fromUtf8("input_unidade"));

        horizontalLayout_2->addWidget(input_unidade);


        verticalLayout_2->addLayout(horizontalLayout_2);


        verticalLayout_3->addLayout(verticalLayout_2);

        BT2_inserir_ingrediente = new QPushButton(layoutWidget1);
        BT2_inserir_ingrediente->setObjectName(QString::fromUtf8("BT2_inserir_ingrediente"));

        verticalLayout_3->addWidget(BT2_inserir_ingrediente);

        groupBox_3 = new QGroupBox(tab);
        groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));
        groupBox_3->setGeometry(QRect(30, 400, 991, 211));
        tabela_ingredientes = new QTableWidget(groupBox_3);
        if (tabela_ingredientes->columnCount() < 3)
            tabela_ingredientes->setColumnCount(3);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tabela_ingredientes->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tabela_ingredientes->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tabela_ingredientes->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        tabela_ingredientes->setObjectName(QString::fromUtf8("tabela_ingredientes"));
        tabela_ingredientes->setGeometry(QRect(10, 30, 981, 161));
        tabela_ingredientes->horizontalHeader()->setCascadingSectionResizes(false);
        tabela_ingredientes->horizontalHeader()->setDefaultSectionSize(200);
        tabela_ingredientes->horizontalHeader()->setProperty("showSortIndicator", QVariant(false));
        tabela_ingredientes->horizontalHeader()->setStretchLastSection(true);
        tabela_ingredientes->verticalHeader()->setProperty("showSortIndicator", QVariant(false));
        BT3_finalizar_cadastro = new QPushButton(tab);
        BT3_finalizar_cadastro->setObjectName(QString::fromUtf8("BT3_finalizar_cadastro"));
        BT3_finalizar_cadastro->setGeometry(QRect(772, 620, 241, 28));
        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QString::fromUtf8("tab_2"));
        tabWidget->addTab(tab_2, QString());
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 1153, 21));
        menuMenu = new QMenu(menubar);
        menuMenu->setObjectName(QString::fromUtf8("menuMenu"));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        menubar->addAction(menuMenu->menuAction());
        menuMenu->addAction(actionSalvar);
        menuMenu->addAction(actionEditar);
        menuMenu->addAction(actionExcluir);

        retranslateUi(MainWindow);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", nullptr));
        actionSalvar->setText(QApplication::translate("MainWindow", "Salvar", nullptr));
#ifndef QT_NO_SHORTCUT
        actionSalvar->setShortcut(QApplication::translate("MainWindow", "Ctrl+S", nullptr));
#endif // QT_NO_SHORTCUT
        actionEditar->setText(QApplication::translate("MainWindow", "Editar", nullptr));
#ifndef QT_NO_SHORTCUT
        actionEditar->setShortcut(QApplication::translate("MainWindow", "Ctrl+E", nullptr));
#endif // QT_NO_SHORTCUT
        actionExcluir->setText(QApplication::translate("MainWindow", "Excluir", nullptr));
#ifndef QT_NO_SHORTCUT
        actionExcluir->setShortcut(QApplication::translate("MainWindow", "Ctrl+X", nullptr));
#endif // QT_NO_SHORTCUT
        groupBox->setTitle(QApplication::translate("MainWindow", "CADASTRO", nullptr));
        label->setText(QApplication::translate("MainWindow", "NOME DA RECEITA", nullptr));
        label_12->setText(QApplication::translate("MainWindow", "ESTRELAS", nullptr));
        RB_1->setText(QApplication::translate("MainWindow", "1", nullptr));
        RB_2->setText(QApplication::translate("MainWindow", "2", nullptr));
        RB_3->setText(QApplication::translate("MainWindow", "3", nullptr));
        RB_4->setText(QApplication::translate("MainWindow", "4", nullptr));
        RB_5->setText(QApplication::translate("MainWindow", "5", nullptr));
        BT1_cadastro->setText(QApplication::translate("MainWindow", "Cadastrar", nullptr));
        groupBox_2->setTitle(QApplication::translate("MainWindow", "INGREDIENTES", nullptr));
        label_2->setText(QApplication::translate("MainWindow", "INGREDIENTE", nullptr));
        label_3->setText(QApplication::translate("MainWindow", "QUANTIDADE", nullptr));
        label_4->setText(QApplication::translate("MainWindow", "UNIDADE", nullptr));
        input_unidade->setItemText(0, QString());
        input_unidade->setItemText(1, QApplication::translate("MainWindow", "unidade(s)", nullptr));
        input_unidade->setItemText(2, QApplication::translate("MainWindow", "litros", nullptr));
        input_unidade->setItemText(3, QApplication::translate("MainWindow", "ml", nullptr));
        input_unidade->setItemText(4, QApplication::translate("MainWindow", "copos", nullptr));
        input_unidade->setItemText(5, QApplication::translate("MainWindow", "colheres", nullptr));
        input_unidade->setItemText(6, QApplication::translate("MainWindow", "x\303\255caras", nullptr));
        input_unidade->setItemText(7, QApplication::translate("MainWindow", "gramas", nullptr));
        input_unidade->setItemText(8, QApplication::translate("MainWindow", "kg", nullptr));

        BT2_inserir_ingrediente->setText(QApplication::translate("MainWindow", "Inserir", nullptr));
        groupBox_3->setTitle(QApplication::translate("MainWindow", "LISTA DE INGREDIENTES", nullptr));
        QTableWidgetItem *___qtablewidgetitem = tabela_ingredientes->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("MainWindow", "QUANTIDADE", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = tabela_ingredientes->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("MainWindow", "UNIDADE", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = tabela_ingredientes->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("MainWindow", "INGREDIENTE", nullptr));
        BT3_finalizar_cadastro->setText(QApplication::translate("MainWindow", "FINALIZAR CADASTRO", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("MainWindow", "Cadastro", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("MainWindow", "Banco de Receitas", nullptr));
        menuMenu->setTitle(QApplication::translate("MainWindow", "Menu", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
