#include "companyconfirmprofile.h"
#include "ui_companyconfirmprofile.h"
#include "QString"
#include "QMessageBox"
#include "login.h"
using namespace std;
companyConfirmProfile::companyConfirmProfile(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::companyConfirmProfile)
{
    ui->setupUi(this);  
}

companyConfirmProfile::~companyConfirmProfile()
{
    delete ui;
}

void companyConfirmProfile::on_pushButton_clicked()
{
    bool aba = false;
    if(ui->lineEdit_6->text() =="")
    {
        aba = true;
    }
    else if(ui->lineEdit_5->text() =="")
    {
        aba = true;
    }
    else if(ui->lineEdit_4->text() =="")
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

