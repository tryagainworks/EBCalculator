/********************************************************************************
** Form generated from reading UI file 'dlgglobalcalc.ui'
**
** Created by: Qt User Interface Compiler version 5.4.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DLGGLOBALCALC_H
#define UI_DLGGLOBALCALC_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_dlgGlobalCalc
{
public:
    QHBoxLayout *horizontalLayout;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents_2;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_4;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QLineEdit *txtConsumedUnit;
    QPushButton *cmdCalculate;
    QHBoxLayout *horizontalLayout_4;
    QLabel *lblAmountToPay;
    QPushButton *cmdBack;
    QLabel *lblCalcMethod;

    void setupUi(QDialog *dlgGlobalCalc)
    {
        if (dlgGlobalCalc->objectName().isEmpty())
            dlgGlobalCalc->setObjectName(QStringLiteral("dlgGlobalCalc"));
        dlgGlobalCalc->resize(341, 378);
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(dlgGlobalCalc->sizePolicy().hasHeightForWidth());
        dlgGlobalCalc->setSizePolicy(sizePolicy);
        horizontalLayout = new QHBoxLayout(dlgGlobalCalc);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        scrollArea = new QScrollArea(dlgGlobalCalc);
        scrollArea->setObjectName(QStringLiteral("scrollArea"));
        scrollArea->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        scrollArea->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        scrollArea->setSizeAdjustPolicy(QAbstractScrollArea::AdjustIgnored);
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents_2 = new QWidget();
        scrollAreaWidgetContents_2->setObjectName(QStringLiteral("scrollAreaWidgetContents_2"));
        scrollAreaWidgetContents_2->setGeometry(QRect(0, 0, 321, 401));
        verticalLayout_2 = new QVBoxLayout(scrollAreaWidgetContents_2);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        label_4 = new QLabel(scrollAreaWidgetContents_2);
        label_4->setObjectName(QStringLiteral("label_4"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(label_4->sizePolicy().hasHeightForWidth());
        label_4->setSizePolicy(sizePolicy1);
        label_4->setStyleSheet(QLatin1String("background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0 rgba(255, 178, 102, 255), stop:0.55 rgba(235, 148, 61, 255), stop:0.98 rgba(0, 0, 0, 255), stop:1 rgba(0, 0, 0, 0));\n"
"font: 20pt \"DejaVu Sans\";\n"
"color: rgb(255, 255, 0);"));
        label_4->setAlignment(Qt::AlignCenter);
        label_4->setWordWrap(true);

        verticalLayout_2->addWidget(label_4);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        label = new QLabel(scrollAreaWidgetContents_2);
        label->setObjectName(QStringLiteral("label"));
        QFont font;
        font.setPointSize(20);
        font.setBold(true);
        font.setWeight(75);
        label->setFont(font);

        verticalLayout->addWidget(label);

        txtConsumedUnit = new QLineEdit(scrollAreaWidgetContents_2);
        txtConsumedUnit->setObjectName(QStringLiteral("txtConsumedUnit"));
        txtConsumedUnit->setInputMethodHints(Qt::ImhDigitsOnly);

        verticalLayout->addWidget(txtConsumedUnit);


        verticalLayout_2->addLayout(verticalLayout);

        cmdCalculate = new QPushButton(scrollAreaWidgetContents_2);
        cmdCalculate->setObjectName(QStringLiteral("cmdCalculate"));
        QFont font1;
        font1.setBold(true);
        font1.setWeight(75);
        cmdCalculate->setFont(font1);

        verticalLayout_2->addWidget(cmdCalculate);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        lblAmountToPay = new QLabel(scrollAreaWidgetContents_2);
        lblAmountToPay->setObjectName(QStringLiteral("lblAmountToPay"));
        lblAmountToPay->setFont(font);

        horizontalLayout_4->addWidget(lblAmountToPay);


        verticalLayout_2->addLayout(horizontalLayout_4);

        cmdBack = new QPushButton(scrollAreaWidgetContents_2);
        cmdBack->setObjectName(QStringLiteral("cmdBack"));

        verticalLayout_2->addWidget(cmdBack);

        lblCalcMethod = new QLabel(scrollAreaWidgetContents_2);
        lblCalcMethod->setObjectName(QStringLiteral("lblCalcMethod"));
        sizePolicy.setHeightForWidth(lblCalcMethod->sizePolicy().hasHeightForWidth());
        lblCalcMethod->setSizePolicy(sizePolicy);

        verticalLayout_2->addWidget(lblCalcMethod);

        scrollArea->setWidget(scrollAreaWidgetContents_2);

        horizontalLayout->addWidget(scrollArea);

        scrollArea->raise();
        lblAmountToPay->raise();

        retranslateUi(dlgGlobalCalc);

        QMetaObject::connectSlotsByName(dlgGlobalCalc);
    } // setupUi

    void retranslateUi(QDialog *dlgGlobalCalc)
    {
        dlgGlobalCalc->setWindowTitle(QApplication::translate("dlgGlobalCalc", "Dialog", 0));
        label_4->setText(QApplication::translate("dlgGlobalCalc", "EB Calculator (Domestic)", 0));
        label->setText(QApplication::translate("dlgGlobalCalc", "Enter consumed Unit", 0));
#ifndef QT_NO_STATUSTIP
        txtConsumedUnit->setStatusTip(QString());
#endif // QT_NO_STATUSTIP
#ifndef QT_NO_WHATSTHIS
        txtConsumedUnit->setWhatsThis(QString());
#endif // QT_NO_WHATSTHIS
#ifndef QT_NO_ACCESSIBILITY
        txtConsumedUnit->setAccessibleDescription(QString());
#endif // QT_NO_ACCESSIBILITY
        txtConsumedUnit->setInputMask(QString());
        txtConsumedUnit->setText(QApplication::translate("dlgGlobalCalc", "350", 0));
        txtConsumedUnit->setPlaceholderText(QString());
        cmdCalculate->setText(QApplication::translate("dlgGlobalCalc", "Calculate", 0));
        lblAmountToPay->setText(QApplication::translate("dlgGlobalCalc", "Amout to Pay : ", 0));
        cmdBack->setText(QApplication::translate("dlgGlobalCalc", "Back", 0));
        lblCalcMethod->setText(QApplication::translate("dlgGlobalCalc", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'DejaVu Sans'; font-size:16pt; font-weight:600;\">Calculation Method :</span></p>\n"
"<table border=\"1\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px;\" cellspacing=\"2\" cellpadding=\"0\">\n"
"<tr>\n"
"<td>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'DejaVu Sans'; font-size:16pt; color:#ffaa00;\">This</span><span style=\" font-family:'DejaVu Sans'; font-size:16pt;\"> is line 1</span><"
                        "/p></td></tr>\n"
"<tr>\n"
"<td>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'DejaVu Sans'; font-size:16pt;\">This is line 2</span></p></td></tr>\n"
"<tr>\n"
"<td>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'DejaVu Sans'; font-size:16pt;\">This is line 3</span></p></td></tr>\n"
"<tr>\n"
"<td>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'DejaVu Sans'; font-size:16pt;\">This is line 4</span></p></td></tr></table></body></html>", 0));
    } // retranslateUi

};

namespace Ui {
    class dlgGlobalCalc: public Ui_dlgGlobalCalc {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DLGGLOBALCALC_H
