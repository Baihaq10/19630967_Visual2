#include "pakan.h"
#include "ui_pakan.h"

pakan::pakan(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::pakan)
{
    ui->setupUi(this);
}

pakan::~pakan()
{
    delete ui;
}

pakan::pakan(QString namaPakan, QString jenis, int jml)
{
    this->namaPakan = namaPakan;
    this->jenis = jenis;
    this->jml = jml;
}

void pakan::setNamaPakan(QString namaPakan)
{
    this->namaPakan = namaPakan;
}

QString pakan::getNamaPakan()
{
    return this->namaPakan;
}

void pakan::setJenis(QString jenis)
{
    this->jenis = jenis;
}

QString pakan::getJenis()
{
    return this->jenis;
}

void pakan::setJml(int jml)
{
    this->jml = jml;
}

int pakan::getJml()
{
    return this->jml;
}

void pakan::on_pushButton_clicked()
{
    pakan p;

    p.setNamaPakan(ui->namaPakanLineEdit->text());
    p.setJenis(ui->jenisLineEdit->text());
    p.setJml(ui->jumlahPakanLineEdit->text().toInt());

    qDebug()<<"Nama Pakan : "<<p.getNamaPakan()<<"\n";
    qDebug()<<"Jenis : "<<p.getJenis()<<"\n";
    qDebug()<<"Jumlah Pakan : "<<p.getJml()<<"\n";
}

