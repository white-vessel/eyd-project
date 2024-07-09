#include "confirmprofile.h"
#include "ui_confirmprofile.h"
#include "signup.h"
#include "QMessageBox"
#include "login.h"
#include <QsqlDatabase>//دیتابیس
#include "QsqlDriver"
#include "QsqlQuery"
#include "QsqlQueryModel"


confirmprofile::confirmprofile(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::confirmprofile)
{
    ui->setupUi(this);
    ui->lineEdit_12->setInputMask("00/00/00");

}

confirmprofile::~confirmprofile()
{
    delete ui;
}

void confirmprofile::on_pushButton_clicked()
{
    int id_count=1;
    QSqlQuery q;
    QSqlQuery s;

    QString Fname,Lname,birthday,most_recent_job_title,university,most_recent_company,employment_type,skill;
    Fname=ui->lineEdit_10->text();
    Lname=ui->lineEdit_11->text();
    birthday=ui->lineEdit_12->text();
    most_recent_job_title=ui->lineEdit_13->text();
    university=ui->lineEdit_14->text();
    most_recent_company=ui->lineEdit_15->text();
    employment_type=ui->lineEdit_16->text();
    skill = ui->lineEdit_18->text();


    while (true) {

        QString qstring_id = QString::number(id_count);
        s.exec("SELECT id FROM user WHERE id='"+qstring_id+"'");

        if(s.first()){
            id_count=id_count+1;
        }
        else {
            id_count=id_count-1;
            QString qstring_id = QString::number(id_count);
            q.exec("UPDATE user SET first_name='"+Fname+"',last_name='"+Lname+"',birthday='"+birthday+"',most_recent_jobtitle='"+most_recent_job_title+"',school_university='"+university+"',most_recent_company='"+most_recent_company+"',employment_type='"+employment_type+"' WHERE id='"+qstring_id+"',skills='"+skill+"'");
            break;
        }
    }

    bool aba = false;
    if(ui->lineEdit_10->text() =="")
    {
        aba = true;
    }
    else if(ui->lineEdit_11->text() =="")
    {
        aba = true;
    }
    else if(ui->lineEdit_13->text() =="")
    {
       aba = true;
    }
    else if(ui->lineEdit_14->text() =="")
    {
        aba = true;
    }
    else if(ui->lineEdit_15->text() =="")
    {
        aba = true;
    }
    else if(ui->lineEdit_16->text() =="")
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

