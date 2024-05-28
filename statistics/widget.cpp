#include "widget.h"
#include "person_data.h"
#include "ui_widget.h"
#include <QPainter>
#include <QPainterPath>
#include <QStringList>
#include <QString>
#include <QtCharts/QtCharts>
#include <QColor>
#include <QGraphicsItem>
#include <QGraphicsSceneMouseEvent>
#include <QPainter>
#include <QPointF>
#include <QRectF>
#include <QString>
#include <QStyleOptionGraphicsItem>
#include <Qt>
#include <QtMinMax>
#include <QtNumeric>
#include <QtTypes>


Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    QStringList PersonFields = (QStringList() << "-" << "Age" << "Skin color" << "Eye color" << "Hair color" << "Face shape" << "Eye shape");
    ui->setupUi(this);
    this->setFixedSize(308, 600);
    this->setWindowTitle("Statistics");
    QString styleSheet = R"(
        QWidget {
            background-color: #f0f0f0;
            font-family: Arial, sans-serif;
            color: #333;
        }
        QLineEdit {
            font-size: 16px;
            padding: 5px;
            border: 1px solid #ccc;
            border-radius: 5px;
        }
        QPushButton {
            font-size: 16px;
            padding: 7px;
            background-color: #f0f0f0;
            color: black;
            border: none;
            border-radius: 5px;
        }
        QPushButton:hover {
            background-color: #45a049;
        }
    )";

    this->setStyleSheet(styleSheet);
    ui->pushButton_2->setVisible(false);
    ui->pushButton_3->setVisible(false);
    ui->pushButton_4->setVisible(false);
    ui->pushButton_5->setVisible(false);
    ui->comboBox->setVisible(false);
    ui->comboBox_2->setVisible(false);
    ui->comboBox_3->setVisible(false);
    ui->comboBox_4->setVisible(false);
    ui->comboBox->addItems(PersonFields);
}

Widget::~Widget()
{
    delete ui;
}


void Widget::paintEvent (QPaintEvent * event)
{
    QPainter painter (this);
    painter.setRenderHint (QPainter :: Antialiasing); // Anti-aliasing;
    painter.setBrush (QBrush (Qt :: gray));
    painter.setPen (Qt :: transparent);
    QRect rect = this->rect ();
    rect.setWidth (rect.width ()-1);
    rect.setHeight (rect.height ()-1);
    painter.drawRoundedRect (rect, 15, 15);
    {
        QPainterPath painterPath;
        painterPath.addRoundedRect (rect, 15, 15);
        painter.drawPath (painterPath);
    }
    QWidget :: paintEvent (event);
}

void Widget::on_pushButton_clicked()
{
    ui->pushButton->setVisible(false);
    ui->pushButton_2->setVisible(true);
    ui->pushButton_3->setVisible(true);
    ui->pushButton_4->setVisible(true);
    ui->pushButton_5->setVisible(true);
}


void Widget::on_pushButton_2_clicked() {
    Person_Data *person_info = new Person_Data(this);
    person_info->show();
    hide();
}


void Widget::on_pushButton_3_clicked()
{

}


void Widget::on_pushButton_4_clicked()
{

}


void Widget::on_pushButton_5_clicked()
{

}

