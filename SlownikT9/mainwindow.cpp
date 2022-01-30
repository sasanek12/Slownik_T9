#include <QString>
#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "T9Dictionary.h"
#include "LinkedList.h"
#include <string>
string input;
QString qstring;
T9Dictionary test("slowa.txt");
LinkedList results;
int displayednum = 1;
/**
* inicjalizuje okno programu
*/
MainWindow::MainWindow(QWidget *parent) //obsługa okna
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    input = "";
    ui->Display->setText(QString::fromStdString(input));
    this->setWindowTitle("Slownik T9");
    QPushButton *numButtons[10];
        for(int i = 1; i < 10; ++i){
            QString butName = "Button" + QString::number(i);
            numButtons[i] = MainWindow::findChild<QPushButton *>(butName);
            connect(numButtons[i], SIGNAL(clicked()),
                    SLOT(NumPressed()));
        }
        connect(ui->Buttondel,SIGNAL(clicked()),SLOT(removelast()));
        connect(ui->Button,SIGNAL(clicked()),SLOT(changeword()));

}
/**
* obsługa klawiszy numerycznych
*
*/
void MainWindow::NumPressed(){ //obsługa wciśnięcia klawisza numerycznego
    QPushButton *button = (QPushButton *)sender();
    QStringList piece = button->text().split(" ");
    QString butVal = piece.at(0);
    displayednum = 1;
    string temp = butVal.toStdString();
    input += temp;
    results = test.getWords(input);
    if(results.isEmpty()){
        ui->Display->setText(QString::fromStdString(input));
    }
    else{
    QString display = QString::fromStdString((results.first()->value + " \n " + input));
    ui->Display->setText(display);
}
}
/**
* obsługa klawisza usuwania
*
*/
void MainWindow::removelast(){ //obsługa wciśnięcia klawisza backspace
    if(input.length() != 0){
    input.pop_back();
    displayednum = 1;
    results = test.getWords(input);
    if(results.isEmpty()){
        ui->Display->setText(QString::fromStdString(input));
    }
    else{
    QString display = QString::fromStdString((results.first()->value + " \n " + input));
    ui->Display->setText(display);
}
    }
    else{ ui->Display->setText("empty");};
}
/**
* obsługa klawisza zmiany słowa
*
*/
void MainWindow::changeword(){ //obsługa klawisza zmiany wyświetlanego słowa
    if(!results.isEmpty()){
        if(displayednum == results.getLength()){
            displayednum = 1;
            QString display = QString::fromStdString(results.first()->value+ " \n " + input);
            ui->Display->setText(display);
        }
        else{
            displayednum++;
            QString display = QString::fromStdString(results.retrieve(displayednum-1)+ " \n " + input);
            ui->Display->setText(display);
        }
    }
}

MainWindow::~MainWindow() //destruktor
{
    delete ui;
}

