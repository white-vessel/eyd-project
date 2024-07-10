#include "home.h"
#include "ui_home.h"
#include "my_network_admin.h"
#include "my_networks_karbar.h"
#include "messeging.h"
#include "me.h"
#include "jobs_admin.h"
#include "jobs_karbar.h"
#include "addpost.h"
#include "account.h"

#include <QsqlDatabase>//دیتابیس
#include "QsqlDriver"
#include "QsqlQuery"
#include "QsqlQueryModel"
#include "foruser.h"//
#include "person.h"

Home::Home(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Home)
{
    ui->setupUi(this);
    QSqlDatabase database;//دیتابیس
    database=QSqlDatabase::addDatabase("QSQLITE");
    database.setDatabaseName("d:\\appdb.db");
    database.open();
}

Home::~Home()
{
    delete ui;
}

void Home::on_homePushButton_clicked()
{
    Home *w = new Home;
    w->show();
    this->close();
}


void Home::on_pushButton_2_clicked()
{
    My_Networks_karbar *w1 = new My_Networks_karbar;
    w1->show();
    this->close();
    //اinja bayad if bezarim baraye karbar joda vared shavad va baraye admin joda
    My_network_Admin *w6 = new My_network_Admin;
    w6->show();
    this->close();
}


void Home::on_pushButton_3_clicked()
{
    Jobs_Admin *w2 = new Jobs_Admin;
    w2->show();
    this->close();
    //اinja bayad if bezarim baraye karbar joda vared shavad va baraye admin joda
    Jobs_karbar *w5 = new Jobs_karbar;
    w5->show();
    this->close();
}


void Home::on_pushButton_4_clicked()
{
    Messeging *w3 = new Messeging;
    w3->show();
    this->close();
}


void Home::on_pushButton_5_clicked()
{
    Me *w4 = new Me;
    w4->show();
    this->close();
}


void Home::on_pushButton_6_clicked()
{
    addPost *ww = new addPost;
    ww->show();
}


void Home::on_pushButton_7_clicked()
{
    person a;
    Account b;
    QSqlQuery q;
    QString cuser=b.GETCURRENTaccount_id();
    QString f =a.GETfirst_name("ali021");

    q.exec("SELECT time1,caption,username FROM post WHERE username='ali021' ORDER BY time1 DESC");
    QSqlQueryModel *qm = new QSqlQueryModel;
    qm->setQuery(q);
    ui->tableView->setModel(qm);
}

