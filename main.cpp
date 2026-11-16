#include <QApplication>
#include <QtVersion>
#include <QSqlDatabase>
#include <iostream>
#include <string>
#include <filesystem>

using namespace std;

int main(int argc, char *argv[]) {
    QApplication app(argc, argv);
    cout << "Hello World!" << endl;
    cout << __cplusplus << endl;

    string version = QT_VERSION_STR;
    cout << "Qt Version: " << version << std::endl;

    cout << filesystem::current_path() << endl;

    qDebug() << QSqlDatabase::drivers();

    return 0;
}