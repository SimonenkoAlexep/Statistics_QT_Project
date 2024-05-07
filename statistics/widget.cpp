#include "widget.h"
#include "ui_widget.h"
#include <QPainter>
#include <QPainterPath>
#include <QStringList>

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


void Widget::paintEvent (QPaintEvent * event, const std::vector<int> &v)
{
    QPainter painter (this);
    painter.setRenderHint (QPainter :: Antialiasing); // Anti-aliasing;
    painter.setBrush (QBrush (Qt :: gray));
    painter.setPen (Qt :: transparent);
    QRect rect = this-> rect ();
    rect.setWidth (rect.width ()-1);
    rect.setHeight (rect.height ()-1);
    painter.drawRoundedRect (rect, 15, 15);
    // You can also use QPainterPath to draw instead of painter.drawRoundedRect (rect, 15, 15);
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

    std::vector<int> v;
    if (ui->comboBox->currentText() == "Age") {
        //v = {1, 4, 55, 7};
        //repaint();
        ui->pushButton_4->setVisible(true);
    }
}

