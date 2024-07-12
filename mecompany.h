#ifndef MECOMPANY_H
#define MECOMPANY_H

#include <QMainWindow>

namespace Ui {
class MeCompany;
}

class MeCompany : public QMainWindow
{
    Q_OBJECT

public:
    explicit MeCompany(QWidget *parent = nullptr);
    ~MeCompany();

private slots:
    void on_homePushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_4_clicked();

    void on_pushButton_5_clicked();

    void on_pushButton_6_clicked();

private:
    Ui::MeCompany *ui;
};

#endif // MECOMPANY_H
