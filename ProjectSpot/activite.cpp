#include "activite.h"
#include <QSqlQueryModel>
#include <QSqlQuery>
activite::activite()
{

}

int activite::getId_activite() const
{
    return id_activite;
}

void activite::setId_activite(int value)
{
    id_activite = value;
}

QString activite::getNom_activite() const
{
    return nom_activite;
}

void activite::setNom_activite(const QString &value)
{
    nom_activite = value;
}

QString activite::getDescription() const
{
    return description;
}

void activite::setDescription(const QString &value)
{
    description = value;
}

QString activite::getDuree() const
{
    return duree;
}

void activite::setDuree(const QString &value)
{
    duree = value;
}

QString activite::getTemps() const
{
    return temps;
}

void activite::setTemps(const QString &value)
{
    temps = value;
}


QString activite::getDatee() const
{
    return datee;
}

void activite::setDatee(const QString &value)
{
    datee = value;
}

QString activite::getRdv() const
{
    return rdv;
}

void activite::setRdv(const QString &value)
{
    rdv = value;
}


activite::activite(QString nom,QString desc,QString duree,QString temps,QString datee,QString rdv){
    this->nom_activite=nom;
    this->description=desc;
    this->duree=duree;
    this->temps=temps;
    this->datee=datee;
    this->rdv=rdv;
}

bool activite::ajouter_activite()
{
    QSqlQuery qry;
    qry.prepare("Insert into activite(NOM_ACTIVITE,DESCRIPTION,DUREE,TEMPS,DATEE,RDV,ID_ENFANT) values(?,?,?,?,?,?,?)");
    qry.addBindValue(getNom_activite());
    qry.addBindValue(getDescription());
    qry.addBindValue(getDuree());
    qry.addBindValue(getTemps());
    qry.addBindValue(getDatee());
    qry.addBindValue(getRdv());
    qry.addBindValue(getId_enfant());
    if(qry.exec())
    {
        return true;
    }
    return false;
}

void activite::afficher_activite(QTableWidget *t)
{
    QSqlQuery qry;
    int i;
    int j=0;
    qry.exec("select a.*,e.* from activite a inner join enfants e on a.id_enfant=e.id_enfant");
    while(qry.next()){
        j++;
    }
    t->setRowCount(j);
    t->setColumnCount(8);
    t->setSizePolicy(QSizePolicy::Expanding,QSizePolicy::Expanding);
    t->setHorizontalHeaderLabels(QString("id;nom_activite;description;duree;temps;datee;rdv;nom_enfant").split(";"));
    i=1;
    qry.exec("select a.*,e.* from activite a inner join enfants e on a.id_enfant=e.id_enfant");
    while(qry.next()){
       // qDebug()<<qry.next();
        t->setItem(i-1,0,new QTableWidgetItem(qry.value(0).toString()));
        t->setItem(i-1,1,new QTableWidgetItem(qry.value(1).toString()));
        t->setItem(i-1,2,new QTableWidgetItem(qry.value(2).toString()));
        t->setItem(i-1,3,new QTableWidgetItem(qry.value(3).toString()));
        t->setItem(i-1,4,new QTableWidgetItem(qry.value(4).toString()));
         t->setItem(i-1,5,new QTableWidgetItem(qry.value(5).toString()));
          t->setItem(i-1,6,new QTableWidgetItem(qry.value(6).toString()));
          t->setItem(i-1,7,new QTableWidgetItem(qry.value(9).toString()));
    i++;
    }
}
void activite::supprimer_activite(QTableWidget *t,QTableWidgetItem *item)
{
    int row=item->row();
    QString num_app=t->item(row,0)->text();
    QSqlQuery q;
    q.prepare("delete from activite where ID_ACTIVITE='"+num_app+"'");
    q.exec();
}
void activite::modifier_activite(QTableWidget *t,QTableWidgetItem *item)
{

    int row=item->row();
    int column=item->column();

    QString text_row=t->item(row,0)->text();
        int text_row_int=text_row.toInt();
qDebug()<<text_row_int;
qDebug()<<text_row;
QString get_column=t->horizontalHeaderItem(column)->text();
qDebug()<<get_column;
 QSqlQuery qry;
qry.prepare("update activite set "+get_column+"='"+item->text()+"' where ID_ACTIVITE='"+text_row+"'");
qry.exec();
}

void activite::rechercher_activite(QTableWidget *t,QString arg1)
{
    QSqlQuery query;
       int i;
       int j=0;
       query.exec("SELECT a.*,e.* from activite a inner join enfants e on a.id_enfant=e.id_enfant where a.ID_ACTIVITE like'%"+arg1+"%' or a.NOM_ACTIVITE like'%"+arg1+"%' or a.DESCRIPTION like'%"+arg1+"%'or a.DUREE like'%"+arg1+"%' or a.TEMPS like'%"+arg1+"%' or a.DATEE like'%"+arg1+"%' or a.RDV like'%"+arg1+"%' or e.NOM_ENFANT like'%"+arg1+"%'");

       while (query.next()) {
           j++;
                        /* qDebug()<<query.exec();    */
       }
   qDebug()<<"test"<<j;
       t->setRowCount(j);
       t->setColumnCount(8);
       t->setSizePolicy(QSizePolicy::Expanding,QSizePolicy::Expanding);
       t->setHorizontalHeaderLabels(QString("id;nom_activite;description;duree;temps;datee;rdv;nom_enfant").split(";"));
       query.exec("SELECT a.*,e.* from activite a inner join enfants e on a.id_enfant=e.id_enfant where a.ID_ACTIVITE like'%"+arg1+"%' or a.NOM_ACTIVITE like'%"+arg1+"%' or a.DESCRIPTION like'%"+arg1+"%'or a.DUREE like'%"+arg1+"%' or a.TEMPS like'%"+arg1+"%' or a.DATEE like'%"+arg1+"%' or a.RDV like'%"+arg1+"%' or e.NOM_ENFANT like'%"+arg1+"%'");
       i=1;
       while(query.next())
       {
       t->setItem(i-1,0,new QTableWidgetItem(query.value(0).toString()));
       t->setItem(i-1,1,new QTableWidgetItem(query.value(1).toString()));
       t->setItem(i-1,2,new QTableWidgetItem(query.value(2).toString()));
       t->setItem(i-1,3,new QTableWidgetItem(query.value(3).toString()));
       t->setItem(i-1,4,new QTableWidgetItem(query.value(4).toString()));
       t->setItem(i-1,5,new QTableWidgetItem(query.value(5).toString()));
       t->setItem(i-1,6,new QTableWidgetItem(query.value(6).toString()));
        t->setItem(i-1,7,new QTableWidgetItem(query.value(9).toString()));
       i++;

       }
}

int activite::getId_enfant() const
{
    return id_enfant;
}

void activite::setId_enfant(int value)
{
    id_enfant = value;
}

void activite::exporterpdf_activite(QTextBrowser *text)
{

    QString tt;
    QSqlQuery qry;
    qry.exec("select a.*,e.* from activite a inner join enfants e on a.id_enfant=e.id_enfant");
    while(qry.next())
    {
        tt="Id: "+qry.value(0).toString()+"\n"+" NOM_ACTIVITE: "+qry.value(1).toString()+"\n"+" DESCRIPTION: "+qry.value(2).toString()+"\n"+" DUREE: "+qry.value(3).toString()+"\n"+" TEMPS: "+qry.value(4).toString()+"\n"+" DATEE: "+qry.value(5).toString()+"\n"+" RDV: "+qry.value(6).toString()+"\n"+" NOM ENFANT: "+qry.value(9).toString()+"\n"+"***************************************************************************************"+"\n";
        text->setText(text->toPlainText()+tt);
    }

    QString fileName = QFileDialog::getSaveFileName((QWidget* )0, "Export PDF", QString(), "*.pdf");
    if (QFileInfo(fileName).suffix().isEmpty()) { fileName.append(".pdf"); }
    QPrinter printer(QPrinter::PrinterResolution);
    printer.setOutputFormat(QPrinter::PdfFormat);
    printer.setPaperSize(QPrinter::A4);
    printer.setOutputFileName(fileName);
    text->print(&printer);
}

void activite::trier_activite(QTableWidget *t)
{
    QSqlQuery qry;
    int i;
    int j=0;
    qry.exec("select a.*,e.* from activite a inner join enfants e on a.id_enfant=e.id_enfant order by CAST(SUBSTR(a.datee,7,4) AS NUMBER) ASC");
    while(qry.next()){
        j++;
    }
    t->setRowCount(j);
    t->setColumnCount(8);
    t->setSizePolicy(QSizePolicy::Expanding,QSizePolicy::Expanding);
    t->setHorizontalHeaderLabels(QString("id;nom_activite;description;duree;temps;datee;rdv;nom_enfant").split(";"));
    i=1;
    qry.exec("select a.*,e.* from activite a inner join enfants e on a.id_enfant=e.id_enfant order by CAST( SUBSTR(a.datee,7,4) AS NUMBER) ASC");
    while(qry.next()){
       // qDebug()<<qry.next();
        t->setItem(i-1,0,new QTableWidgetItem(qry.value(0).toString()));
        t->setItem(i-1,1,new QTableWidgetItem(qry.value(1).toString()));
        t->setItem(i-1,2,new QTableWidgetItem(qry.value(2).toString()));
        t->setItem(i-1,3,new QTableWidgetItem(qry.value(3).toString()));
        t->setItem(i-1,4,new QTableWidgetItem(qry.value(4).toString()));
         t->setItem(i-1,5,new QTableWidgetItem(qry.value(5).toString()));
          t->setItem(i-1,6,new QTableWidgetItem(qry.value(6).toString()));
          t->setItem(i-1,7,new QTableWidgetItem(qry.value(9).toString()));
    i++;
    }
}


