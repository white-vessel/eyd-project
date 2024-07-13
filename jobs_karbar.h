#ifndef JOBS_KARBAR_H
#define JOBS_KARBAR_H

#include <QMainWindow>

namespace Ui {
class Jobs_karbar;
}

class Jobs_karbar : public QMainWindow
{
    Q_OBJECT

public:
    explicit Jobs_karbar(QWidget *parent = nullptr);
    ~Jobs_karbar();

private slots:
    void on_homePushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_4_clicked();

    void on_pushButton_5_clicked();

    void on_pushButton_7_clicked();

    void on_pushButton_6_clicked();

private:
    Ui::Jobs_karbar *ui;
};

#endif // JOBS_KARBAR_H
