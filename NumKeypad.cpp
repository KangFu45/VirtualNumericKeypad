#include "NumKeypad.h"

#include <QVBoxLayout>
#include <QRegExpValidator>

NumKeypad::NumKeypad(QWidget *parent) : QWidget(parent)
{
    ui.setupUi(this);

    //限制输入数字
    QRegExp rx("[0-9\.\-]+$");
    QRegExpValidator *validator = new QRegExpValidator(rx, this);
    ui.numLE->setValidator(validator);

    connect(ui.num0Btn, &QPushButton::clicked, this, [=]{
        NumberSlot(0);
    });
    connect(ui.num1Btn, &QPushButton::clicked, this, [=]{
        NumberSlot(1);
    });
    connect(ui.num2Btn, &QPushButton::clicked, this, [=]{
        NumberSlot(2);
    });
    connect(ui.num3Btn, &QPushButton::clicked, this, [=]{
        NumberSlot(3);
    });
    connect(ui.num4Btn, &QPushButton::clicked, this, [=]{
        NumberSlot(4);
    });
    connect(ui.num5Btn, &QPushButton::clicked, this, [=]{
        NumberSlot(5);
    });
    connect(ui.num6Btn, &QPushButton::clicked, this, [=]{
        NumberSlot(6);
    });
    connect(ui.num7Btn, &QPushButton::clicked, this, [=]{
        NumberSlot(7);
    });
    connect(ui.num8Btn, &QPushButton::clicked, this, [=]{
        NumberSlot(8);
    });
    connect(ui.num9Btn, &QPushButton::clicked, this, [=]{
        NumberSlot(9);
    });

    connect(ui.escBtn, &QPushButton::clicked, this, [=]{
       m_bVaild = false;
       emit CloseSig();
    });

    connect(ui.okBtn, &QPushButton::clicked, this, [=]{
       m_bVaild = true;
       m_strContent = ui.numLE->text();
       emit CloseSig();
    });

    connect(ui.delBtn, &QPushButton::clicked, this, [=]{
        int idx = ui.numLE->cursorPosition();
        if(idx == 0)
        {
            ui.numLE->setCursorPosition(idx);
            ui.numLE->setFocus();
            return;
        }
        m_strContent.remove(idx-1,1);
        ui.numLE->setText(m_strContent);
        ui.numLE->setCursorPosition(idx-1);
        ui.numLE->setFocus();
    });

    connect(ui.signBtn, &QPushButton::clicked, [=]{
        int idx = ui.numLE->cursorPosition();
        if(m_strContent.left(1) == "-")
        {
            m_strContent.remove(0, 1);
            ui.numLE->setText(m_strContent);
            ui.numLE->setCursorPosition(idx-1);
            ui.numLE->setFocus();
        }
        else
        {
            if(m_strContent=="0" || m_strContent=="")
            {
                ui.numLE->setCursorPosition(idx);
                ui.numLE->setFocus();
            }
            else
            {
                m_strContent.insert(0, '-');
                ui.numLE->setText(m_strContent);
                ui.numLE->setCursorPosition(idx+1);
                ui.numLE->setFocus();
            }
        }
    });

    connect(ui.clearBtn, &QPushButton::clicked, [=]{
        SetContent("");
    });

    connect(ui.dotBtn, &QPushButton::clicked, this, [=]{
        AppendSlot(".");
    });
}

void NumKeypad::AppendSlot(QString str)
{
    if(ui.numLE->text() != m_strContent)
        m_strContent = ui.numLE->text();

    int idx = ui.numLE->cursorPosition();
    if(m_strContent.left(idx) == "0")
    {
        ui.numLE->setCursorPosition(idx);
        ui.numLE->setFocus();
        return;
    }
    m_strContent.insert(idx, str);
    ui.numLE->setText(m_strContent);
    ui.numLE->setCursorPosition(idx+1);
    ui.numLE->setFocus();
}

void NumKeypad::NumberSlot(quint8 num)
{
    AppendSlot(QString::number(num));
}

NumKeypadDialog::NumKeypadDialog()
    :m_pWidget(new NumKeypad(this))
{
    QVBoxLayout* layout = new QVBoxLayout(this);
    layout->setSpacing(3);
    layout->setMargin(3);
    layout->addWidget(m_pWidget);
    this->setLayout(layout);

    connect(m_pWidget, &NumKeypad::CloseSig, this, [=]{
       this->close();
    });

    this->setWindowFlags(Qt::FramelessWindowHint);
}

NumKeypadDialog::~NumKeypadDialog()
{
    delete m_pWidget;
}
