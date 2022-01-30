#include "mainwindow.h"

#include <QApplication>
#include "HashTable.h"
#include "T9Dictionary.h"
#include "LinkedList.h"
/**
* Główna pętla programu
*
*
*
*
*
*/
int main(int argc, char *argv[])
{

    QApplication a(argc, argv);
    MainWindow w;
    w.show();

    return a.exec();
}
