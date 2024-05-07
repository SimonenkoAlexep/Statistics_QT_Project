#include "widget.h"
#include "ui_widget.h"
#include <QPainter>
#include <QPainterPath>
#include <QStringList>
#include <iostream>

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    QStringList PersonFields = (QStringList() << "-" << "Age" << "Skin color" << "Eye color" << "Hair color" << "Face shape" << "Eye shape");
    setFixedSize(308, 600);
    ui->setupUi(this);
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
    QRect rect = this-> rect ();
    rect.setWidth (rect.width ()-1);
    rect.setHeight (rect.height ()-1);
    painter.drawRoundedRect (rect, 15, 15);
    {
        QPainterPath painterPath;
        painterPath.addRoundedRect (rect, 15, 15);
        painter.drawPath (painterPath);
    }
    QWidget :: paintEvent (event);
    if ((v.size() <= 10) && kost) {
        QPainter painter(this);

        QPen pen;  // перо по умолчанию
        pen.setWidth(2); // толщина пера
        pen.setBrush(Qt::black); // цвет пера
        painter.setPen(pen);

        double sum = 0;
        for (int i : v) {
            sum += i;
        }
        double coef = 16*360/sum;
        double angle = 0;
        for (int i = 0; i < v.size(); i++) {
            int spanAngle = static_cast<int>(coef * v[i]);
            painter.drawPie(90, 130, 100, 100, angle, spanAngle);
            angle += spanAngle;
        }
        kost = false;
    }
}

void Widget::on_pushButton_clicked()
{
    ui->pushButton->setVisible(false);
    ui->pushButton_2->setVisible(true);
    ui->pushButton_3->setVisible(true);
    ui->pushButton_4->setVisible(true);
    ui->pushButton_5->setVisible(true);
}


void Widget::on_pushButton_2_clicked()
{
    ui->pushButton_2->setVisible(false);
    ui->pushButton_3->setVisible(false);
    ui->pushButton_4->setVisible(false);
    ui->pushButton_5->setVisible(false);
    ui->comboBox->setVisible(true);

}


void Widget::on_pushButton_3_clicked()
{
    ui->pushButton_2->setVisible(false);
    ui->pushButton_3->setVisible(false);
    ui->pushButton_4->setVisible(false);
    ui->pushButton_5->setVisible(false);
    ui->comboBox_2->setVisible(true);
}


void Widget::on_pushButton_4_clicked()
{
    ui->pushButton_2->setVisible(false);
    ui->pushButton_3->setVisible(false);
    ui->pushButton_4->setVisible(false);
    ui->pushButton_5->setVisible(false);
    ui->comboBox_3->setVisible(true);
}


void Widget::on_pushButton_5_clicked()
{
    ui->pushButton_2->setVisible(false);
    ui->pushButton_3->setVisible(false);
    ui->pushButton_4->setVisible(false);
    ui->pushButton_5->setVisible(false);
    ui->comboBox_4->setVisible(true);
}


void Widget::on_comboBox_textActivated(const QString &arg1)
{
    if (ui->comboBox->currentText() == "Age") {
        v = {1, 4, 55, 7, 10, 20};
        kost = true;
        repaint();

    }
}

