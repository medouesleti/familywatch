#include "enfants.h"

enfants::enfants()
{

}

int enfants::getId() const
{
    return id;
}

void enfants::setId(int value)
{
    id = value;
}

QString enfants::getNom_enfant() const
{
    return nom_enfant;
}

void enfants::setNom_enfant(const QString &value)
{
    nom_enfant = value;
}

QString enfants::getPrenom_enfant() const
{
    return prenom_enfant;
}

void enfants::setPrenom_enfant(const QString &value)
{
    prenom_enfant = value;
}

int enfants::getAge_enfant() const
{
    return age_enfant;
}

void enfants::setAge_enfant(int value)
{
    age_enfant = value;
}

int enfants::getMatricule_parent() const
{
    return matricule_parent;
}

void enfants::setMatricule_parent(int value)
{
    matricule_parent = value;
}

bool enfants::ajouter_enfant()
{
    QSqlQuery qry;
    qry.prepare("Insert into enfants(NOM_ENFANT,PRENOM_ENFANT,AGE_ENFANT,MATRICULE_PARENT) values(?,?,?,?)");
    qry.addBindValue(getNom_enfant());
    qry.addBindValue(getPrenom_enfant());
    qry.addBindValue(getAge_enfant());
    qry.addBindValue(getMatricule_parent());

    if(qry.exec())
    {
        return true;
    }
    return false;
}

void enfants::afficher_enfant(QTableWidget *t)
{
    QSqlQuery qry;
    int i;
    int j=0;
    qry.exec("select * from enfants");
    while(qry.next()){
        j++;
    }
    t->setRowCount(j);
    t->setColumnCount(5);
    t->setSizePolicy(QSizePolicy::Expanding,QSizePolicy::Expanding);
    t->setHorizontalHeaderLabels(QString("id;nom_enfant;prenom_enfant;age_enfant;matricule_parent").split(";"));
    i=1;
    qry.exec("select * from enfants");
    while(qry.next()){
       // qDebug()<<qry.next();
        t->setItem(i-1,0,new QTableWidgetItem(qry.value(0).toString()));
        t->setItem(i-1,1,new QTableWidgetItem(qry.value(1).toString()));
        t->setItem(i-1,2,new QTableWidgetItem(qry.value(2).toString()));
        t->setItem(i-1,3,new QTableWidgetItem(qry.value(3).toString()));
        t->setItem(i-1,4,new QTableWidgetItem(qry.value(4).toString()));
     i++;
    }
}
void enfants::supprimer_enfant(QTableWidget *t, QTableWidgetItem *item)
{
    int row=item->row();
    QString num_app=t->item(row,0)->text();
    QSqlQuery q;
    q.prepare("delete from enfants where ID_ENFANT='"+num_app+"'");
    q.exec();
}
void enfants::modifier_enfant(QTableWidget *t,QTableWidgetItem *item)
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
qry.prepare("update enfants set "+get_column+"='"+item->text()+"' where ID_ENFANT='"+text_row+"'");
qry.exec();
}

void enfants::rechercher_enfant(QTableWidget *t,QString arg1)
{
    QSqlQuery query;
       int i;
       int j=0;
       query.exec("SELECT * from enfants where ID_ENFANT like'%"+arg1+"%' or NOM_ENFANT like'%"+arg1+"%' or PRENOM_ENFANT like'%"+arg1+"%'or AGE_ENFANT like'%"+arg1+"%' or MATRICULE_PARENT like'%"+arg1+"%'");

       while (query.next()) {
           j++;
                        /* qDebug()<<query.exec();    */
       }
   qDebug()<<"test"<<j;
       t->setRowCount(j);
       t->setColumnCount(5);
       t->setSizePolicy(QSizePolicy::Expanding,QSizePolicy::Expanding);
       t->setHorizontalHeaderLabels(QString("id;nom_enfant;prenom_enfant;age_enfant;matricule_parent").split(";"));
       query.exec("SELECT * from enfants where ID_ENFANT like'%"+arg1+"%' or NOM_ENFANT like'%"+arg1+"%' or PRENOM_ENFANT like'%"+arg1+"%'or AGE_ENFANT like'%"+arg1+"%' or MATRICULE_PARENT like'%"+arg1+"%'");
       i=1;
       while(query.next())
       {
       t->setItem(i-1,0,new QTableWidgetItem(query.value(0).toString()));
       t->setItem(i-1,1,new QTableWidgetItem(query.value(1).toString()));
       t->setItem(i-1,2,new QTableWidgetItem(query.value(2).toString()));
       t->setItem(i-1,3,new QTableWidgetItem(query.value(3).toString()));
       t->setItem(i-1,4,new QTableWidgetItem(query.value(4).toString()));
       i++;

       }
}
void enfants::trier_enfant(QTableWidget *t)
{
    QSqlQuery qry;
    int i;
    int j=0;
    qry.exec("select * from enfants order by age ASC");
    while(qry.next()){
        j++;
    }
    t->setRowCount(j);
    t->setColumnCount(5);
    t->setSizePolicy(QSizePolicy::Expanding,QSizePolicy::Expanding);
    t->setHorizontalHeaderLabels(QString("id;nom_enfant;prenom_enfant;age_enfant;matricule_parent").split(";"));
    i=1;
    qry.exec("select * from enfants order by age ASC");
    while(qry.next()){
       // qDebug()<<qry.next();
        t->setItem(i-1,0,new QTableWidgetItem(qry.value(0).toString()));
        t->setItem(i-1,1,new QTableWidgetItem(qry.value(1).toString()));
        t->setItem(i-1,2,new QTableWidgetItem(qry.value(2).toString()));
        t->setItem(i-1,3,new QTableWidgetItem(qry.value(3).toString()));
        t->setItem(i-1,4,new QTableWidgetItem(qry.value(4).toString()));
     i++;
    }
}
