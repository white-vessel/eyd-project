#include "my_networks_karbar.h"
#include "ui_my_networks_karbar.h"
#include "my_network_admin.h"
#include "home.h"
#include "messeging.h"
#include "me.h"
#include "jobs_admin.h"
#include "jobs_karbar.h"
My_Networks_karbar::My_Networks_karbar(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::My_Networks_karbar)
{
    ui->setupUi(this);
}

My_Networks_karbar::~My_Networks_karbar()
{
    delete ui;
}

void My_Networks_karbar::on_homePushButton_clicked()
{
    Home *w = new Home;
    w->show();
    this->close();
}


void My_Networks_karbar::on_pushButton_2_clicked()
{
    My_Networks_karbar *w1 = new My_Networks_karbar;
    w1->show();
    this->close();
    //اinja bayad if bezarim baraye karbar joda vared shavad va baraye admin joda
    My_network_Admin *w6 = new My_network_Admin;
    w6->show();
    this->close();
}


void My_Networks_karbar::on_pushButton_3_clicked()
{
    Jobs_Admin *w2 = new Jobs_Admin;
    w2->show();
    this->close();
    //اinja bayad if bezarim baraye karbar joda vared shavad va baraye admin joda
    Jobs_karbar *w5 = new Jobs_karbar;
    w5->show();
    this->close();
}


void My_Networks_karbar::on_pushButton_4_clicked()
{
    Messeging *w3 = new Messeging;
    w3->show();
    this->close();
}


void My_Networks_karbar::on_pushButton_5_clicked()
{
    Me *w4 = new Me;
    w4->show();
    this->close();
}

