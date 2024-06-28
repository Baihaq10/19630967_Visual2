/********************************************************************************
** Form generated from reading UI file 'pakan.ui'
**
** Created by: Qt User Interface Compiler version 6.5.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PAKAN_H
#define UI_PAKAN_H

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

class Ui_pakan
{
public:
    QWidget *formLayoutWidget;
    QFormLayout *formLayout;
    QLabel *namaPakanLabel;
    QLineEdit *namaPakanLineEdit;
    QLabel *jenisLabel;
    QLineEdit *jenisLineEdit;
    QLabel *jumlahPakanLabel;
    QLineEdit *jumlahPakanLineEdit;
    QTableView *tableView;
    QPushButton *pushButton;

    void setupUi(QDialog *pakan)
    {
        if (pakan->objectName().isEmpty())
            pakan->setObjectName("pakan");
        pakan->resize(300, 300);
        formLayoutWidget = new QWidget(pakan);
        formLayoutWidget->setObjectName("formLayoutWidget");
        formLayoutWidget->setGeometry(QRect(40, 10, 221, 76));
        formLayout = new QFormLayout(formLayoutWidget);
        formLayout->setObjectName("formLayout");
        formLayout->setContentsMargins(0, 0, 0, 0);
        namaPakanLabel = new QLabel(formLayoutWidget);
        namaPakanLabel->setObjectName("namaPakanLabel");

        formLayout->setWidget(0, QFormLayout::LabelRole, namaPakanLabel);

        namaPakanLineEdit = new QLineEdit(formLayoutWidget);
        namaPakanLineEdit->setObjectName("namaPakanLineEdit");

        formLayout->setWidget(0, QFormLayout::FieldRole, namaPakanLineEdit);

        jenisLabel = new QLabel(formLayoutWidget);
        jenisLabel->setObjectName("jenisLabel");

        formLayout->setWidget(1, QFormLayout::LabelRole, jenisLabel);

        jenisLineEdit = new QLineEdit(formLayoutWidget);
        jenisLineEdit->setObjectName("jenisLineEdit");

        formLayout->setWidget(1, QFormLayout::FieldRole, jenisLineEdit);

        jumlahPakanLabel = new QLabel(formLayoutWidget);
        jumlahPakanLabel->setObjectName("jumlahPakanLabel");

        formLayout->setWidget(2, QFormLayout::LabelRole, jumlahPakanLabel);

        jumlahPakanLineEdit = new QLineEdit(formLayoutWidget);
        jumlahPakanLineEdit->setObjectName("jumlahPakanLineEdit");

        formLayout->setWidget(2, QFormLayout::FieldRole, jumlahPakanLineEdit);

        tableView = new QTableView(pakan);
        tableView->setObjectName("tableView");
        tableView->setGeometry(QRect(20, 140, 261, 141));
        pushButton = new QPushButton(pakan);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(100, 100, 101, 31));

        retranslateUi(pakan);

        QMetaObject::connectSlotsByName(pakan);
    } // setupUi

    void retranslateUi(QDialog *pakan)
    {
        pakan->setWindowTitle(QCoreApplication::translate("pakan", "Dialog", nullptr));
        namaPakanLabel->setText(QCoreApplication::translate("pakan", "Nama Pakan", nullptr));
        jenisLabel->setText(QCoreApplication::translate("pakan", "Jenis", nullptr));
        jumlahPakanLabel->setText(QCoreApplication::translate("pakan", "Jumlah Pakan", nullptr));
        pushButton->setText(QCoreApplication::translate("pakan", "Simpan", nullptr));
    } // retranslateUi

};

namespace Ui {
    class pakan: public Ui_pakan {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PAKAN_H
