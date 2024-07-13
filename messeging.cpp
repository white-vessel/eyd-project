#include "messeging.h"
#include "ui_messeging.h"
#include "my_network_admin.h"
#include "my_networks_karbar.h"
#include "home.h"
#include "me.h"
#include "jobs_admin.h"
#include "jobs_karbar.h"
#include "account.h"

#include <QsqlDatabase>//دیتابیس
#include "QsqlDriver"
#include "QsqlQuery"
#include "QsqlQueryModel"
#include "foruser.h"//
#include "viewprofile.h"

QString touser;

Messeging::Messeging(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Messeging)
{
    ui->setupUi(this);
    touser=ui->lineEdit_2->text();
    /*QSqlDatabase database;//دیتابیس
    database=QSqlDatabase::addDatabase("QSQLITE");
    database.setDatabaseName("d:\\appdb.db");
    database.open();*/
}

Messeging::~Messeging()
{
    delete ui;
}

void Messeging::on_homePushButton_clicked()
{
    Home *w = new Home;
    w->show();
    this->close();
}


void Messeging::on_pushButton_2_clicked()
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


void Messeging::on_pushButton_3_clicked()
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


void Messeging::on_pushButton_4_clicked()
{
    Messeging *w3 = new Messeging;
    w3->show();
    this->close();
}


void Messeging::on_pushButton_5_clicked()
{
    Me *w4 = new Me;
    w4->show();
    this->close();
}

void Messeging::on_pushButton_6_clicked()
{
    Account acc;
    QString fromuser=acc.GETCURRENTaccount_id();
    QSqlQuery q;

    QString txt=ui->lineEdit_3->text();
    q.exec("INSERT INTO direct(chat,to_user,from_user,time2)VALUES ('"+txt+"','"+touser+"','"+fromuser+"',time('now'))");
}


void Messeging::on_pushButton_7_clicked()
{
   QSqlQuery d;
   Account acc;
   QString cuser=acc.GETCURRENTaccount_id();
   d.exec("SELECT from_user,chat,time2 FROM direct WHERE from_user='"+cuser+"' OR to_user='"+cuser+"' ORDER BY time2 ASC");
   QSqlQueryModel *qn = new QSqlQueryModel;
   qn->setQuery(d);
   ui->tableView->setModel(qn);
}


void Messeging::on_pushButton_clicked()
{
    QString srch= ui->lineEdit->text();
    QSqlQuery q;

    q.exec("SELECT searched FROM search_user");

    if(q.first()){
        q.exec("DELETE FROM search_user ");
        q.exec("INSERT INTO search_user(searched)VALUES('"+srch+"')");
        q.finish();
    }
    else{
        q.exec("INSERT INTO search_user(searched)VALUES('"+srch+"')");
        q.finish();
    }

    viewProfile *rf = new viewProfile;
    rf->show();
}

