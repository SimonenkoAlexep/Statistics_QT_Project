/********************************************************************************
** Form generated from reading UI file 'widget.ui'
**
** Created by: Qt User Interface Compiler version 6.6.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_H
#define UI_WIDGET_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;
    QPushButton *pushButton_5;
    QComboBox *comboBox;
    QComboBox *comboBox_2;
    QComboBox *comboBox_3;
    QComboBox *comboBox_4;
    QPushButton *pushButton_6;
    QPushButton *pushButton_7;
    QPushButton *pushButton_9;
    QPushButton *pushButton_10;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName("Widget");
        Widget->resize(308, 600);
        QFont font;
        font.setStyleStrategy(QFont::PreferDefault);
        Widget->setFont(font);
        pushButton = new QPushButton(Widget);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(130, 520, 51, 51));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/images/plus.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton->setIcon(icon);
        pushButton_2 = new QPushButton(Widget);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setEnabled(true);
        pushButton_2->setGeometry(QRect(110, 80, 81, 71));
        QFont font1;
        font1.setPointSize(7);
        font1.setStyleStrategy(QFont::PreferDefault);
        pushButton_2->setFont(font1);
        pushButton_2->setInputMethodHints(Qt::ImhNone);
        pushButton_3 = new QPushButton(Widget);
        pushButton_3->setObjectName("pushButton_3");
        pushButton_3->setGeometry(QRect(110, 160, 83, 71));
        pushButton_3->setFont(font1);
        pushButton_4 = new QPushButton(Widget);
        pushButton_4->setObjectName("pushButton_4");
        pushButton_4->setGeometry(QRect(110, 240, 83, 71));
        pushButton_4->setFont(font1);
        pushButton_5 = new QPushButton(Widget);
        pushButton_5->setObjectName("pushButton_5");
        pushButton_5->setGeometry(QRect(110, 320, 83, 71));
        pushButton_5->setFont(font1);
        comboBox = new QComboBox(Widget);
        comboBox->setObjectName("comboBox");
        comboBox->setGeometry(QRect(60, 60, 82, 28));
        comboBox_2 = new QComboBox(Widget);
        comboBox_2->setObjectName("comboBox_2");
        comboBox_2->setGeometry(QRect(60, 60, 82, 28));
        comboBox_3 = new QComboBox(Widget);
        comboBox_3->setObjectName("comboBox_3");
        comboBox_3->setGeometry(QRect(60, 60, 82, 28));
        comboBox_4 = new QComboBox(Widget);
        comboBox_4->setObjectName("comboBox_4");
        comboBox_4->setGeometry(QRect(60, 60, 82, 28));
        pushButton_6 = new QPushButton(Widget);
        pushButton_6->setObjectName("pushButton_6");
        pushButton_6->setGeometry(QRect(10, 520, 51, 51));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/images/home.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_6->setIcon(icon1);
        pushButton_7 = new QPushButton(Widget);
        pushButton_7->setObjectName("pushButton_7");
        pushButton_7->setGeometry(QRect(190, 520, 51, 51));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/images/play.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_7->setIcon(icon2);
        pushButton_9 = new QPushButton(Widget);
        pushButton_9->setObjectName("pushButton_9");
        pushButton_9->setGeometry(QRect(70, 520, 51, 51));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/images/search.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_9->setIcon(icon3);
        pushButton_10 = new QPushButton(Widget);
        pushButton_10->setObjectName("pushButton_10");
        pushButton_10->setGeometry(QRect(250, 520, 51, 51));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/images/user.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_10->setIcon(icon4);

        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QCoreApplication::translate("Widget", "Statistics", nullptr));
        pushButton->setText(QString());
        pushButton_2->setText(QCoreApplication::translate("Widget", "Person\n"
"Data", nullptr));
        pushButton_3->setText(QCoreApplication::translate("Widget", "BodyData", nullptr));
        pushButton_4->setText(QCoreApplication::translate("Widget", "ItemData", nullptr));
        pushButton_5->setText(QCoreApplication::translate("Widget", "EventData", nullptr));
        pushButton_6->setText(QString());
        pushButton_7->setText(QString());
        pushButton_9->setText(QString());
        pushButton_10->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
