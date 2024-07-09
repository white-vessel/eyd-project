#ifndef SIGNUP_H
#define SIGNUP_H

#include <QMainWindow>
#include "QString"


namespace Ui {
class signup;
}

class signup : public QMainWindow
{
    Q_OBJECT

public:
    explicit signup(QWidget *parent = nullptr);
    ~signup();

private slots:
    void on_pushButton_2_clicked();

    void on_pushButton_clicked();

    void on_pushButton_3_clicked();

    void on_comboBox_activated(int index);

private:
    Ui::signup *ui;
};

#endif // SIGNUP_H
