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


Messeging::Messeging(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Messeging)
{
    ui->setupUi(this);
    QSqlDatabase database;//دیتابیس
    database=QSqlDatabase::addDatabase("QSQLITE");
    database.setDatabaseName("d:\\appdb.db");
    database.open();
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
    My_Networks_karbar *w1 = new My_Networks_karbar;
    w1->show();
    this->close();
    //اinja bayad if bezarim baraye karbar joda vared shavad va baraye admin joda
    My_network_Admin *w6 = new My_network_Admin;
    w6->show();
    this->close();
}


void Messeging::on_pushButton_3_clicked()
{
    Jobs_Admin *w2 = new Jobs_Admin;
    w2->show();
    this->close();
    //اinja bayad if bezarim baraye karbar joda vared shavad va baraye admin joda
    Jobs_karbar *w5 = new Jobs_karbar;
    w5->show();
    this->close();
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


void Messeging::on_pushButton_8_clicked()
{
     QSqlQuery q;



    Account acc;
    QString fromuser=acc.GETCURRENTaccount_id();
    QString touser =ui->lineEdit_2->text();

    q.exec("SELECT time2,from_user,to_user,chat FROM direct WHERE owner='"+fromuser+"' ORDER BY time2 DESC");
    QSqlQueryModel *qm = new QSqlQueryModel;
    qm->setQuery(q);
    ui->tableView->setModel(qm);


}


void Messeging::on_pushButton_6_clicked()
{
    Account acc;
    QString fromuser=acc.GETCURRENTaccount_id();
    QSqlQuery q;

    QString txt=ui->lineEdit_3->text();

    QString touser =ui->lineEdit_2->text();
    q.exec("INSERT INTO direct(time1,chat,from_user,to_user,owner)VALUES (time('now'),'"+txt+"','"+fromuser+"','"+touser+"')");
}

