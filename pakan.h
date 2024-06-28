#ifndef PAKAN_H
#define PAKAN_H

#include <QDialog>
#include <QString>

namespace Ui {
class pakan;
}

class pakan : public QDialog
{
    Q_OBJECT

public:
    explicit pakan(QWidget *parent = nullptr);
    ~pakan();

    pakan(QString namaPakan, QString jenis, int jml);

    void setNamaPakan(QString namaPakan);
    QString getNamaPakan();

    void setJenis(QString jenis);
    QString getJenis();

    void setJml(int jml);
    int getJml();

private slots:
    void on_pushButton_clicked();

private:
    Ui::pakan *ui;

    QString namaPakan, jenis;
    int jml;
};

#endif // PAKAN_H
