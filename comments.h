#ifndef COMMENTS_H
#define COMMENTS_H

#include <QMainWindow>

namespace Ui {
class comments;
}

class comments : public QMainWindow
{
    Q_OBJECT

public:
    explicit comments(QWidget *parent = nullptr);
    ~comments();

private:
    Ui::comments *ui;
};

#endif // COMMENTS_H
