/********************************************************************************
** Form generated from reading UI file 'person_data.ui'
**
** Created by: Qt User Interface Compiler version 6.6.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PERSON_DATA_H
#define UI_PERSON_DATA_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Person_Data
{
public:
    QPushButton *biton;
    QComboBox *comboBox;

    void setupUi(QWidget *Person_Data)
    {
        if (Person_Data->objectName().isEmpty())
            Person_Data->setObjectName("Person_Data");
        Person_Data->resize(312, 434);
        biton = new QPushButton(Person_Data);
        biton->setObjectName("biton");
        biton->setGeometry(QRect(0, 0, 41, 31));
        QFont font;
        font.setStyleStrategy(QFont::PreferDefault);
        biton->setFont(font);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/images/png-clipart-flickr-logo-computer-icons-button-back-angle-text.png"), QSize(), QIcon::Normal, QIcon::Off);
        biton->setIcon(icon);
        biton->setIconSize(QSize(50, 50));
        comboBox = new QComboBox(Person_Data);
        comboBox->setObjectName("comboBox");
        comboBox->setGeometry(QRect(10, 40, 291, 31));
        comboBox->setEditable(false);

        retranslateUi(Person_Data);

        QMetaObject::connectSlotsByName(Person_Data);
    } // setupUi

    void retranslateUi(QWidget *Person_Data)
    {
        Person_Data->setWindowTitle(QCoreApplication::translate("Person_Data", "Form", nullptr));
        biton->setText(QString());
#if QT_CONFIG(tooltip)
        comboBox->setToolTip(QCoreApplication::translate("Person_Data", "<html><head/><body><p>vfvfvfvfvf</p><p><br/></p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        comboBox->setCurrentText(QString());
        comboBox->setPlaceholderText(QCoreApplication::translate("Person_Data", "Choose one field", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Person_Data: public Ui_Person_Data {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PERSON_DATA_H
