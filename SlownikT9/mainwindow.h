#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <string>
#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE
using namespace std;
class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    void display();

    ~MainWindow();
    string input;
public slots:
    void NumPressed();
    void changeword();
    void removelast();
private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
