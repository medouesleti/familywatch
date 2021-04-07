#ifndef ACTIVITE_H
#define ACTIVITE_H
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
#include <QSqlQueryModel>
#include <QSqlQuery>

class activite
{
public:
    activite();
    activite(QString,QString,QString,QString,QString,QString);

    int getId_activite() const;
    void setId_activite(int value);

    QString getNom_activite() const;
    void setNom_activite(const QString &value);

    QString getDescription() const;
    void setDescription(const QString &value);

    QString getDuree() const;
    void setDuree(const QString &value);

    QString getTemps() const;
    void setTemps(const QString &value);

    QString getDatee() const;
    void setDatee(const QString &value);

    QString getRdv() const;
    void setRdv(const QString &value);
    bool ajouter_activite();
    void afficher_activite(QTableWidget *t);
    void modifier_activite(QTableWidget *t,QTableWidgetItem *tem_syndic);
    void supprimer_activite(QTableWidget *t,QTableWidgetItem *item);
    void rechercher_activite(QTableWidget *t,QString arg1);
    void exporterpdf_activite(QTextBrowser *text);


    int getId_enfant() const;
    void setId_enfant(int value);

private:
    int id_activite;
    QString nom_activite;
    QString description;
    QString duree;
    QString temps;
    QString datee;
    QString rdv;
    int id_enfant;



};

#endif // ACTIVITE_H
