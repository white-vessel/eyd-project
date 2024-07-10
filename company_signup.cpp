#include "company_signup.h"
#include "ui_company_signup.h"
#include "QString"
#include <QsqlDatabase>//دیتابیس
#include "QsqlDriver"
#include "QsqlQuery"
#include "QsqlQueryModel"
#include "person.h"
person javad;
company_signUp::company_signUp(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::company_signUp)
{
    ui->setupUi(this);
}

company_signUp::~company_signUp()
{
    delete ui;
    QSqlDatabase database;//دیتابیس
    database=QSqlDatabase::addDatabase("QSQLITE");
    database.setDatabaseName("d:\\appdb.db");
    database.open();
}

void company_signUp::on_pushButton_clicked()
{
    QString add = ui->lineEdit_4->text();
    QString Uname = javad.GETCURRENTaccount_id();

}

