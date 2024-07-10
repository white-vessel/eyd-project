#include "code.h"
#include "ui_code.h"
#include "QString"
#include "QIntValidator"
#include <iostream>
#include "QMessageBox"
#include "confirmprofile.h"
#include "company_signup.h"

#include <QsqlDatabase>//دیتابیس
#include "QsqlDriver"
#include "QsqlQuery"
#include "QsqlQueryModel"

#include "account.h"

using namespace std;


int veri;

code::code(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::code)
{
    ui->setupUi(this);
    ui->lineEdit_2->setValidator(new QIntValidator);
    QSqlDatabase database;//دیتابیس
    database=QSqlDatabase::addDatabase("QSQLITE");
    database.setDatabaseName("d:\\appdb.db");
    database.open();

}

code::~code()
{
    delete ui;
}

void code::on_pushButton_2_clicked()
{
    int yek = rand()%9;
    int dah = rand()%9*10;
    int sad = rand()%9*100;
    int hez = (rand()%9+1)*1000;
    veri = yek + dah + sad + hez;
    QMessageBox::information(this,"your verification code is: ",QString::number(veri),"got it");
}

void code::on_pushButton_clicked()
{
    int code = ui->lineEdit_2->text().toInt();
    if(code != veri)
    {
        QMessageBox::warning(this,"Attention!","wrong code!","OK");
    }
    else
    {

        QSqlQuery q;
        Account a;
        QString Uname=a.GETCURRENTaccount_id();
        q.exec("SELECT is_company FROM user WHERE username='"+Uname+"'");

             QString fn = q.value("is_company").toString();

        if(fn=="company"){
            company_signUp *w=new company_signUp;
            w->show();
            this->close();
        }
        else{
            confirmprofile *w=new confirmprofile;
            w->show();
            this->close();
        }


       /* confirmprofile *w=new confirmprofile;
        w->show();
        this->close();*/
    }
}




