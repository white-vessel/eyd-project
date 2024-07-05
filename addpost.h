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


private:
    Ui::addPost *ui;
};

#endif // ADDPOST_H
