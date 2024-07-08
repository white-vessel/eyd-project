#include "addpost.h"
#include "ui_addpost.h"
#include "my_network_admin.h"
#include "my_networks_karbar.h"
#include "messeging.h"
#include "me.h"
#include "jobs_admin.h"
#include "jobs_karbar.h"
#include "home.h"
#include "QString"
#include "QFileDialog"
QString txt;
addPost::addPost(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::addPost)
{
    ui->setupUi(this);
}

addPost::~addPost()
{
    delete ui;
}

void addPost::SetTexts()
{
    auto filePath  = QFileDialog::getOpenFileName(this,"select a text file","home","Text file(*.txt");
    ui->filepth->setText(filePath);
}


/*txt = ui->lineEdit->text();
ui->textEdit->setText("txt");*/




void addPost::on_addImagePsh_clicked()
{

}

