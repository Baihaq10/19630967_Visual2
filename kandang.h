#ifndef KANDANG_H
#define KANDANG_H

#include <QDialog>
#include <QString>

namespace Ui {
class kandang;
}

class kandang : public QDialog
{
    Q_OBJECT

public:
    explicit kandang(QWidget *parent = nullptr);
    ~kandang();

    kandang(QString namaKandang, QString kapasitas);

    void setNamaKandang(QString namaKandang);
    QString getNamaKandang();

    void setKapasitas(QString kapasitas);
    QString getKapasitas();

private slots:
    void on_pushButton_clicked();

private:
    Ui::kandang *ui;

    QString namaKandang, kapasitas;
};

#endif // KANDANG_H
