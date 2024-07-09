#include "person.h"
#include <QsqlDatabase>//دیتابیس
#include "QsqlDriver"
#include "QsqlQuery"
#include "QsqlQueryModel"
person::person()
{
    QSqlDatabase database;//دیتابیس
    database=QSqlDatabase::addDatabase("QSQLITE");
    database.setDatabaseName("d:\\appdb.db");
    database.open();
}
QString person::GETfirst_name(QString id){
    QSqlQuery q;
    q.exec("SELECT name FROM user WHERE username='"+id+"'");
    if(q.first()){
        return first_name=q.value("name").toString();
    }
    else{
        return "No Username";
    }
}
QString person::GETlast_name(QString Uname){
    QSqlQuery q;
    q.exec("SELECT last_name FROM user WHERE username='"+Uname+"'");
    if(q.first()){
        return last_name=q.value("last_name").toString();
    }
    else{
        return "No Username";
    }
}
QString person::GETskills(QString Uname){
    QSqlQuery q;
    q.exec("SELECT last_name FROM user WHERE username='"+Uname+"'");
    if(q.first()){
        return last_name=q.value("last_name").toString();
    }
    else{
        return "No Username";
    }
}

void person::SETfirst_name(QString firstname ){
    first_name=firstname;
}
void person::SETlast_name(QString lastname){
    last_name=lastname;
}
void person::SETskills(QString skill){
    skills=skill;
}
