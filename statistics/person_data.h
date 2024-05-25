#ifndef PERSON_DATA_H
#define PERSON_DATA_H

#include <QWidget>
#include "widget.h"
#include <QChartView>
#include <QPieSlice>

namespace Ui {
class Person_Data;
}

class Person_Data : public QWidget
{
    Q_OBJECT

public:
    explicit Person_Data(QWidget *widget, QWidget *parent = nullptr);
    ~Person_Data();

private slots:
    void returnTo();
    void Activated(int index);
    void RoundDiag();
    void drawBarChart();
    void drawLineChart();
    void drawInteractiveChart();
    void showPointTooltip(const QPointF &point, bool state);

private:
    Ui::Person_Data *ui;
    QWidget *widget;
    QChartView *chartView;
};

#endif // PERSON_DATA_H