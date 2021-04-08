#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "activite.h"
#include "enfants.h"
#include <QIntValidator>
#include <QMessageBox>
#include <QTabWidget>
#include <QTableView>
#include <QWidget>
#include <QStackedWidget>
#include <QLineEdit>
#include <QLabel>
#include <QPrintDialog>
#include <QPrinter>
#include <exportexcelobject.h>
#include "QSound"
#include "QIntValidator"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->textBrowser_activite->show();
    activite a;
    a.afficher_activite(ui->tableWidget_activite);
    enfants e;
    e.afficher_enfant(ui->tableWidget_enfant);
    QSqlQuery qry;
    qry.exec("select ID_ENFANT,NOM_ENFANT from enfants");
    while(qry.next()){
    ui->comboBox_enfant->addItem(qry.value(0).toString()+"-"+qry.value(1).toString());
    }
    ui->lineEdit_ageenfant->setValidator(new QIntValidator);
    ui->lineEdit_parent->setValidator(new QIntValidator);
    ui->lineEdit_nomenfant->setValidator(new QRegExpValidator( QRegExp("^[a-zA-Z]+$"), this ));
     ui->lineEdit_prenomenfant->setValidator(new QRegExpValidator( QRegExp("^[a-zA-Z]+$"), this ));
     ui->lineEdit_nom->setValidator(new QRegExpValidator( QRegExp("^[a-zA-Z]+$"), this ));


}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_actualiser_activite_clicked()
{
    QSound::play("click.wav");
    activite a;
    a.afficher_activite(ui->tableWidget_activite);
}

void MainWindow::on_pushButton_ajouter_clicked()
{
    QSound::play("click.wav");
    activite a;
    QString nom_act =ui->lineEdit_nom->text();
    QString desc =ui->lineEdit_desc->text();
    int dureeDhour =ui->timeEdit_dureeD->text().midRef(0,ui->timeEdit_dureeD->text().indexOf(":")).toInt();
    int dureeDmin =ui->timeEdit_dureeD->text().midRef(ui->timeEdit_dureeD->text().indexOf(":"),ui->timeEdit_dureeD->text().length()).toInt();
    int dureeAhour =ui->timeEdit_dureeA->text().midRef(0,ui->timeEdit_dureeA->text().indexOf(":")).toInt();
    int dureeAmin =ui->timeEdit_dureeA->text().midRef(ui->timeEdit_dureeA->text().indexOf(":"),ui->timeEdit_dureeA->text().length()).toInt();
    QString rdv =ui->textEdit_rdv->toPlainText();
    a.setNom_activite(ui->lineEdit_nom->text());
    a.setDescription(ui->lineEdit_desc->text());
    a.setDuree(ui->timeEdit_dureeD->text()+"-"+ui->timeEdit_dureeA->text());
    a.setTemps(ui->timeEdit_temps->text());
    a.setDatee(ui->dateEdit_datee->date().toString("dd-MM-yyyy"));
    a.setRdv(ui->textEdit_rdv->toPlainText());
   // qDebug()<<ui->comboBox_enfant->currentText().midRef(0,ui->comboBox_enfant->currentText().indexOf("-")).toInt();
    a.setId_enfant(ui->comboBox_enfant->currentText().midRef(0,ui->comboBox_enfant->currentText().indexOf("-")).toInt());
    if(!nom_act.isEmpty() && !desc.isEmpty() && !rdv.isEmpty()) {
      if(dureeDhour<=dureeAhour && dureeDmin<=dureeAmin) {
   if(a.ajouter_activite())
    {
       QMessageBox::information(this,"Ajouter Actualite","Vous avez bien enregistrer l'Actualite ");
    }
    else
        QMessageBox::warning(this,"Ajouter Actualite","Vous ne pas enregistrer l'Actualite");
    }
      else
         QMessageBox::warning(this,"Ajouter Actualite","Duree D doit etre inferieur a Duree A");
}
    else
         QMessageBox::warning(this,"Ajouter Actualite","Verifier votre champ");
}

void MainWindow::on_tableWidget_activite_itemClicked(QTableWidgetItem *item)
{
    tem_activite=item;
       row_activite=item->row();
       column_activite=item->column();
}

void MainWindow::on_pushButton_supprimer_clicked()
{
    QSound::play("click.wav");
    activite a;
    qDebug()<<tem_activite->row();
    a.supprimer_activite(ui->tableWidget_activite,tem_activite);
    QMessageBox::information(this,"supprimer","vous avez bien supprimer une partie de tableau");
}

void MainWindow::on_pushButton_modifier_clicked()
{
    QSound::play("click.wav");
    activite a;
    QString test=QString::number(row_activite);
    QString testt=QString::number(column_activite);
        if(!test.isNull()&& !testt.isNull())
        {
    a.modifier_activite(ui->tableWidget_activite,tem_activite);
    QMessageBox::information(this,"Modifier","vous avez bien modifier une partie de tableau");
}
        else
        {QMessageBox::information(this,"Modifier","Invalid champ");
        return;}
        }

void MainWindow::on_lineEdit_textChanged(const QString &arg1)
{
    activite a;
    a.rechercher_activite(ui->tableWidget_activite,arg1);
}

void MainWindow::on_tableWidget_enfant_itemClicked(QTableWidgetItem *item)
{
    tem_enfant=item;
       row_enfant=item->row();
       column_enfant=item->column();
}

void MainWindow::on_lineEdit_6_textChanged(const QString &arg1)
{
    enfants e;
    e.rechercher_enfant(ui->tableWidget_enfant,arg1);
}

void MainWindow::on_pushButton_clicked()
{
    QSound::play("click.wav");
    enfants e;
    e.afficher_enfant(ui->tableWidget_enfant);
}

void MainWindow::on_pushButton_2_clicked()
{
    QSound::play("click.wav");
    enfants e;
    e.supprimer_enfant(ui->tableWidget_enfant,tem_enfant);
    QMessageBox::information(this,"supprimer","vous avez bien supprimer une partie de tableau");
}

void MainWindow::on_pushButton_3_clicked()
{
    QSound::play("click.wav");
    enfants e;
    QString test=QString::number(row_enfant);
    QString testt=QString::number(column_enfant);
        if(!test.isNull()&& !testt.isNull())
        {
    e.modifier_enfant(ui->tableWidget_enfant,tem_enfant);
    QMessageBox::information(this,"Modifier","vous avez bien modifier une partie de tableau");
}
        else
        {QMessageBox::information(this,"Modifier","Invalid champ");
        return;}
}

void MainWindow::on_pushButton_ajouterenfant_clicked()
{
    QSound::play("click.wav");
    enfants e;
    QString nom_enf=ui->lineEdit_nomenfant->text();
    QString prenom_enf=ui->lineEdit_prenomenfant->text();
    QString age_enf=ui->lineEdit_ageenfant->text();
    QString parent_enf=ui->lineEdit_parent->text();
    e.setNom_enfant(ui->lineEdit_nomenfant->text());
    e.setPrenom_enfant(ui->lineEdit_prenomenfant->text());
    e.setAge_enfant(ui->lineEdit_ageenfant->text().toInt());
    e.setMatricule_parent(ui->lineEdit_parent->text().toInt());
    if(!nom_enf.isEmpty() && !prenom_enf.isEmpty() && !age_enf.isEmpty() && !parent_enf.isEmpty())
    {
    if(e.ajouter_enfant())
    {
       QMessageBox::information(this,"Ajouter Enfants","Vous avez bien enregistrer l'enfant ");
    }
    else
        QMessageBox::warning(this,"Ajouter Enfants","Vous ne pas enregistrer l'enfant");
    }
    else
        QMessageBox::warning(this,"Ajouter Enfants","Verifier votre champ");
}

void MainWindow::on_pushButton_4_clicked()
{
    QSound::play("click.wav");
    QPrinter printer;
             printer.setPrinterName("test");
             QPrintDialog dialog(&printer, this);
             if (dialog.exec() == QDialog::Rejected) return;
             ui->tableWidget_enfant->render(&printer);
}






void MainWindow::on_pushButton_pdf_clicked()
{
    QSound::play("click.wav");
  /*  QPrinter printer;
             printer.setPrinterName("test");
             QPrintDialog dialog(&printer, this);
             if (dialog.exec() == QDialog::Rejected) return;
             ui->tableWidget_activite->render(&printer);*/
    activite a;
    a.exporterpdf_activite(ui->textBrowser_activite);
}

void MainWindow::on_export_exl_clicked()
{
    QSound::play("click.wav");
    QString fileName = QFileDialog::getSaveFileName(this, tr("Excel file"), qApp->applicationDirPath (),
                                                        tr("Excel Files (*.xls)"));
        if (fileName.isEmpty())
            return;

        ExportExcelObject obj(fileName, "mydata", ui->tableWidget_activite);

        //colums to export
        obj.addField(0, "ID", "char(20)");
        obj.addField(1, "nom_activite", "char(20)");
        obj.addField(2, "decription", "char(20)");
        obj.addField(3, "duree", "char(20)");
        obj.addField(4, "temps", "char(20)");
        obj.addField(5, "datee", "char(20)");
        obj.addField(6, "RDV", "char(20)");
        obj.addField(7, "ID_ENF", "char(20)");



        int retVal = obj.export2Excel();
        if( retVal > 0)
        {
            QMessageBox::information(this, tr("Done"),
                                     QString(tr("%1 records exported!")).arg(retVal)
                                     );
        }
}

void MainWindow::on_pb_trier_date_clicked()
{
    QSound::play("click.wav");
    activite a;
    a.trier_activite(ui->tableWidget_activite);
}

void MainWindow::on_pb_triDate_clicked()
{
    QSound::play("click.wav");
    enfants e;
    e.trier_enfant(ui->tableWidget_enfant);
}
