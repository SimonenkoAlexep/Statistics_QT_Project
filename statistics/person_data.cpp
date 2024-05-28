#include "person_data.h"
#include "ui_person_data.h"
#include "data.cpp"

#include <vector>
#include <iostream>
#include <QString>
#include <QPushButton>
#include <QLabel>
#include <QScrollArea>
#include <QVBoxLayout>
#include <QtCharts/QPieSeries>
#include <QtCharts>
#include <QPieSeries>
#include <QPieSlice>
#include <QLayout>
#include <QTimer>
#include <QtWidgets>
#include <QChart>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtCharts/QChartView>
#include <QtCharts/QPieSeries>
#include <QtCharts/QPieSlice>
#include <QStringList>

#include <QChartView>
#include <QtCharts/QtCharts>
#include <QtWidgets/QApplication>
#include <QtCharts/QChartView>
#include <QtCharts/QPieSeries>
#include <QtWidgets/QVBoxLayout>
#include <QtGui/QPainter>
#include <QToolTip>
#include <QMouseEvent>
#include <QScrollArea>



Person_Data::Person_Data(QWidget *widget, QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Person_Data)
    , widget(widget)
{
    ui->setupUi(this);
    this->setFixedSize(308, 600);
    this->setWindowTitle("Person Data");
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


    connect(ui->biton, &QPushButton::clicked, this, &Person_Data::returnTo);

    QStringList person_list;
    person_list << "Age" << "Skin color" << "Eye color" << "Hair color" << "Face shape" << "Eye shape";
    ui->comboBox->addItems(person_list);
}


void Person_Data::RoundDiag(QString type) {
    QPieSeries *series = new QPieSeries();


    get_data(type, false);
    for (auto i : global_data_map_string_int) {
        QPieSlice *slice1 = new QPieSlice(i.first, i.second);
        if (i.first == "Light") {
            slice1->setBrush(QColor("#FFDEAD"));
        } else if (i.first == "Dark") {
            slice1->setBrush(QColor("#8B4513"));
        } else {
            slice1->setBrush(QColor(i.first));
        }
        series->append(slice1);
    }

    QChart *chart = new QChart();
    chart->addSeries(series);
    chart->setTitle("statistics");

    chart->legend()->setVisible(true);
    chart->legend()->setAlignment(Qt::AlignRight);

    QChartView *chartView = new QChartView(chart);
    chartView->setFixedSize(308, 400);
    chartView->setRenderHint(QPainter::Antialiasing);
    chartView->show();
}

void Person_Data::drawBarChart(QString type) {



    get_data(type, false);
    QBarSeries *series = new QBarSeries();

    for (auto i : global_data_map_string_int) {
         QBarSet *set0 = new QBarSet(i.first);
         *set0 << i.second;
         if (i.first == "Light") {
             set0->setBrush(QColor("#FFDEAD"));
         } else if (i.first == "Dark") {
             set0->setBrush(QColor("#8B4513"));
         } else {
             set0->setBrush(QColor(i.first));
         }
         series->append(set0);
    }

    QChart *chart = new QChart();
    chart->addSeries(series);
    chart->setTitle(type);
    chart->setAnimationOptions(QChart::SeriesAnimations);
    QStringList categories;
    categories << "";

    QBarCategoryAxis *axisX = new QBarCategoryAxis();
    axisX->append(categories);
    chart->addAxis(axisX, Qt::AlignBottom);
    series->attachAxis(axisX);

    QValueAxis *axisY = new QValueAxis();

    chart->addAxis(axisY, Qt::AlignLeft);
    series->attachAxis(axisY);
    QChartView *chartView = new QChartView(chart);
    chartView->setRenderHint(QPainter::Antialiasing);

    chartView->setFixedSize(308, 400);

    chartView->show();
}

void Person_Data::drawInteractiveChart(QString type) {

    QLineSeries *lineSeries = new QLineSeries();

    QScatterSeries *scatterSeries = new QScatterSeries();
    scatterSeries->setMarkerShape(QScatterSeries::MarkerShapeCircle);
    scatterSeries->setMarkerSize(10.0);

    get_data(type, true);
    for (auto i : global_data_map_int_int) {
        QPointF point(i.first, i.second);
        lineSeries->append(point);
        scatterSeries->append(point);
    }

    QChart *chart = new QChart();
    chart->addSeries(lineSeries);
    chart->addSeries(scatterSeries);
    chart->setTitle("Interactive Line Chart with Highlighted Points");
    chart->setAnimationOptions(QChart::NoAnimation);

    QValueAxis *axisX = new QValueAxis();
    axisX->setLabelFormat("%i");
    axisX->setTitleText("X Axis");
    chart->addAxis(axisX, Qt::AlignBottom);
    lineSeries->attachAxis(axisX);
    scatterSeries->attachAxis(axisX);

    QValueAxis *axisY = new QValueAxis();
    axisY->setLabelFormat("%i");
    axisY->setTitleText("Y Axis");
    chart->addAxis(axisY, Qt::AlignLeft);
    lineSeries->attachAxis(axisY);
    scatterSeries->attachAxis(axisY);

    QChartView *chartView = new QChartView(chart);
    chartView->setRenderHint(QPainter::Antialiasing);

    chartView->setMinimumWidth(1000);

    chartView->setRubberBand(QChartView::HorizontalRubberBand);
    chartView->setInteractive(true);

    connect(scatterSeries, &QScatterSeries::hovered, this, &Person_Data::showPointTooltip);

    QScrollArea *scrollArea = new QScrollArea();
    scrollArea->setWidget(chartView);
    scrollArea->setWidgetResizable(true);
    scrollArea->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOn);

    scrollArea->setFixedSize(308, 400);

    scrollArea->show();
}


void Person_Data::showPointTooltip(const QPointF &point, bool state) {
    if (state) {
        QString tooltip = QString("X: %1, Y: %2").arg(point.x()).arg(point.y());
        QToolTip::showText(QCursor::pos(), tooltip);
    } else {
        QToolTip::hideText();
    }
}


void Person_Data::returnTo() {
    close();
    widget->show();
}

Person_Data::~Person_Data()
{
    delete ui;
}




void Person_Data::on_comboBox_textActivated(const QString &arg1)
{
    if (ui->comboBox->currentText() == "Age") {
        drawInteractiveChart("Age");
    }
    if (ui->comboBox->currentText() == "Skin color") {
        RoundDiag("Skin color");
    }
    if (ui->comboBox->currentText() == "Eye color") {
        drawBarChart("Eye color");
    }
    if (ui->comboBox->currentText() == "Hair color") {
        RoundDiag("Hair color");
    }
}

