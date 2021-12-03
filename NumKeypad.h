#ifndef NUMKEYPAD_H
#define NUMKEYPAD_H

#include <QWidget>
#include <QDialog>
#include <QGridLayout>
#include <QLineEdit>
#include <QPushButton>

class Ui_Form
{
public:
    QGridLayout *gridLayout;
    QPushButton *num0Btn;
    QPushButton *num5Btn;
    QPushButton *num4Btn;
    QPushButton *num3Btn;
    QPushButton *clearBtn;
    QPushButton *num6Btn;
    QPushButton *num9Btn;
    QPushButton *num2Btn;
    QPushButton *num8Btn;
    QPushButton *delBtn;
    QLineEdit *numLE;
    QPushButton *escBtn;
    QPushButton *dotBtn;
    QPushButton *num7Btn;
    QPushButton *okBtn;
    QPushButton *signBtn;
    QPushButton *num1Btn;

    void setupUi(QWidget *Form)
    {
        if (Form->objectName().isEmpty())
            Form->setObjectName(QStringLiteral("Form"));
        Form->resize(463, 210);
        QPalette pal(Form->palette());
        pal.setColor(QPalette::Background, QColor(100,100,100));
        Form->setAutoFillBackground(true);
        Form->setPalette(pal);
        QFont font;
        font.setFamily(QString::fromUtf8("\344\273\277\345\256\213"));
        font.setPointSize(14);
        font.setBold(true);
        Form->setFont(font);

        QString numBtnQss("color: rgb(0, 85, 255);\n"
                          "background-color: rgb(255, 255, 255);\n"
                          "border-radius: 5px;\n"
                          "border: 1px solid white");
        QSize numSize(70,50);
        QSize funSize(100,50);

        gridLayout = new QGridLayout(Form);
        gridLayout->setSpacing(12);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(12, 12, 12, 12);
        num0Btn = new QPushButton(Form);
        num0Btn->setObjectName(QStringLiteral("num0Btn"));
        num0Btn->setStyleSheet(numBtnQss);
        num0Btn->setFixedSize(numSize);

        gridLayout->addWidget(num0Btn, 6, 1, 1, 1);

        num5Btn = new QPushButton(Form);
        num5Btn->setObjectName(QStringLiteral("num5Btn"));
        num5Btn->setStyleSheet(numBtnQss);
        num5Btn->setFixedSize(numSize);

        gridLayout->addWidget(num5Btn, 3, 1, 1, 1);

        num4Btn = new QPushButton(Form);
        num4Btn->setObjectName(QStringLiteral("num4Btn"));
        num4Btn->setStyleSheet(numBtnQss);
        num4Btn->setFixedSize(numSize);

        gridLayout->addWidget(num4Btn, 3, 0, 1, 1);

        num3Btn = new QPushButton(Form);
        num3Btn->setObjectName(QStringLiteral("num3Btn"));
        num3Btn->setStyleSheet(numBtnQss);
        num3Btn->setFixedSize(numSize);

        gridLayout->addWidget(num3Btn, 1, 2, 1, 1);

        clearBtn = new QPushButton(Form);
        clearBtn->setObjectName(QStringLiteral("clearBtn"));
        clearBtn->setStyleSheet(QLatin1String("color: rgb(255, 255, 255);\n"
                                               "background-color: rgb(0, 170, 255);\n"
                                              "border-radius: 5px;"));
        clearBtn->setFixedSize(funSize);

        gridLayout->addWidget(clearBtn, 5, 3, 1, 1);

        num6Btn = new QPushButton(Form);
        num6Btn->setObjectName(QStringLiteral("num6Btn"));
        num6Btn->setStyleSheet(numBtnQss);
        num6Btn->setFixedSize(numSize);

        gridLayout->addWidget(num6Btn, 3, 2, 1, 1);

        num9Btn = new QPushButton(Form);
        num9Btn->setObjectName(QStringLiteral("num9Btn"));
        num9Btn->setStyleSheet(numBtnQss);
        num9Btn->setFixedSize(numSize);

        gridLayout->addWidget(num9Btn, 5, 2, 1, 1);

        num2Btn = new QPushButton(Form);
        num2Btn->setObjectName(QStringLiteral("num2Btn"));
        num2Btn->setStyleSheet(numBtnQss);
        num2Btn->setFixedSize(numSize);

        gridLayout->addWidget(num2Btn, 1, 1, 1, 1);

        num8Btn = new QPushButton(Form);
        num8Btn->setObjectName(QStringLiteral("num8Btn"));
        num8Btn->setStyleSheet(numBtnQss);
        num8Btn->setFixedSize(numSize);

        gridLayout->addWidget(num8Btn, 5, 1, 1, 1);

        delBtn = new QPushButton(Form);
        delBtn->setObjectName(QStringLiteral("delBtn"));
        delBtn->setStyleSheet(QLatin1String("color: rgb(255, 255, 255);\n"
                                                "background-color: rgb(255, 170, 0);\n"
                                            "border-radius: 5px;"));
        delBtn->setFixedSize(funSize);

        gridLayout->addWidget(delBtn, 3, 3, 1, 1);

        numLE = new QLineEdit(Form);
        numLE->setObjectName(QStringLiteral("numLE"));
        numLE->setStyleSheet(numBtnQss);
        numLE->setMinimumHeight(50);

        gridLayout->addWidget(numLE, 0, 0, 1, 4);

        escBtn = new QPushButton(Form);
        escBtn->setObjectName(QStringLiteral("escBtn"));
        escBtn->setStyleSheet(QLatin1String("color: rgb(255, 255, 255);\n"
                                                "background-color: rgb(255, 0, 0);\n"
                                            "border-radius: 5px;"));
        escBtn->setFixedSize(funSize);

        gridLayout->addWidget(escBtn, 1, 3, 1, 1);

        dotBtn = new QPushButton(Form);
        dotBtn->setObjectName(QStringLiteral("dotBtn"));
        dotBtn->setStyleSheet(numBtnQss);
        dotBtn->setFixedSize(numSize);

        gridLayout->addWidget(dotBtn, 6, 2, 1, 1);

        num7Btn = new QPushButton(Form);
        num7Btn->setObjectName(QStringLiteral("num7Btn"));
        num7Btn->setStyleSheet(numBtnQss);
        num7Btn->setFixedSize(numSize);

        gridLayout->addWidget(num7Btn, 5, 0, 1, 1);

        okBtn = new QPushButton(Form);
        okBtn->setObjectName(QStringLiteral("okBtn"));
        okBtn->setStyleSheet(QLatin1String("color: rgb(255, 255, 255);\n"
                                             "background-color: rgb(0, 170, 0);\n"
                                           "border-radius: 5px;"));
        okBtn->setFixedSize(funSize);

        gridLayout->addWidget(okBtn, 6, 3, 1, 1);

        signBtn = new QPushButton(Form);
        signBtn->setObjectName(QStringLiteral("signBtn"));
        signBtn->setStyleSheet(numBtnQss);
        signBtn->setFixedSize(numSize);

        gridLayout->addWidget(signBtn, 6, 0, 1, 1);

        num1Btn = new QPushButton(Form);
        num1Btn->setObjectName(QStringLiteral("num1Btn"));
        num1Btn->setStyleSheet(numBtnQss);
        num1Btn->setFixedSize(numSize);

        gridLayout->addWidget(num1Btn, 1, 0, 1, 1);

        retranslateUi(Form);

        QMetaObject::connectSlotsByName(Form);
    } // setupUi

    void retranslateUi(QWidget *Form)
    {
        Form->setWindowTitle("From");
        num0Btn->setText("0");
        num5Btn->setText("5");
        num4Btn->setText("4");
        num3Btn->setText("3");
        clearBtn->setText(QStringLiteral("清除"));
        num6Btn->setText("6");
        num9Btn->setText("9");
        num2Btn->setText("2");
        num8Btn->setText("8");
        delBtn->setText(QStringLiteral("退格"));
        escBtn->setText(QStringLiteral("退出"));
        dotBtn->setText(".");
        num7Btn->setText("7");
        okBtn->setText(QStringLiteral("确定"));
        signBtn->setText("+/-");
        num1Btn->setText("1");
    } // retranslateUi

};


class NumKeypad : public QWidget
{
    Q_OBJECT
public:
    explicit NumKeypad(QWidget *parent = nullptr);

    void SetContent(QString str){
        m_strContent = str;
        ui.numLE->setText(m_strContent);
    }
    QString GetContent(){
        return m_strContent;
    }

    bool m_bVaild = true;

signals:
    void CloseSig();

private slots:
    void NumberSlot(quint8 num);
    void AppendSlot(QString str);

private:
    Ui_Form ui;

    QString m_strContent;
};


class NumKeypadDialog : public QDialog
{
    Q_OBJECT
public:
    explicit NumKeypadDialog();
    ~NumKeypadDialog();

    void SetContent(QString str){
        m_pWidget->SetContent(str);
    }
    QString GetContent(){
        return m_pWidget->GetContent();
    }

    bool IsVaild(){
        return m_pWidget->m_bVaild;
    }

private:
    NumKeypad* m_pWidget;
};


#endif // NUMKEYPAD_H
