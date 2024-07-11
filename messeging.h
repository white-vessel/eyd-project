#ifndef MESSEGING_H
#define MESSEGING_H

#include <QMainWindow>

namespace Ui {
class Messeging;
}

class Messeging : public QMainWindow
{
    Q_OBJECT

public:
    explicit Messeging(QWidget *parent = nullptr);
    ~Messeging();

private slots:
    void on_homePushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_4_clicked();

    void on_pushButton_5_clicked();

    void on_pushButton_6_clicked();

    void on_pushButton_7_clicked();

private:
    Ui::Messeging *ui;
};

#endif // MESSEGING_H
