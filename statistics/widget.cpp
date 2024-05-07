#include "widget.h"
#include "ui_widget.h"
#include <QPainter>
#include <QPainterPath>
#include <QStringList>
#include <iostream>
#include <algorithm>
#include <QString>

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
            painter.drawPie(60, 230, 200, 200, angle, spanAngle);
            angle += spanAngle;
        }
        kost = false;
    }
    if ((v.size() > 10) && kost) {
        QPainter painter(this);

        QPen pen;  // перо по умолчанию
        pen.setWidth(2); // толщина пера
        pen.setBrush(Qt::black); // цвет пера
        painter.setPen(pen); // применяем настройки пера

        int W = width(); // Ширина и высота окна
        int H = height();
        int d = 0.08*W;
        QString str;

        int v_max = *std::max_element(v.begin(), v.end());
        double coef = 0.9*H/v_max;
        for (int i = 0; i < v.size(); i++) {
            painter.drawRect(QRect(QPoint(0.09*W + d*i, H - 0.05*H), QPoint(0.15*W+d*i, H - coef*v[i])));
            painter.drawText(0.1*W + d*i, H - 0.03*H, str.setNum(v[i]));
        }

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
        v = {11, 4, 35, 7, 10, 20, 24, 17, 29, 36, 10};
        std::sort(v.begin(), v.end());
        kost = true;
        repaint();
    }
    if (ui->comboBox->currentText() == "Skin color") {
        v = {11, 4, 35, 7, 10, 20, 24};
        std::sort(v.begin(), v.end());
        kost = true;
        repaint();
    }
}

