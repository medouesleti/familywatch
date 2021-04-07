#include "connexion.h"
#include <QSqlError>
#include "QString"
connexion::connexion(){
                      }
bool connexion::ouvrirConnexion()
{bool test=false;
    QSqlDatabase db = QSqlDatabase::addDatabase("QODBC");
                           db.setDatabaseName("projet_2A");
                           db.setUserName("spot");//inserer nom de l'utilisateur
                           db.setPassword("admin");//inserer mot de passe de cet utilisateur

if (db.open())
    test=true;

else test=false;
return  test;
}
void connexion::fermerConnexion()
{db.close();}
