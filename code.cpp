#include "code.h"
#include "ui_code.h"
#include "QString"
#include "QIntValidator"
#include <iostream>
#include "QMessageBox"
#include "confirmprofile.h"

using namespace std;


int veri;

code::code(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::code)
{
    ui->setupUi(this);
    ui->lineEdit_2->setValidator(new QIntValidator);

}

code::~code()
{
    delete ui;
}

void code::on_pushButton_2_clicked()
{
    int yek = rand()%9;
    int dah = rand()%9*10;
    int sad = rand()%9*100;
    int hez = (rand()%9+1)*1000;
    veri = yek + dah + sad + hez;
    QMessageBox::information(this,"your verification code is: ",QString::number(veri),"got it");
}

void code::on_pushButton_clicked()
{
    int code = ui->lineEdit_2->text().toInt();
    if(code != veri)
    {
        QMessageBox::warning(this,"Attention!","wrong code!","OK");
    }
    else
    {
        confirmprofile *w=new confirmprofile;
        w->show();
        this->close();
    }
}




