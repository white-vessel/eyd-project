#include "account.h"

#include <QsqlDatabase>//دیتابیس
#include "QsqlDriver"
#include "QsqlQuery"
#include "QsqlQueryModel"



Account::Account()
{
    /*QSqlDatabase database;//دیتابیس
    database=QSqlDatabase::addDatabase("QSQLITE");
    database.setDatabaseName("d:\\appdb.db");
    database.open();*/
}
QString Account::GETaccount_id(QString id) {
    QSqlQuery q;
    q.exec("SELECT username FROM user WHERE username='"+id+"'");
    if(q.first()){
        return account_id=q.value("username").toString();
    }
    else{
        return "No Username";
    }
}
QString Account::GETphone_number(QString id){
    QSqlQuery q;
    q.exec("SELECT phone_number FROM user WHERE username='"+id+"'");
    if(q.first()){
        return phone_number=q.value("phone_number").toString();
    }
    else{
        return "nophonenum";
    }

}
QString Account::GETemail(QString id){
    QSqlQuery q;
    q.exec("SELECT email FROM user WHERE username='"+id+"'");
    if(q.first()){
        return email=q.value("email").toString();
    }
    else{
        return "No Username";
    }
}

void Account::SETaccount_id(QString id){
    account_id=id;
    QSqlQuery q;
    q.exec("INSERT INTO user(username)VALUES('"+id+"')");
}
void Account::SETphone_number(QString num){
    phone_number=num;
    QSqlQuery q;
    q.exec("INSERT INTO user(phone_number)VALUES('"+num+"')");
}
void Account::SETemail(QString mail){
    email=mail;
    QSqlQuery q;
    q.exec("INSERT INTO user(email)VALUES('"+mail+"')");
}
void Account::SETpassword(QString pass){
    password=pass;
    QSqlQuery q;
    q.exec("INSERT INTO user(password)VALUES('"+pass+"')");
}
void Account::SETCURRENTaccount_id(QString Uname){
    QSqlQuery q;
    q.exec("SELECT username FROM current_user");

    if(q.first()){
        q.exec("DELETE FROM current_user ");
        q.exec("INSERT INTO current_user(username)VALUES('"+Uname+"')");
        q.finish();
    }
    else{
        q.exec("INSERT INTO current_user(username)VALUES('"+Uname+"')");//need check for delete everytime
        q.finish();
    }

}

QString Account::GETCURRENTaccount_id(){
    QSqlQuery q;
    q.exec("SELECT username FROM current_user");
    if(q.first()){
        QString current_user=q.value("username").toString();
        return current_user;
    }
    else{
        return "nocurrentuser";
    }
}

void Account::SETis_company(QString ico){
    QSqlQuery q;
        q.exec("SELECT is_company FROM current_user");
        if(q.first()){
            q.exec("DELETE FROM current_user ");
            q.exec("INSERT INTO current_user(is_company)VALUES('"+ico+"')");
            q.finish();
        }
        else{
            q.exec("INSERT INTO current_user(is_company)VALUES('"+ico+"')");//need check for delete everytime
            q.finish();
        }
}

QString Account::GETis_company(QString Uname){
    QSqlQuery q;
    q.exec("SELECT is_company FROM user WHERE username = '"+Uname+"'");
    if(q.first()){
        QString iscompany=q.value("is_company").toString();
        return iscompany;
    }
    else{
        return "nocurrentis_company";
    }
}
QString Account::GETCURRENTis_company(){
    QSqlQuery q;
    q.exec("SELECT is_company FROM current_user");
    if(q.first()){
        QString iscompany=q.value("is_company").toString();
        return iscompany;
    }
    else{
        return "no_current_is_company";
    }
}
