#include "network.h"
#include <QsqlDatabase>//دیتابیس
#include "QsqlDriver"
#include "QsqlQuery"
#include "QsqlQueryModel"

#include "account.h"


network::network()
{

}

void network::follow(QString f){
    QSqlQuery q;
    Account a;
    QString cuser=a.GETCURRENTaccount_id();

    q.exec("INSERT INTO network(username,follow)VALUES('"+cuser+"','"+f+"')");

}
void network::unfollow(QString f){
    QSqlQuery q;
    Account a;
    QString cuser=a.GETCURRENTaccount_id();
    q.exec("DELETE FROM network WHERE username ='"+cuser+"' AND follow='"+f+"'");
}
