#include "post.h"

#include <QsqlDatabase>//دیتابیس
#include "QsqlDriver"
#include "QsqlQuery"
#include "QsqlQueryModel"

/*QSqlQuery q;
q.exec("INSERT INTO current_user(username)VALUES('"+Uname+"')");*/
post::post()
{

}
void SETimage_path(QString img){
    QSqlQuery q;
    q.exec("INSERT INTO post(file_path)VALUES('"+img+"')");
}
void SETcaption(QString cpt){
    QSqlQuery q;
    q.exec("INSERT INTO post(caption)VALUES('"+cpt+"')");
}
void SETcategory(QString ctg){
    QSqlQuery q;
    q.exec("INSERT INTO post(category)VALUES('"+ctg+"')");
}
