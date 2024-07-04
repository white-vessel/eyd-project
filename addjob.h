#ifndef ADDJOB_H
#define ADDJOB_H

#include <QMainWindow>

namespace Ui {
class addJob;
}

class addJob : public QMainWindow
{
    Q_OBJECT

public:
    explicit addJob(QWidget *parent = nullptr);
    ~addJob();

private slots:
    void on_homePushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_4_clicked();

    void on_pushButton_5_clicked();

    void on_pushButton_clicked();

private:
    Ui::addJob *ui;
};

#endif // ADDJOB_H
