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
        pushButton->setGeometry(QRect(110, 550, 81, 31));
        pushButton_2 = new QPushButton(Widget);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setEnabled(true);
        pushButton_2->setGeometry(QRect(110, 70, 83, 29));
        pushButton_2->setInputMethodHints(Qt::ImhNone);
        pushButton_3 = new QPushButton(Widget);
        pushButton_3->setObjectName("pushButton_3");
        pushButton_3->setGeometry(QRect(110, 180, 83, 29));
        pushButton_4 = new QPushButton(Widget);
        pushButton_4->setObjectName("pushButton_4");
        pushButton_4->setGeometry(QRect(110, 290, 83, 29));
        pushButton_5 = new QPushButton(Widget);
        pushButton_5->setObjectName("pushButton_5");
        pushButton_5->setGeometry(QRect(110, 400, 83, 29));
        comboBox = new QComboBox(Widget);
        comboBox->setObjectName("comboBox");
        comboBox->setGeometry(QRect(60, 60, 82, 28));
        comboBox_2 = new QComboBox(Widget);
        comboBox_2->setObjectName("comboBox_2");
        comboBox_2->setGeometry(QRect(60, 100, 82, 28));
        comboBox_3 = new QComboBox(Widget);
        comboBox_3->setObjectName("comboBox_3");
        comboBox_3->setGeometry(QRect(50, 130, 82, 28));
        comboBox_4 = new QComboBox(Widget);
        comboBox_4->setObjectName("comboBox_4");
        comboBox_4->setGeometry(QRect(40, 200, 82, 28));

        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QCoreApplication::translate("Widget", "Statistics", nullptr));
        pushButton->setText(QCoreApplication::translate("Widget", "STATISTICS", nullptr));
        pushButton_2->setText(QCoreApplication::translate("Widget", "PersonData", nullptr));
        pushButton_3->setText(QCoreApplication::translate("Widget", "BodyData", nullptr));
        pushButton_4->setText(QCoreApplication::translate("Widget", "ItemData", nullptr));
        pushButton_5->setText(QCoreApplication::translate("Widget", "IventData", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
