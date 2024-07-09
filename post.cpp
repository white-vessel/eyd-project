#include "post.h"

#include <QsqlDatabase>//دیتابیس
#include "QsqlDriver"
#include "QsqlQuery"
#include "QsqlQueryModel"
#include "account.h"

Account accounts;
/*QSqlQuery q;
q.exec("INSERT INTO current_user(username)VALUES('"+Uname+"')");*/
post::post()
{

}
void post::SETimage_path(QString img){

    QSqlQuery q;
    QString cuser;
    cuser=accounts.GETCURRENTaccount_id();
    q.exec("INSERT INTO post(username,file_path)VALUES('"+cuser+"','"+img+"')");
    //q.exec("INSERT INTO post(file_path)VALUES('"+img+"')WHERE username='"+cuser+"'");

}
void post::SETcaption(QString cpt){
    QString cuser;
    cuser=accounts.GETCURRENTaccount_id();
    QSqlQuery q;
     q.exec("INSERT INTO post(username)VALUES('"+cuser+"')");
    q.exec("INSERT INTO post(caption)VALUES('"+cpt+"')WHERE username='"+cuser+"'");

}
void post::SETcategory(QString ctg){
    QString cuser;
    cuser=accounts.GETCURRENTaccount_id();
    QSqlQuery q;
    q.exec("INSERT INTO post(username)VALUES('"+cuser+"')");
    q.exec("INSERT INTO post(category)VALUES('"+ctg+"')WHERE username='"+cuser+"'");

}
