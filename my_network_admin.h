#ifndef MY_NETWORK_ADMIN_H
#define MY_NETWORK_ADMIN_H

#include <QMainWindow>

namespace Ui {
class My_network_Admin;
}

class My_network_Admin : public QMainWindow
{
    Q_OBJECT

public:
    explicit My_network_Admin(QWidget *parent = nullptr);
    ~My_network_Admin();

private slots:
    void on_homePushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_4_clicked();

    void on_pushButton_5_clicked();

private:
    Ui::My_network_Admin *ui;
};

#endif // MY_NETWORK_ADMIN_H
