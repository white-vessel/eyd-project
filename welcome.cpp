#include "welcome.h"
#include "ui_welcome.h"
#include <iostream>
#include <QApplication>
#include <QString>
#include "QMessageBox"
#include "login.h"
#include "signup.h"

welcome::welcome(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::welcome)
{
    ui->setupUi(this);
}

welcome::~welcome()
{
    delete ui;
}

void welcome::on_pushButton_clicked()
{
    LogIn *w=new LogIn;
    w->show();
    this->close();
}



void welcome::on_pushButton2_clicked()
{
    signup *w2=new signup;
    w2->show();
    this->close();
}


