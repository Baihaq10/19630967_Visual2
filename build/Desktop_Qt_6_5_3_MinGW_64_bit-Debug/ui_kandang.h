/********************************************************************************
** Form generated from reading UI file 'kandang.ui'
**
** Created by: Qt User Interface Compiler version 6.5.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_KANDANG_H
#define UI_KANDANG_H

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

class Ui_kandang
{
public:
    QPushButton *pushButton;
    QWidget *formLayoutWidget;
    QFormLayout *formLayout;
    QLabel *namaKandangLabel;
    QLineEdit *namaKandangLineEdit;
    QLabel *kapasitasLabel;
    QLineEdit *kapasitasLineEdit;
    QTableView *tableView;

    void setupUi(QDialog *kandang)
    {
        if (kandang->objectName().isEmpty())
            kandang->setObjectName("kandang");
        kandang->resize(300, 261);
        pushButton = new QPushButton(kandang);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(90, 70, 101, 31));
        formLayoutWidget = new QWidget(kandang);
        formLayoutWidget->setObjectName("formLayoutWidget");
        formLayoutWidget->setGeometry(QRect(40, 10, 221, 51));
        formLayout = new QFormLayout(formLayoutWidget);
        formLayout->setObjectName("formLayout");
        formLayout->setContentsMargins(0, 0, 0, 0);
        namaKandangLabel = new QLabel(formLayoutWidget);
        namaKandangLabel->setObjectName("namaKandangLabel");

        formLayout->setWidget(0, QFormLayout::LabelRole, namaKandangLabel);

        namaKandangLineEdit = new QLineEdit(formLayoutWidget);
        namaKandangLineEdit->setObjectName("namaKandangLineEdit");

        formLayout->setWidget(0, QFormLayout::FieldRole, namaKandangLineEdit);

        kapasitasLabel = new QLabel(formLayoutWidget);
        kapasitasLabel->setObjectName("kapasitasLabel");

        formLayout->setWidget(1, QFormLayout::LabelRole, kapasitasLabel);

        kapasitasLineEdit = new QLineEdit(formLayoutWidget);
        kapasitasLineEdit->setObjectName("kapasitasLineEdit");

        formLayout->setWidget(1, QFormLayout::FieldRole, kapasitasLineEdit);

        tableView = new QTableView(kandang);
        tableView->setObjectName("tableView");
        tableView->setGeometry(QRect(20, 110, 261, 141));

        retranslateUi(kandang);

        QMetaObject::connectSlotsByName(kandang);
    } // setupUi

    void retranslateUi(QDialog *kandang)
    {
        kandang->setWindowTitle(QCoreApplication::translate("kandang", "Dialog", nullptr));
        pushButton->setText(QCoreApplication::translate("kandang", "Simpan", nullptr));
        namaKandangLabel->setText(QCoreApplication::translate("kandang", "Nama Kandang", nullptr));
        kapasitasLabel->setText(QCoreApplication::translate("kandang", "Kapasitas", nullptr));
    } // retranslateUi

};

namespace Ui {
    class kandang: public Ui_kandang {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_KANDANG_H
