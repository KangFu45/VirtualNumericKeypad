#include "SoftKeyLineEdit.h"

#include <QMouseEvent>
#include <QRegExpValidator>

SoftKeyLineEdit::SoftKeyLineEdit(QWidget *parent)
    :QLineEdit(parent)
{

}

void SoftKeyLineEdit::mousePressEvent(QMouseEvent *e)
{
    if(e->button() == Qt::LeftButton)
    {
        emit LeftBtnPressSig();
    }
}
