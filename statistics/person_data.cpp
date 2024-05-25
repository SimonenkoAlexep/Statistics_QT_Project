#include "person_data.h"
#include "ui_person_data.h"

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

#include <QChartView>
#include <QtWidgets/QApplication>
#include <QtCharts/QChartView>
#include <QtCharts/QPieSeries>
#include <QtWidgets/QVBoxLayout>
#include <QtGui/QPainter>
#include <QToolTip>
#include <QMouseEvent>



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

/*"Age" << "Skin color" << "Eye color" << "Hair color" << "Face shape" << "Eye shape"*/
    ui->comboBox->addItem("Age");
    ui->comboBox->addItem("Skin color");
    ui->comboBox->addItem("Eye color");
    ui->comboBox->addItem("Hair color");
    ui->comboBox->addItem("Face shape");
    ui->comboBox->addItem("Eye shape");


    connect(ui->comboBox, QOverload<int>::of(&QComboBox::activated), this, &Person_Data::Activated);
}
void Person_Data::RoundDiag() {

    // Выполняем некоторые действия для выбранного элемента
    QPieSeries *series = new QPieSeries();
    series->append("Apple", 1);

    series->append("Banana", 2);
    series->append("Cherry", 3);
    series->append("Orange", 4);

    /*for (auto& i : a) {
        series->append(i.first, i.second);
    }*/

    // Создаем объект графика и представления
    QChart *chart = new QChart();
    chart->addSeries(series);
    chart->setTitle("statistics");

    // Устанавливаем опции для диаграммы
    chart->legend()->setVisible(true);
    chart->legend()->setAlignment(Qt::AlignRight);

    // Создаем представление графика
    QChartView *chartView = new QChartView(chart);
    chartView->setFixedSize(308, 300);
    chartView->setRenderHint(QPainter::Antialiasing);

    // Подключаем событие customContextMenuRequested для обработки запроса на контекстное меню


    // Создаем макет и добавляем представление графика в него
    QVBoxLayout *layout = new QVBoxLayout(this);
    layout->addWidget(chartView);


    // Устанавливаем макет для виджета
    setLayout(layout);
}

void Person_Data::drawBarChart() {
    // Создаем набор данных для каждой категории
    QBarSet *set0 = new QBarSet("Jane");
    QBarSet *set1 = new QBarSet("John");
    QBarSet *set2 = new QBarSet("Axel");
    QBarSet *set3 = new QBarSet("Mary");
    QBarSet *set4 = new QBarSet("Samantha");

    // Заполняем данные
    *set0 << 1 << 2 << 3 << 4 << 5 << 6;
    *set1 << 5 << 0 << 0 << 4 << 0 << 7;
    *set2 << 3 << 5 << 8 << 13 << 8 << 5;
    *set3 << 5 << 6 << 7 << 3 << 4 << 5;
    *set4 << 9 << 7 << 5 << 3 << 1 << 2;

    // Создаем серию и добавляем в нее наборы данных
    QBarSeries *series = new QBarSeries();
    series->append(set0);
    series->append(set1);
    series->append(set2);
    series->append(set3);
    series->append(set4);

    // Создаем объект диаграммы и добавляем в него серию
    QChart *chart = new QChart();
    chart->addSeries(series);
    chart->setTitle("Simple barchart example");
    chart->setAnimationOptions(QChart::SeriesAnimations);

    // Создаем категории осей
    QStringList categories;
    categories << "Jan" << "Feb" << "Mar" << "Apr" << "May" << "Jun";

    QBarCategoryAxis *axisX = new QBarCategoryAxis();
    axisX->append(categories);
    chart->addAxis(axisX, Qt::AlignBottom);
    series->attachAxis(axisX);

    QValueAxis *axisY = new QValueAxis();
    axisY->setRange(0, 15);
    chart->addAxis(axisY, Qt::AlignLeft);
    series->attachAxis(axisY);

    // Создаем представление диаграммы
    QChartView *chartView = new QChartView(chart);
    chartView->setRenderHint(QPainter::Antialiasing);

    // Устанавливаем размер диаграммы
    chartView->setFixedSize(308, 300); // Задаем фиксированный размер для диаграммы

    // Центрирование диаграммы на экране
    QVBoxLayout *mainLayout = new QVBoxLayout(this);
    QHBoxLayout *hLayout = new QHBoxLayout();
    hLayout->addStretch();
    hLayout->addWidget(chartView);
    hLayout->addStretch();
    mainLayout->addStretch();
    mainLayout->addLayout(hLayout);
    mainLayout->addStretch();

    setLayout(mainLayout);
}

void Person_Data::drawLineChart() {
    // Создаем серию
    QLineSeries *series = new QLineSeries();

    // Генерируем большое количество данных
    for (int i = 0; i < 10000; ++i) {
        series->append(i, rand() % 100); // Случайные данные
    }

    // Создаем объект диаграммы и добавляем в него серию
    QChart *chart = new QChart();
    chart->addSeries(series);
    chart->setTitle("Line Chart with Large Data Set");
    chart->setAnimationOptions(QChart::NoAnimation);

    // Создаем оси
    QValueAxis *axisX = new QValueAxis();
    axisX->setLabelFormat("%i");
    axisX->setTitleText("X Axis");
    chart->addAxis(axisX, Qt::AlignBottom);
    series->attachAxis(axisX);

    QValueAxis *axisY = new QValueAxis();
    axisY->setLabelFormat("%i");
    axisY->setTitleText("Y Axis");
    chart->addAxis(axisY, Qt::AlignLeft);
    series->attachAxis(axisY);

    // Создаем представление диаграммы
    QChartView *chartView = new QChartView(chart);
    chartView->setRenderHint(QPainter::Antialiasing);

    // Включаем масштабирование и панорамирование
    chartView->setRubberBand(QChartView::RectangleRubberBand);
    chartView->setInteractive(true);

    // Создаем макет и добавляем представление диаграммы в него
    QVBoxLayout *mainLayout = new QVBoxLayout(this);
    mainLayout->addWidget(chartView);

    // Устанавливаем макет для виджета
    setLayout(mainLayout);
}

void Person_Data::drawInteractiveChart() {
    // Создаем линейную серию
    QLineSeries *lineSeries = new QLineSeries();

    // Создаем серию точек
    QScatterSeries *scatterSeries = new QScatterSeries();
    scatterSeries->setMarkerShape(QScatterSeries::MarkerShapeCircle);
    scatterSeries->setMarkerSize(10.0);

    // Генерируем данные
    for (int i = 0; i < 100; ++i) {
        QPointF point(i, QRandomGenerator::global()->bounded(100));
        lineSeries->append(point);
        scatterSeries->append(point);
    }

    // Создаем объект диаграммы и добавляем серии
    QChart *chart = new QChart();
    chart->addSeries(lineSeries);
    chart->addSeries(scatterSeries);
    chart->setTitle("Interactive Line Chart with Highlighted Points");
    chart->setAnimationOptions(QChart::NoAnimation);

    // Создаем оси
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

    // Создаем представление диаграммы
    QChartView *chartView = new QChartView(chart);
    chartView->setRenderHint(QPainter::Antialiasing);

    // Включаем масштабирование и панорамирование
    chartView->setRubberBand(QChartView::RectangleRubberBand);
    chartView->setInteractive(true);

    // Подключаем сигнал hover для подсвечивания точек
    connect(scatterSeries, &QScatterSeries::hovered, this, &Person_Data::showPointTooltip);

    // Создаем макет и добавляем представление диаграммы в него
    QVBoxLayout *mainLayout = new QVBoxLayout(this);
    mainLayout->addWidget(chartView);

    // Устанавливаем макет для виджета
    setLayout(mainLayout);
    setFixedSize(308, 600); // Устанавливаем фиксированный размер для основного окна
}


void Person_Data::showPointTooltip(const QPointF &point, bool state) {
    if (state) {
        QString tooltip = QString("X: %1, Y: %2").arg(point.x()).arg(point.y());
        QToolTip::showText(QCursor::pos(), tooltip);
    } else {
        QToolTip::hideText();
    }
}


void Person_Data::Activated(int index) {
    // Проверяем, выбран ли определенный элемент по его индексу
    if (index == 0) {
        RoundDiag();
    }
    if (index == 1) {
        drawBarChart();
    }
    if (index == 2) {
        drawLineChart();
    }
    if (index == 3) {
        drawInteractiveChart();
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
