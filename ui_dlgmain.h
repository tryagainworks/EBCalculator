/********************************************************************************
** Form generated from reading UI file 'dlgmain.ui'
**
** Created by: Qt User Interface Compiler version 5.4.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DLGMAIN_H
#define UI_DLGMAIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_dlgMain
{
public:
    QGridLayout *gridLayout;
    QPushButton *cmdSettings;
    QPushButton *cmdExit;
    QPushButton *cmdWaterMotor;
    QPushButton *cmdGlobalCalc;
    QLabel *label_4;
    QLabel *label;

    void setupUi(QDialog *dlgMain)
    {
        if (dlgMain->objectName().isEmpty())
            dlgMain->setObjectName(QStringLiteral("dlgMain"));
        dlgMain->resize(333, 404);
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(dlgMain->sizePolicy().hasHeightForWidth());
        dlgMain->setSizePolicy(sizePolicy);
        gridLayout = new QGridLayout(dlgMain);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        cmdSettings = new QPushButton(dlgMain);
        cmdSettings->setObjectName(QStringLiteral("cmdSettings"));
        sizePolicy.setHeightForWidth(cmdSettings->sizePolicy().hasHeightForWidth());
        cmdSettings->setSizePolicy(sizePolicy);

        gridLayout->addWidget(cmdSettings, 6, 0, 1, 1);

        cmdExit = new QPushButton(dlgMain);
        cmdExit->setObjectName(QStringLiteral("cmdExit"));
        sizePolicy.setHeightForWidth(cmdExit->sizePolicy().hasHeightForWidth());
        cmdExit->setSizePolicy(sizePolicy);

        gridLayout->addWidget(cmdExit, 7, 0, 1, 1);

        cmdWaterMotor = new QPushButton(dlgMain);
        cmdWaterMotor->setObjectName(QStringLiteral("cmdWaterMotor"));
        sizePolicy.setHeightForWidth(cmdWaterMotor->sizePolicy().hasHeightForWidth());
        cmdWaterMotor->setSizePolicy(sizePolicy);

        gridLayout->addWidget(cmdWaterMotor, 5, 0, 1, 1);

        cmdGlobalCalc = new QPushButton(dlgMain);
        cmdGlobalCalc->setObjectName(QStringLiteral("cmdGlobalCalc"));
        sizePolicy.setHeightForWidth(cmdGlobalCalc->sizePolicy().hasHeightForWidth());
        cmdGlobalCalc->setSizePolicy(sizePolicy);

        gridLayout->addWidget(cmdGlobalCalc, 4, 0, 1, 1);

        label_4 = new QLabel(dlgMain);
        label_4->setObjectName(QStringLiteral("label_4"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(label_4->sizePolicy().hasHeightForWidth());
        label_4->setSizePolicy(sizePolicy1);
        label_4->setStyleSheet(QLatin1String("background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0 rgba(255, 178, 102, 255), stop:0.55 rgba(235, 148, 61, 255), stop:0.98 rgba(0, 0, 0, 255), stop:1 rgba(0, 0, 0, 0));\n"
"font: 20pt \"DejaVu Sans\";\n"
"color: rgb(255, 255, 0);"));
        label_4->setAlignment(Qt::AlignCenter);
        label_4->setWordWrap(true);

        gridLayout->addWidget(label_4, 0, 0, 1, 1);

        label = new QLabel(dlgMain);
        label->setObjectName(QStringLiteral("label"));
        label->setStyleSheet(QStringLiteral("background-color: rgb(0, 170, 255);"));
        label->setPixmap(QPixmap(QString::fromUtf8(":/new/prefix1/1443178277_06_calculator.png")));
        label->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label, 2, 0, 2, 1);


        retranslateUi(dlgMain);

        QMetaObject::connectSlotsByName(dlgMain);
    } // setupUi

    void retranslateUi(QDialog *dlgMain)
    {
        dlgMain->setWindowTitle(QApplication::translate("dlgMain", "dlgMain", 0));
        cmdSettings->setText(QApplication::translate("dlgMain", "Settings", 0));
        cmdExit->setText(QApplication::translate("dlgMain", "Exit", 0));
        cmdWaterMotor->setText(QApplication::translate("dlgMain", "Motor Amount Sharing", 0));
        cmdGlobalCalc->setText(QApplication::translate("dlgMain", "Bill Amount For Unit", 0));
        label_4->setText(QApplication::translate("dlgMain", "Welcome to Electricity Bill Calculator", 0));
        label->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class dlgMain: public Ui_dlgMain {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DLGMAIN_H
