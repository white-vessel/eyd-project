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
private:
    Ui::signup *ui;
};

#endif // SIGNUP_H
