#ifndef NETWORK_H
#define NETWORK_H
#include <QMainWindow>
#include "QString"
#include <vector>
#include <iostream>
using namespace std;

class network
{
public:
    network();
    QString GETfollowers();
    QString GETfollowings();

    void follow(QString);
    void unfollow(QString);

};

#endif // NETWORK_H
