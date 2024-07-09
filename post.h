#ifndef POST_H
#define POST_H

#include "content.h"
#include <QMainWindow>
#include "QString"
#include <vector>
#include <iostream>
#include "account.h"
using namespace std;

class post:public content
{
public:
    post();
    void SETimage_path(QString);
    void SETcaption(QString);
    void SETcategory(QString);

    QString GETimage_path();
    QString GETcaption();
    QString GETcategory();
};

#endif // POST_H
