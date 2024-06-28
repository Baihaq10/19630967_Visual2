#include "user.h"
#include "ui_user.h"

user::user(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::user)
{
    ui->setupUi(this);
}

user::~user()
{
    delete ui;
}

user::user(QString namaUser, QString alamat, QString telp, int level)
{
    this->namaUser = namaUser;
    this->alamat = alamat;
    this->telp = telp;
    this->level = level;
}

void user::setNamaUser(QString namaUser)
{
    this->namaUser = namaUser;
}

QString user::getNamaUser()
{
    return this->namaUser;
}

void user::setAlamat(QString alamat)
{
    this->alamat = alamat;
}

QString user::getAlamat()
{
    return this->alamat;
}

void user::setTelp(QString telp)
{
    this->telp = telp;
}

QString user::getTelp()
{
    return this->telp;
}

void user::setLevel(int level)
{
    this->level = level;
}

int user::getLevel()
{
    return this->level;
}

void user::on_pushButton_clicked()
{
    user u;

    u.setNamaUser(ui->namaUserLineEdit->text());
    u.setAlamat(ui->alamatLineEdit->text());
    u.setTelp(ui->teleponLineEdit->text());
    u.setLevel(ui->levelLineEdit->text().toInt());

    qDebug()<<"Nama User : "<<u.getNamaUser()<<"\n";
    qDebug()<<"Alamat : "<<u.getAlamat()<<"\n";
    qDebug()<<"Telepon : "<<u.getTelp()<<"\n";
    qDebug()<<"Level : "<<u.getLevel()<<"\n";
}

