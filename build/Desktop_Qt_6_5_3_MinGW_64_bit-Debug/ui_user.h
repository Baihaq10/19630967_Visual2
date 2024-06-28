/********************************************************************************
** Form generated from reading UI file 'user.ui'
**
** Created by: Qt User Interface Compiler version 6.5.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_USER_H
#define UI_USER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_user
{
public:
    QPushButton *pushButton;
    QWidget *formLayoutWidget;
    QFormLayout *formLayout;
    QLabel *namaUserLabel;
    QLineEdit *namaUserLineEdit;
    QLabel *alamatLabel;
    QLineEdit *alamatLineEdit;
    QLabel *teleponLabel;
    QLineEdit *teleponLineEdit;
    QLabel *levelLabel;
    QLineEdit *levelLineEdit;
    QTableView *tableView;

    void setupUi(QDialog *user)
    {
        if (user->objectName().isEmpty())
            user->setObjectName("user");
        user->resize(300, 300);
        pushButton = new QPushButton(user);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(90, 120, 101, 31));
        formLayoutWidget = new QWidget(user);
        formLayoutWidget->setObjectName("formLayoutWidget");
        formLayoutWidget->setGeometry(QRect(40, 10, 221, 102));
        formLayout = new QFormLayout(formLayoutWidget);
        formLayout->setObjectName("formLayout");
        formLayout->setContentsMargins(0, 0, 0, 0);
        namaUserLabel = new QLabel(formLayoutWidget);
        namaUserLabel->setObjectName("namaUserLabel");

        formLayout->setWidget(0, QFormLayout::LabelRole, namaUserLabel);

        namaUserLineEdit = new QLineEdit(formLayoutWidget);
        namaUserLineEdit->setObjectName("namaUserLineEdit");

        formLayout->setWidget(0, QFormLayout::FieldRole, namaUserLineEdit);

        alamatLabel = new QLabel(formLayoutWidget);
        alamatLabel->setObjectName("alamatLabel");

        formLayout->setWidget(1, QFormLayout::LabelRole, alamatLabel);

        alamatLineEdit = new QLineEdit(formLayoutWidget);
        alamatLineEdit->setObjectName("alamatLineEdit");

        formLayout->setWidget(1, QFormLayout::FieldRole, alamatLineEdit);

        teleponLabel = new QLabel(formLayoutWidget);
        teleponLabel->setObjectName("teleponLabel");

        formLayout->setWidget(2, QFormLayout::LabelRole, teleponLabel);

        teleponLineEdit = new QLineEdit(formLayoutWidget);
        teleponLineEdit->setObjectName("teleponLineEdit");

        formLayout->setWidget(2, QFormLayout::FieldRole, teleponLineEdit);

        levelLabel = new QLabel(formLayoutWidget);
        levelLabel->setObjectName("levelLabel");

        formLayout->setWidget(3, QFormLayout::LabelRole, levelLabel);

        levelLineEdit = new QLineEdit(formLayoutWidget);
        levelLineEdit->setObjectName("levelLineEdit");

        formLayout->setWidget(3, QFormLayout::FieldRole, levelLineEdit);

        tableView = new QTableView(user);
        tableView->setObjectName("tableView");
        tableView->setGeometry(QRect(20, 160, 261, 131));

        retranslateUi(user);

        QMetaObject::connectSlotsByName(user);
    } // setupUi

    void retranslateUi(QDialog *user)
    {
        user->setWindowTitle(QCoreApplication::translate("user", "Dialog", nullptr));
        pushButton->setText(QCoreApplication::translate("user", "Simpan", nullptr));
        namaUserLabel->setText(QCoreApplication::translate("user", "Nama User", nullptr));
        alamatLabel->setText(QCoreApplication::translate("user", "Alamat", nullptr));
        teleponLabel->setText(QCoreApplication::translate("user", "Telepon", nullptr));
        levelLabel->setText(QCoreApplication::translate("user", "Level", nullptr));
    } // retranslateUi

};

namespace Ui {
    class user: public Ui_user {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_USER_H
