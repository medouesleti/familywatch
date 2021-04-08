#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "QTableWidget"
#include "activite.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    QTableWidgetItem *tem_activite;
    QTableWidgetItem *tem_enfant;
    int row_activite,column_activite;
    int row_enfant,column_enfant;

private slots:
    void on_actualiser_activite_clicked();

    void on_pushButton_ajouter_clicked();

    void on_tableWidget_activite_itemClicked(QTableWidgetItem *item);

    void on_pushButton_supprimer_clicked();

    void on_pushButton_modifier_clicked();

    void on_lineEdit_textChanged(const QString &arg1);

    void on_tableWidget_enfant_itemClicked(QTableWidgetItem *item);

    void on_lineEdit_6_textChanged(const QString &arg1);

    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_ajouterenfant_clicked();

    void on_pushButton_4_clicked();



    void on_pushButton_pdf_clicked();

    void on_export_exl_clicked();

    void on_pb_trier_date_clicked();

    void on_pb_triDate_clicked();

private:
    Ui::MainWindow *ui;
    activite tmpactivite;
    int id_act=0;

};
#endif // MAINWINDOW_H
