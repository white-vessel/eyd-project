#include "post_s.h"
#include "ui_post_s.h"

post_s::post_s(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::post_s)
{
    ui->setupUi(this);
}

post_s::~post_s()
{
    delete ui;
}
