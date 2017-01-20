#include <QApplication>
#include <QBrush>
#include "calculator.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    Calculator calcul;
    calcul.setWindowTitle("Calculator");

    calcul.resize(230,300);
    calcul.show();

    return a.exec();
}
