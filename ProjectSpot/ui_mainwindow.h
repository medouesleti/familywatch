/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QTimeEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QTabWidget *tab;
    QWidget *ajouter_en;
    QPushButton *pushButton_ajouterenfant;
    QLineEdit *lineEdit_nomenfant;
    QLineEdit *lineEdit_prenomenfant;
    QLineEdit *lineEdit_ageenfant;
    QLineEdit *lineEdit_parent;
    QLabel *label_8;
    QLabel *label_9;
    QLabel *label_10;
    QLabel *label_11;
    QWidget *afficher_en;
    QTableWidget *tableWidget_enfant;
    QLineEdit *lineEdit_6;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;
    QPushButton *pb_triDate;
    QLabel *label_13;
    QWidget *ajouter;
    QLineEdit *lineEdit_nom;
    QLineEdit *lineEdit_desc;
    QDateEdit *dateEdit_datee;
    QPushButton *pushButton_ajouter;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QTimeEdit *timeEdit_dureeD;
    QTimeEdit *timeEdit_dureeA;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_7;
    QTimeEdit *timeEdit_temps;
    QTextEdit *textEdit_rdv;
    QComboBox *comboBox_enfant;
    QLabel *label_12;
    QWidget *afficher;
    QTableWidget *tableWidget_activite;
    QPushButton *actualiser_activite;
    QPushButton *pushButton_supprimer;
    QPushButton *pushButton_modifier;
    QLineEdit *lineEdit;
    QPushButton *pushButton_pdf;
    QPushButton *pb_trier_date;
    QPushButton *export_exl;
    QTextBrowser *textBrowser_activite;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(958, 603);
        MainWindow->setStyleSheet(QLatin1String(" QTabWidget::pane { /* The tab widget frame */\n"
"     border-top: 2px solid #595fdd;\n"
" }\n"
"  QTabWidget::tab-bar {\n"
"     alignment: center;\n"
" }\n"
" \n"
"QTabBar::tab {\n"
"     background: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                 stop: 0 #E1E1E1, stop: 0.4 #DDDDDD,\n"
"                                 stop: 0.5 #D8D8D8, stop: 1.0 #D3D3D3);\n"
"     border: 2px solid #595fdd;\n"
"     border-bottom-color: #595fdd; /* same as the pane color */\n"
"     border-top-left-radius: 4px;\n"
"     border-top-right-radius: 4px;\n"
"     min-width: 8ex;\n"
"     padding: 2px;\n"
" }\n"
" \n"
" QTabBar::tab:selected, QTabBar::tab:hover {\n"
"     background: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                 stop: 0 #595fdd, stop: 0.4 #595fdd,\n"
"                                 stop: 0.5 #595fdd, stop: 1.0 #595fdd);\n"
"	color:white; \n"
"}\n"
" \n"
" QTabBar::tab:selected {\n"
"     border-color: #9B9B9B;\n"
"     border-bottom-color: #5"
                        "95fdd; /* same as pane color */\n"
" }\n"
" \n"
" QTabBar::tab:!selected {\n"
"     margin-top: 2px; /* make non-selected tabs look smaller */\n"
" }\n"
" \n"
" /* make use of negative margins for overlapping tabs */\n"
" QTabBar::tab:selected {\n"
"     /* expand/overlap to the left and right by 4px */\n"
"     margin-left: -4px;\n"
"     margin-right: -4px;\n"
" }\n"
" \n"
" QTabBar::tab:first:selected {\n"
"     margin-left: 0; /* the first selected tab has nothing to overlap with on the left */\n"
" }\n"
" \n"
" QTabBar::tab:last:selected {\n"
"     margin-right: 0; /* the last selected tab has nothing to overlap with on the right */\n"
" }\n"
" \n"
" QTabBar::tab:only-one {\n"
"     margin: 0; /* if there is only one tab, we don't want overlapping margins */\n"
"}\n"
"\n"
" \n"
"\n"
"QTableView {border: 3px solid #595fdd;text-align: top;padding: 4px;border-radius: 7px;border-bottom-left-radius: 7px;background: #fff;opacity:0.5;width: 15px;}\n"
"QTableView::item:focus{selection-background-color: #8FE585;}\n"
""
                        "\n"
"#MyLoginForm {\n"
"background: red;\n"
"}\n"
"\n"
"#mainFrame {\n"
"border: 3px solid red;\n"
"border-radius: 40px;\n"
"background: white;\n"
"}\n"
"QLineEdit {\n"
"padding: 1px;\n"
"border-style: solid;\n"
"border: 2px solid #595fdd;\n"
"border-radius: 8px;\n"
"}\n"
"QTextEdit {\n"
"padding: 1px;\n"
"border-style: solid;\n"
"border: 2px solid #595fdd;\n"
"border-radius: 8px;\n"
"}\n"
"QDateEdit {\n"
"padding: 1px;\n"
"border-style: solid;\n"
"border: 2px solid #595fdd;\n"
"border-radius: 8px;\n"
"}\n"
"QTimeEdit {\n"
"padding: 1px;\n"
"border-style: solid;\n"
"border: 2px solid #595fdd;\n"
"border-radius: 8px;\n"
"}\n"
"\n"
"QPushButton {\n"
"color: black;\n"
"  background: white;\n"
"\n"
"border-width: 2px;\n"
"border-color: #595fdd;\n"
"border-style: solid;\n"
"border-radius: 10;\n"
"padding: 3px;\n"
"font-size: 12px;\n"
"padding-left: 5px;\n"
"padding-right: 5px;\n"
"min-width: 80px;\n"
"max-width:1800px;\n"
"min-height: 20px;\n"
"max-height: 20px;\n"
"}\n"
"QLabel {\n"
"font-weight: blue;\n"
"font-si"
                        "ze: 13px;\n"
"}\n"
"QPushButton:hover { background-color: #595fdd; }\n"
"QComboBox{\n"
"border-style: solid;\n"
"border: 2px solid #595fdd;\n"
"\n"
"\n"
" }"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        tab = new QTabWidget(centralwidget);
        tab->setObjectName(QStringLiteral("tab"));
        tab->setGeometry(QRect(0, 0, 952, 614));
        QPalette palette;
        tab->setPalette(palette);
        QFont font;
        font.setFamily(QStringLiteral("Comic Sans MS"));
        font.setBold(true);
        font.setUnderline(false);
        font.setWeight(75);
        tab->setFont(font);
        tab->setMouseTracking(true);
        tab->setAutoFillBackground(false);
        tab->setStyleSheet(QStringLiteral(""));
        ajouter_en = new QWidget();
        ajouter_en->setObjectName(QStringLiteral("ajouter_en"));
        ajouter_en->setStyleSheet(QLatin1String("#ajouter_en {\n"
"background-image: url(\"bg.png\");\n"
"}"));
        pushButton_ajouterenfant = new QPushButton(ajouter_en);
        pushButton_ajouterenfant->setObjectName(QStringLiteral("pushButton_ajouterenfant"));
        pushButton_ajouterenfant->setGeometry(QRect(450, 360, 94, 30));
        lineEdit_nomenfant = new QLineEdit(ajouter_en);
        lineEdit_nomenfant->setObjectName(QStringLiteral("lineEdit_nomenfant"));
        lineEdit_nomenfant->setGeometry(QRect(300, 80, 124, 26));
        lineEdit_prenomenfant = new QLineEdit(ajouter_en);
        lineEdit_prenomenfant->setObjectName(QStringLiteral("lineEdit_prenomenfant"));
        lineEdit_prenomenfant->setGeometry(QRect(300, 150, 124, 26));
        lineEdit_ageenfant = new QLineEdit(ajouter_en);
        lineEdit_ageenfant->setObjectName(QStringLiteral("lineEdit_ageenfant"));
        lineEdit_ageenfant->setGeometry(QRect(300, 220, 124, 26));
        lineEdit_parent = new QLineEdit(ajouter_en);
        lineEdit_parent->setObjectName(QStringLiteral("lineEdit_parent"));
        lineEdit_parent->setGeometry(QRect(300, 290, 124, 26));
        label_8 = new QLabel(ajouter_en);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(200, 80, 94, 30));
        label_9 = new QLabel(ajouter_en);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setGeometry(QRect(200, 150, 100, 30));
        label_10 = new QLabel(ajouter_en);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setGeometry(QRect(200, 220, 94, 30));
        label_11 = new QLabel(ajouter_en);
        label_11->setObjectName(QStringLiteral("label_11"));
        label_11->setGeometry(QRect(200, 290, 94, 30));
        tab->addTab(ajouter_en, QString());
        afficher_en = new QWidget();
        afficher_en->setObjectName(QStringLiteral("afficher_en"));
        afficher_en->setStyleSheet(QLatin1String("#afficher_en {\n"
"background-image: url(\"bg.png\");\n"
"}"));
        tableWidget_enfant = new QTableWidget(afficher_en);
        tableWidget_enfant->setObjectName(QStringLiteral("tableWidget_enfant"));
        tableWidget_enfant->setGeometry(QRect(30, 80, 621, 371));
        lineEdit_6 = new QLineEdit(afficher_en);
        lineEdit_6->setObjectName(QStringLiteral("lineEdit_6"));
        lineEdit_6->setGeometry(QRect(290, 40, 151, 26));
        pushButton = new QPushButton(afficher_en);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(30, 470, 94, 30));
        pushButton_2 = new QPushButton(afficher_en);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(150, 470, 94, 30));
        pushButton_3 = new QPushButton(afficher_en);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setGeometry(QRect(280, 470, 94, 30));
        pushButton_4 = new QPushButton(afficher_en);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));
        pushButton_4->setGeometry(QRect(410, 470, 94, 30));
        pb_triDate = new QPushButton(afficher_en);
        pb_triDate->setObjectName(QStringLiteral("pb_triDate"));
        pb_triDate->setGeometry(QRect(540, 470, 94, 30));
        label_13 = new QLabel(afficher_en);
        label_13->setObjectName(QStringLiteral("label_13"));
        label_13->setGeometry(QRect(400, 10, 911, 30));
        label_13->setStyleSheet(QStringLiteral(""));
        tab->addTab(afficher_en, QString());
        label_13->raise();
        tableWidget_enfant->raise();
        lineEdit_6->raise();
        pushButton->raise();
        pushButton_2->raise();
        pushButton_3->raise();
        pushButton_4->raise();
        pb_triDate->raise();
        ajouter = new QWidget();
        ajouter->setObjectName(QStringLiteral("ajouter"));
        ajouter->setStyleSheet(QLatin1String("#ajouter {\n"
"background-image: url(\"bg.png\");\n"
"}"));
        lineEdit_nom = new QLineEdit(ajouter);
        lineEdit_nom->setObjectName(QStringLiteral("lineEdit_nom"));
        lineEdit_nom->setGeometry(QRect(300, 50, 131, 26));
        lineEdit_desc = new QLineEdit(ajouter);
        lineEdit_desc->setObjectName(QStringLiteral("lineEdit_desc"));
        lineEdit_desc->setGeometry(QRect(300, 110, 131, 26));
        dateEdit_datee = new QDateEdit(ajouter);
        dateEdit_datee->setObjectName(QStringLiteral("dateEdit_datee"));
        dateEdit_datee->setGeometry(QRect(300, 270, 131, 26));
        pushButton_ajouter = new QPushButton(ajouter);
        pushButton_ajouter->setObjectName(QStringLiteral("pushButton_ajouter"));
        pushButton_ajouter->setGeometry(QRect(590, 360, 94, 30));
        label = new QLabel(ajouter);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(174, 50, 94, 30));
        label_2 = new QLabel(ajouter);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(170, 110, 94, 30));
        label_3 = new QLabel(ajouter);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(170, 160, 94, 30));
        label_4 = new QLabel(ajouter);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(170, 220, 94, 30));
        timeEdit_dureeD = new QTimeEdit(ajouter);
        timeEdit_dureeD->setObjectName(QStringLiteral("timeEdit_dureeD"));
        timeEdit_dureeD->setGeometry(QRect(300, 160, 131, 26));
        timeEdit_dureeA = new QTimeEdit(ajouter);
        timeEdit_dureeA->setObjectName(QStringLiteral("timeEdit_dureeA"));
        timeEdit_dureeA->setGeometry(QRect(470, 160, 118, 26));
        label_5 = new QLabel(ajouter);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(450, 160, 94, 30));
        label_6 = new QLabel(ajouter);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(170, 270, 94, 30));
        label_7 = new QLabel(ajouter);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(170, 330, 94, 30));
        timeEdit_temps = new QTimeEdit(ajouter);
        timeEdit_temps->setObjectName(QStringLiteral("timeEdit_temps"));
        timeEdit_temps->setGeometry(QRect(300, 220, 131, 26));
        textEdit_rdv = new QTextEdit(ajouter);
        textEdit_rdv->setObjectName(QStringLiteral("textEdit_rdv"));
        textEdit_rdv->setGeometry(QRect(300, 310, 131, 26));
        comboBox_enfant = new QComboBox(ajouter);
        comboBox_enfant->setObjectName(QStringLiteral("comboBox_enfant"));
        comboBox_enfant->setGeometry(QRect(300, 440, 131, 30));
        label_12 = new QLabel(ajouter);
        label_12->setObjectName(QStringLiteral("label_12"));
        label_12->setGeometry(QRect(200, 440, 94, 30));
        tab->addTab(ajouter, QString());
        afficher = new QWidget();
        afficher->setObjectName(QStringLiteral("afficher"));
        afficher->setStyleSheet(QLatin1String("#afficher {\n"
"background-image: url(\"bg.png\");\n"
"}"));
        tableWidget_activite = new QTableWidget(afficher);
        tableWidget_activite->setObjectName(QStringLiteral("tableWidget_activite"));
        tableWidget_activite->setGeometry(QRect(10, 70, 661, 351));
        tableWidget_activite->setMouseTracking(true);
        actualiser_activite = new QPushButton(afficher);
        actualiser_activite->setObjectName(QStringLiteral("actualiser_activite"));
        actualiser_activite->setGeometry(QRect(20, 440, 94, 30));
        pushButton_supprimer = new QPushButton(afficher);
        pushButton_supprimer->setObjectName(QStringLiteral("pushButton_supprimer"));
        pushButton_supprimer->setGeometry(QRect(130, 440, 94, 30));
        pushButton_modifier = new QPushButton(afficher);
        pushButton_modifier->setObjectName(QStringLiteral("pushButton_modifier"));
        pushButton_modifier->setGeometry(QRect(240, 440, 94, 30));
        lineEdit = new QLineEdit(afficher);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(270, 30, 151, 26));
        pushButton_pdf = new QPushButton(afficher);
        pushButton_pdf->setObjectName(QStringLiteral("pushButton_pdf"));
        pushButton_pdf->setGeometry(QRect(350, 440, 94, 30));
        pb_trier_date = new QPushButton(afficher);
        pb_trier_date->setObjectName(QStringLiteral("pb_trier_date"));
        pb_trier_date->setGeometry(QRect(590, 440, 94, 30));
        export_exl = new QPushButton(afficher);
        export_exl->setObjectName(QStringLiteral("export_exl"));
        export_exl->setGeometry(QRect(470, 440, 94, 30));
        textBrowser_activite = new QTextBrowser(afficher);
        textBrowser_activite->setObjectName(QStringLiteral("textBrowser_activite"));
        textBrowser_activite->setGeometry(QRect(735, 80, 151, 331));
        tab->addTab(afficher, QString());
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 958, 26));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        tab->setCurrentIndex(3);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", Q_NULLPTR));
        pushButton_ajouterenfant->setText(QApplication::translate("MainWindow", "Ajouter", Q_NULLPTR));
        label_8->setText(QApplication::translate("MainWindow", "Nom Enfant :", Q_NULLPTR));
        label_9->setText(QApplication::translate("MainWindow", "Prenom Enfant :", Q_NULLPTR));
        label_10->setText(QApplication::translate("MainWindow", "Age Enfant :", Q_NULLPTR));
        label_11->setText(QApplication::translate("MainWindow", "Parent :", Q_NULLPTR));
        tab->setTabText(tab->indexOf(ajouter_en), QApplication::translate("MainWindow", "Ajouter Enfant", Q_NULLPTR));
        pushButton->setText(QApplication::translate("MainWindow", "Actualiser", Q_NULLPTR));
        pushButton_2->setText(QApplication::translate("MainWindow", "Supprimer", Q_NULLPTR));
        pushButton_3->setText(QApplication::translate("MainWindow", "Modifier", Q_NULLPTR));
        pushButton_4->setText(QApplication::translate("MainWindow", "Exporter", Q_NULLPTR));
        pb_triDate->setText(QApplication::translate("MainWindow", "Trier par age", Q_NULLPTR));
        label_13->setText(QString());
        tab->setTabText(tab->indexOf(afficher_en), QApplication::translate("MainWindow", "Afficher Enfant", Q_NULLPTR));
        pushButton_ajouter->setText(QApplication::translate("MainWindow", "Ajouter", Q_NULLPTR));
        label->setText(QApplication::translate("MainWindow", "Nom Activite :", Q_NULLPTR));
        label_2->setText(QApplication::translate("MainWindow", "Description :", Q_NULLPTR));
        label_3->setText(QApplication::translate("MainWindow", "Duree :", Q_NULLPTR));
        label_4->setText(QApplication::translate("MainWindow", "Temps:", Q_NULLPTR));
        label_5->setText(QApplication::translate("MainWindow", "-", Q_NULLPTR));
        label_6->setText(QApplication::translate("MainWindow", "Datee :", Q_NULLPTR));
        label_7->setText(QApplication::translate("MainWindow", "Rdv :", Q_NULLPTR));
        label_12->setText(QApplication::translate("MainWindow", "Enfant :", Q_NULLPTR));
        tab->setTabText(tab->indexOf(ajouter), QApplication::translate("MainWindow", "Ajouter Activite", Q_NULLPTR));
        actualiser_activite->setText(QApplication::translate("MainWindow", "Actualiser", Q_NULLPTR));
        pushButton_supprimer->setText(QApplication::translate("MainWindow", "Supprimer", Q_NULLPTR));
        pushButton_modifier->setText(QApplication::translate("MainWindow", "Modifier", Q_NULLPTR));
        pushButton_pdf->setText(QApplication::translate("MainWindow", "Exporter  PDF", Q_NULLPTR));
        pb_trier_date->setText(QApplication::translate("MainWindow", "Trier par date", Q_NULLPTR));
        export_exl->setText(QApplication::translate("MainWindow", "exporter EXL", Q_NULLPTR));
        tab->setTabText(tab->indexOf(afficher), QApplication::translate("MainWindow", "Afficher Activite", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
