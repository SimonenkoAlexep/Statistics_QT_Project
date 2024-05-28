#ifndef PERSON_DATA_H
#define PERSON_DATA_H

#include <QWidget>
#include "widget.h"
#include <QChartView>
#include <QPieSlice>
#include <QVBoxLayout>

namespace Ui {
class Person_Data;
}

class Person_Data : public QWidget
{
    Q_OBJECT

public:
    explicit Person_Data(QWidget *widget, QWidget *parent = nullptr);
    ~Person_Data();
    void get_data(QString str, bool is_int);

private slots:
    void returnTo();
    void RoundDiag(QString type);
    void drawBarChart(QString type);
    void drawInteractiveChart(QString type);
    void showPointTooltip(const QPointF &point, bool state);

    void on_comboBox_textActivated(const QString &arg1);

private:
    Ui::Person_Data *ui;
    QWidget *widget;
    QBoxLayout *layout;
    std::map<int, int> global_data_map_int_int;
    std::map<QString, int> global_data_map_string_int;
};

#endif // PERSON_DATA_H
