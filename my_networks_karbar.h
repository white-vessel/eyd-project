#ifndef MY_NETWORKS_KARBAR_H
#define MY_NETWORKS_KARBAR_H

#include <QMainWindow>

namespace Ui {
class My_Networks_karbar;
}

class My_Networks_karbar : public QMainWindow
{
    Q_OBJECT

public:
    explicit My_Networks_karbar(QWidget *parent = nullptr);
    ~My_Networks_karbar();

private slots:
    void on_homePushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_4_clicked();

    void on_pushButton_5_clicked();

    void on_pushButton_6_clicked();

    void on_pushButton_7_clicked();

    void on_pushButton_8_clicked();

    void on_pushButton_9_clicked();

private:
    Ui::My_Networks_karbar *ui;
};

#endif // MY_NETWORKS_KARBAR_H
