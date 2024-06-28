#include "kandang.h"
#include "ui_kandang.h"

kandang::kandang(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::kandang)
{
    ui->setupUi(this);
}

kandang::~kandang()
{
    delete ui;
}

kandang::kandang(QString namaKandang, QString kapasitas)
{
    this->namaKandang = namaKandang;
    this->kapasitas = kapasitas;
}

void kandang::setNamaKandang(QString namaKandang)
{
    this->namaKandang = namaKandang;
}

QString kandang::getNamaKandang()
{
    return this->namaKandang;
}

void kandang::setKapasitas(QString kapasitas)
{
    this->kapasitas = kapasitas;
}

QString kandang::getKapasitas()
{
    return this->kapasitas;
}

void kandang::on_pushButton_clicked()
{
    kandang k;

    k.setNamaKandang(ui->namaKandangLineEdit->text());
    k.setKapasitas(ui->kapasitasLineEdit->text());

    qDebug()<<"Nama Kandang : "<<k.getNamaKandang()<<"\n";
    qDebug()<<"Kapasitas : "<<k.getKapasitas()<<"\n";
}

