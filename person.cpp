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
    QSqlQuery q;
<<<<<<< Updated upstream
    q.exec("INSERT INTO user(skills)VALUES('"+firstname+"')");
=======
    q.exec("INSERT INTO user(first_name)VALUES('"+firstname+"')");
>>>>>>> Stashed changes
}
void person::SETlast_name(QString lastname){
    last_name=lastname;
    QSqlQuery q;
<<<<<<< Updated upstream
    q.exec("INSERT INTO user(skills)VALUES('"+lastname+"')");
=======
    q.exec("INSERT INTO user(last_name)VALUES('"+lastname+"')");
>>>>>>> Stashed changes
}
void person::SETskills(QString skill){
    skills=skill;
    QSqlQuery q;
    q.exec("INSERT INTO user(skills)VALUES('"+skill+"')");
}
