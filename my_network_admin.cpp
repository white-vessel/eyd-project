#include "my_network_admin.h"
#include "ui_my_network_admin.h"
#include "home.h"
#include "my_networks_karbar.h"
#include "messeging.h"
#include "me.h"
#include "jobs_admin.h"
#include "jobs_karbar.h"
#include "account.h"
#include "mecompany.h"

#include <QsqlDatabase>//دیتابیس
#include "QsqlDriver"
#include "QsqlQuery"
#include "QsqlQueryModel"

My_network_Admin::My_network_Admin(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::My_network_Admin)
{
    ui->setupUi(this);
}

My_network_Admin::~My_network_Admin()
{
    delete ui;
}

void My_network_Admin::on_homePushButton_clicked()
{
    Home *w = new Home;
    w->show();
    this->close();
}


void My_network_Admin::on_pushButton_2_clicked()
{
    Account a;
   QString isco =a.GETCURRENTis_company();
    if(isco=="0"){
        My_Networks_karbar *w1 = new My_Networks_karbar;
        w1->show();
        this->close();
    }
    if(isco=="1"){
        My_network_Admin *w6 = new My_network_Admin;
        w6->show();
        this->close();
    }

    //اinja bayad if bezarim baraye karbar joda vared shavad va baraye admin joda

}


void My_network_Admin::on_pushButton_3_clicked()
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


void My_network_Admin::on_pushButton_4_clicked()
{
    Messeging *w3 = new Messeging;
    w3->show();
    this->close();
}


void My_network_Admin::on_pushButton_5_clicked()
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


void My_network_Admin::on_pushButton_6_clicked()
{
    QSqlQuery d;
    Account acc;
    QString cuser=acc.GETCURRENTaccount_id();
    d.exec("SELECT username FROM network WHERE follow='"+cuser+"'");
    QSqlQueryModel *qn = new QSqlQueryModel;
    qn->setQuery(d);
    ui->tableView->setModel(qn);
}


void My_network_Admin::on_pushButton_7_clicked()
{
    /*QSqlQuery d;
    Account acc;
    QString cuser=acc.GETCURRENTaccount_id();
    d.exec("SELECT number_of_job,username FROM who_applied WHERE company='"+cuser+"'");
    QSqlQueryModel *qn = new QSqlQueryModel;
    qn->setQuery(d);
    ui->tableView->setModel(qn);*/
}

