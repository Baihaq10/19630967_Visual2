#ifndef USER_H
#define USER_H

#include <QDialog>
#include <QString>

namespace Ui {
class user;
}

class user : public QDialog
{
    Q_OBJECT

public:
    explicit user(QWidget *parent = nullptr);
    ~user();

    user(QString namaUser, QString alamat, QString telp, int level);

    void setNamaUser(QString namaUser);
    QString getNamaUser();

    void setAlamat(QString alamat);
    QString getAlamat();

    void setTelp(QString telp);
    QString getTelp();

    void setLevel(int level);
    int getLevel();

private slots:
    void on_pushButton_clicked();

private:
    Ui::user *ui;

    QString namaUser, alamat, telp;
    int level;
};

#endif // USER_H
