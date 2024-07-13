#include "jobs_karbar.h"
#include "ui_jobs_karbar.h"
#include "my_network_admin.h"
#include "my_networks_karbar.h"
#include "messeging.h"
#include "me.h"
#include "jobs_admin.h"
#include "home.h"
#include "account.h"
#include <QsqlDatabase>//دیتابیس
#include "QsqlDriver"
#include "QsqlQuery"
#include "QsqlQueryModel"
#include "foruser.h"//
#include "mecompany.h"
#include "QString"
Jobs_karbar::Jobs_karbar(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Jobs_karbar)
{
    ui->setupUi(this);
    /*QString f1;
    QSqlQuery q;
    q.exec("SELECT company FROM company_jobs");
    f1 = q.value(0).toString();
    ui->lineEdit_2->setText(q.value(0).toString());*/
    /*ui->groupBox_3->hide();
    ui->groupBox_4->hide();
    ui->groupBox_5->hide();
    ui->groupBox_6->hide();
    QString f1,f2,f3,f4;
    QSqlQuery q1;
    //q1.exec("SELECT company FROM company_jobs");
    f1 = q1.exec("SELECT company FROM company_jobs WHERE num = 1");
    ui->lineEdit_2->setText(f1);
    q1.finish();
    QSqlQuery q2,q3,q4;
    q2.exec("SELECT job_title FROM company_jobs");
    q3.exec("SELECT workplace_type FROM company_jobs");
    q4.exec("SELECT job_location FROM company_jobs");
    f1 = q1.value(0).toString();
    ui->lineEdit_2->setText(f1);
    f2 = q2.value(0).toString();
    ui->lineEdit_3->setText(f2);
    f3 = q3.value(0).toString();
    ui->lineEdit_4->setText(f3);
    f4 = q4.value(0).toString();
    ui->lineEdit_5->setText(f4);




    if(f1 != ""){
       ui->groupBox_3->show();
    }
    f1 = q1.value(2).toString();
    f2 = q2.value(2).toString();
    f3 = q3.value(2).toString();
    f4 = q4.value(2).toString();
    ui->lineEdit_6->setText(f1);
    ui->lineEdit_7->setText(f2);
    ui->lineEdit_8->setText(f3);
    ui->lineEdit_9->setText(f4);
    if(f1 != ""){
        ui->groupBox_4->show();
    }
    f1 = q1.value(3).toString();
    f2 = q2.value(3).toString();
    f3 = q3.value(3).toString();
    f4 = q4.value(3).toString();
    ui->lineEdit_10->setText(f1);
    ui->lineEdit_11->setText(f2);
    ui->lineEdit_12->setText(f3);
    ui->lineEdit_13->setText(f4);
    if(f1 != ""){
        ui->groupBox_5->show();
    }
    f1 = q1.value(4).toString();
    f2 = q2.value(4).toString();
    f3 = q3.value(4).toString();
    f4 = q4.value(4).toString();
    ui->lineEdit_14->setText(f1);
    ui->lineEdit_15->setText(f2);
    ui->lineEdit_16->setText(f3);
    ui->lineEdit_17->setText(f4);
    if(f1 != ""){
        ui->groupBox_6->show();
    }*/


}

Jobs_karbar::~Jobs_karbar()
{
    delete ui;
}
void Jobs_karbar::on_homePushButton_clicked()
{
    Home *w = new Home;
    w->show();
    this->close();
}


void Jobs_karbar::on_pushButton_2_clicked()
{
    Account a;
    QString isco =a.GETCURRENTis_company();
    if(isco == "0"){
    Jobs_karbar *w5 = new Jobs_karbar;
    w5->show();
    this->close();
    }
    if(isco== "1"){
    Jobs_Admin *w2 = new Jobs_Admin;
    w2->show();
    this->close();
    }

    //اinja bayad if bezarim baraye karbar joda vared shavad va baraye admin joda

}


void Jobs_karbar::on_pushButton_3_clicked()
{
    Account a;
    QString isco =a.GETCURRENTis_company();
    if(isco=="0"){
        Jobs_karbar *w5 = new Jobs_karbar;
        w5->show();
        this->close();
    }
    if(isco=="1"){
        Jobs_Admin *w2 = new Jobs_Admin;
        w2->show();
        this->close();
    }

    //اinja bayad if bezarim baraye karbar joda vared shavad va baraye admin joda

}


void Jobs_karbar::on_pushButton_4_clicked()
{
    Messeging *w3 = new Messeging;
    w3->show();
    this->close();
}


void Jobs_karbar::on_pushButton_5_clicked()
{
    Account a;
    QString isco =a.GETCURRENTis_company();
    if(isco=="0"){
        Me *w4 = new Me;
        w4->show();
        this->close();
    }
    if(isco=="1"){
        MeCompany *wr = new MeCompany;
        wr->show();
        this->close();
    }

    //inja bayad compony va carbar fargh kone:

}


void Jobs_karbar::on_pushButton_7_clicked()
{
    QSqlQuery d;

    Account acc;

    d.exec("SELECT number,company,job_title,job_type,workplace_type,job_location,skill_required,salary FROM jobs ");
    QSqlQueryModel *qn = new QSqlQueryModel;
    qn->setQuery(d);
    ui->tableView->setModel(qn);
}


void Jobs_karbar::on_pushButton_6_clicked()
{
    Account a;
    QString cuser=a.GETCURRENTaccount_id();
    QString anumber= ui->lineEdit_2->text();
    QSqlQuery q;
    q.exec("INSERT INTO who_applied(username,number_of_job)VALUES('"+cuser+"','"+anumber+"')");
}

