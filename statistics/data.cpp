#include <map>
#include <QString>
#include "person_data.h"
#include <QTextStream>
#include <QFile>


void Person_Data::get_data(QString str, bool is_int) {
    Q_INIT_RESOURCE(resource);

    QFile file(":/data.txt");
    QTextStream fin(&file);
    file.open(QFile::ReadOnly);

    QString data_kol;
    QString temp;
    QString key;
    QString value;
    std::map<int, int> data_map_int_int;
    std::map<QString, int> data_map_string_int;

    while (temp != str) {
        temp = fin.readLine();
    }
    data_kol = fin.readLine();
    if (is_int) {
        for (int i = 0; i < data_kol.toInt(nullptr, 10); i++) {
            fin >> key;
            fin >> value;
            data_map_int_int[key.toInt(nullptr, 10)] = value.toInt(nullptr, 10);
        }
        global_data_map_int_int = data_map_int_int;
    }
    else {
        for (int i = 0; i < data_kol.toInt(nullptr, 10); i++) {
            fin >> key;
            fin >> value;
            data_map_string_int[key] = value.toInt(nullptr, 10);
        }
        global_data_map_string_int = data_map_string_int;
    }
}
