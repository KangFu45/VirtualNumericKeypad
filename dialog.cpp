#include "dialog.h"

#include "NumKeypad.h"
#include <QVBoxLayout>
#include "SoftKeyLineEdit.h"

Dialog::Dialog(QWidget *parent)
    : QDialog(parent)
{
    SoftKeyLineEdit* sle = new SoftKeyLineEdit(this);
    connect(sle, &SoftKeyLineEdit::LeftBtnPressSig,this,[=]{
        NumKeypadDialog dia;
        dia.SetContent(sle->text());
        dia.exec();
        if(dia.IsVaild())
            sle->setText(dia.GetContent());
    });

    QVBoxLayout* layout=new QVBoxLayout;
    layout->addWidget(sle);
    setLayout(layout);
}


