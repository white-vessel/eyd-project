#include "confirmcompany.h"
#include "ui_confirmcompany.h"
#include "QString"
#include "QMessageBox"
#include "welcome.h"
#include "confirmprofile.h"
#include "code.h"
#include "QMessageBox"
#include "account.h"
#include "QComboBox"
#include "login.h"
#include <QsqlDatabase>//دیتابیس
#include "QsqlDriver"
#include "QsqlQuery"
#include "QsqlQueryModel"
#include "foruser.h"
#include "person.h"
person confrm;
confirmCompany::confirmCompany(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::confirmCompany)
{
    ui->setupUi(this);
}

confirmCompany::~confirmCompany()
{
    delete ui;
}

void confirmCompany::on_pushButton_clicked()
{
    QString ID = confrm.GETCURRENTaccount_id();
    //int id_count=1;
    QSqlQuery q;
    //QSqlQuery s;
    QString skl;
    QString Fname,Lname,birthday,most_recent_job_title,university,most_recent_company,employment_type;
    Fname=ui->lineEdit_4->text();
    Lname=ui->lineEdit_5->text();
    birthday=ui->lineEdit_6->text();

    q.exec("UPDATE user SET company_name='"+Fname+"',email='"+Lname+"',skill='"+skl+"' WHERE username='"+ID+"'");
    bool aba = false;
    if(ui->lineEdit_4->text() =="")
    {
        aba = true;
    }
    else if(ui->lineEdit_5->text() =="")
    {
        aba = true;
    }
    else if(ui->lineEdit_6->text() =="")
    {
       aba = true;
    }
    if(aba == true)
    {
        QMessageBox::warning(this,"Attention!","you did not fill every parameters!","OK");
    }
    else
    {
        LogIn *ww=new LogIn;
        ww->show();
        this->close();
    }
}

