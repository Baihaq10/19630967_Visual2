#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

#include <kandang.h>
#include <pakan.h>
#include <user.h>

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_pushButton_3_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_clicked();

private:
    Ui::MainWindow *ui;

    kandang *uiKandang;
    pakan *uiPakan;
    user *uiUser;
};
#endif // MAINWINDOW_H
