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
public slots:
    void SetTexts();
private slots:


    void on_addImagePsh_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::addPost *ui;
};

#endif // ADDPOST_H
