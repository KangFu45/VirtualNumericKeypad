#ifndef SOFTKEYLINEEDIT_H
#define SOFTKEYLINEEDIT_H

#include <QLineEdit>

class SoftKeyLineEdit : public QLineEdit
{
    Q_OBJECT

public:
    explicit SoftKeyLineEdit(QWidget *parent = 0);

signals:
    //按下左键信号
    void LeftBtnPressSig();

protected:
    void mousePressEvent(QMouseEvent *e);
};

#endif // SOFTKEYLINEEDIT_H
