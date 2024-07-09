#include "me.h"
#include "ui_me.h"
#include "my_network_admin.h"
#include "my_networks_karbar.h"
#include "messeging.h"
#include "home.h"
#include "jobs_admin.h"
#include "jobs_karbar.h"
#include <QsqlDatabase>//دیتابیس
#include "QsqlDriver"
#include "QsqlQuery"
#include "QsqlQueryModel"
#include "account.h"
#include "person.h"
person asli;
Me::Me(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Me)
{
    ui->setupUi(this);
    QSqlDatabase database;//دیتابیس
    database=QSqlDatabase::addDatabase("QSQLITE");
    database.setDatabaseName("d:\\appdb.db");
    database.open();
    QSqlQuery q;
    q.exec("SELECT name FROM current_user");
    QString Uname = q.value("username").toString();
    asli.SETCURRENTaccount_id(Uname);
    ui->lineEdit_2->setText(asli.GETCURRENTaccount_id());
}

Me::~Me()
{
    delete ui;
}

void Me::on_homePushButton_clicked()
{
    Home *w = new Home;
    w->show();
    this->close();
}


void Me::on_pushButton_2_clicked()
{
    My_Networks_karbar *w1 = new My_Networks_karbar;
    w1->show();
    this->close();
    //اinja bayad if bezarim baraye karbar joda vared shavad va baraye admin joda
    My_network_Admin *w6 = new My_network_Admin;
    w6->show();
    this->close();
}


void Me::on_pushButton_3_clicked()
{
    Jobs_Admin *w2 = new Jobs_Admin;
    w2->show();
    this->close();
    //اinja bayad if bezarim baraye karbar joda vared shavad va baraye admin joda
    Jobs_karbar *w5 = new Jobs_karbar;
    w5->show();
    this->close();
}


void Me::on_pushButton_4_clicked()
{
    Messeging *w3 = new Messeging;
    w3->show();
    this->close();
}


void Me::on_pushButton_5_clicked()
{
    Me *w4 = new Me;
    w4->show();
    this->close();
}

