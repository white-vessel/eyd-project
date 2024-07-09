#include "account.h"

#include <QsqlDatabase>//دیتابیس
#include "QsqlDriver"
#include "QsqlQuery"
#include "QsqlQueryModel"



Account::Account()
{
    QSqlDatabase database;//دیتابیس
    database=QSqlDatabase::addDatabase("QSQLITE");
    database.setDatabaseName("d:\\appdb.db");
    database.open();
}
QString Account::GETaccount_id() {
    return account_id;
}
int Account::GETphone_number(){
    return phone_number;
}
QString Account::GETemail(){
    return email;
}

void Account::SETaccount_id(QString id){
    account_id=id;
}
void Account::SETphone_number(int num){
    phone_number=num;
}
void Account::SETemail(QString mail){
    email=mail;
}
void Account::SETpassword(QString pass){
    password=pass;
}
void Account::SETCURRENTaccount_id(QString Uname){
    QSqlQuery q;
    q.exec("INSERT INTO current_user(username)VALUES('"+Uname+"')");
}
