#ifndef ADDPOST_H
#define ADDPOST_H

#include <QMainWindow>

namespace Ui {
class addPost;
}

class addPost : public QMainWindow
{
    Q_OBJECT

public:
    explicit addPost(QWidget *parent = nullptr);
    ~addPost();

private slots:
    void on_homePushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_4_clicked();

    void on_pushButton_5_clicked();

    void on_pushButton_clicked();

    void on_textEdit_textChanged();

private:
    Ui::addPost *ui;
};

#endif // ADDPOST_H
