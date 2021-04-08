#ifndef ENFANTS_H
#define ENFANTS_H
#include <QMainWindow>
#include <QObject>
#include <QWidget>
#include <QMessageBox>
#include "qwidget.h"
#include "QtSql/QSqlDatabase"
#include <QtSql/QSqlQuery>
#include "error.h"
#include <QDebug>
#include "QtSql/QSqlError"
#include"QWidget"
#include"QTableWidget"
#include "QTableWidgetItem"
#include "QSystemTrayIcon"
#include "QFileDialog"
#include "QTextBrowser"
#include "QPrinter"
#include "QDate"


class enfants
{
public:
    enfants();
    int getId() const;
    void setId(int value);

    QString getNom_enfant() const;
    void setNom_enfant(const QString &value);

    QString getPrenom_enfant() const;
    void setPrenom_enfant(const QString &value);

    int getAge_enfant() const;
    void setAge_enfant(int value);

    int getMatricule_parent() const;
    void setMatricule_parent(int value);
    bool ajouter_enfant();
    void afficher_enfant(QTableWidget *t);
    void modifier_enfant(QTableWidget *t,QTableWidgetItem *tem_syndic);
    void supprimer_enfant(QTableWidget *t,QTableWidgetItem *item);
    void rechercher_enfant(QTableWidget *t,QString arg1);
    void exporterpdf_enfant(QTextBrowser *text);
    void trier_enfant(QTableWidget *t);

private:
    int id;
    QString nom_enfant;
    QString prenom_enfant;
    int age_enfant;
   int matricule_parent;
};

#endif // ENFANTS_H
