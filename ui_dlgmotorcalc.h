/********************************************************************************
** Form generated from reading UI file 'dlgmotorcalc.ui'
**
** Created by: Qt User Interface Compiler version 5.4.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DLGMOTORCALC_H
#define UI_DLGMOTORCALC_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_dlgMotorCalc
{
public:
    QGridLayout *gridLayout_3;
    QScrollArea *scrollAreaNew;
    QWidget *scrollAreaWidgetContents;
    QGridLayout *gridLayout_8;
    QLabel *lblCalcMethod;
    QPushButton *cmdBack;
    QVBoxLayout *verticalLayout_3;
    QGridLayout *gridLayout_2;
    QLineEdit *txt_HW_HoursConsumed;
    QLineEdit *txt_HW_MinutesConsumed;
    QLabel *label_9;
    QLabel *label_2;
    QGridLayout *gridLayout_5;
    QLineEdit *txt_HW_DaysConsumed;
    QLabel *label_6;
    QVBoxLayout *verticalLayout_4;
    QLineEdit *txtConsumedUnit;
    QLabel *label;
    QLabel *label_4;
    QPushButton *cmdCalculate;
    QLabel *label_5;
    QLabel *label_7;
    QVBoxLayout *verticalLayout_2;
    QGridLayout *gridLayout;
    QLineEdit *txt_SW_MinutesConsumed;
    QLineEdit *txt_SW_HoursConsumed;
    QLabel *label_10;
    QLabel *label_3;
    QVBoxLayout *verticalLayout;
    QLabel *label_8;
    QLineEdit *txt_SW_DaysConsumed;
    QLabel *lblAmountToPay;

    void setupUi(QDialog *dlgMotorCalc)
    {
        if (dlgMotorCalc->objectName().isEmpty())
            dlgMotorCalc->setObjectName(QStringLiteral("dlgMotorCalc"));
        dlgMotorCalc->resize(362, 649);
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(dlgMotorCalc->sizePolicy().hasHeightForWidth());
        dlgMotorCalc->setSizePolicy(sizePolicy);
        gridLayout_3 = new QGridLayout(dlgMotorCalc);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        scrollAreaNew = new QScrollArea(dlgMotorCalc);
        scrollAreaNew->setObjectName(QStringLiteral("scrollAreaNew"));
        scrollAreaNew->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        scrollAreaNew->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        scrollAreaNew->setSizeAdjustPolicy(QAbstractScrollArea::AdjustIgnored);
        scrollAreaNew->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QStringLiteral("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 342, 852));
        gridLayout_8 = new QGridLayout(scrollAreaWidgetContents);
        gridLayout_8->setObjectName(QStringLiteral("gridLayout_8"));
        lblCalcMethod = new QLabel(scrollAreaWidgetContents);
        lblCalcMethod->setObjectName(QStringLiteral("lblCalcMethod"));
        lblCalcMethod->setTextFormat(Qt::AutoText);
        lblCalcMethod->setWordWrap(true);

        gridLayout_8->addWidget(lblCalcMethod, 11, 0, 1, 1);

        cmdBack = new QPushButton(scrollAreaWidgetContents);
        cmdBack->setObjectName(QStringLiteral("cmdBack"));

        gridLayout_8->addWidget(cmdBack, 9, 0, 1, 1);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        txt_HW_HoursConsumed = new QLineEdit(scrollAreaWidgetContents);
        txt_HW_HoursConsumed->setObjectName(QStringLiteral("txt_HW_HoursConsumed"));
        txt_HW_HoursConsumed->setInputMethodHints(Qt::ImhDigitsOnly);

        gridLayout_2->addWidget(txt_HW_HoursConsumed, 4, 0, 1, 1);

        txt_HW_MinutesConsumed = new QLineEdit(scrollAreaWidgetContents);
        txt_HW_MinutesConsumed->setObjectName(QStringLiteral("txt_HW_MinutesConsumed"));
        txt_HW_MinutesConsumed->setInputMethodHints(Qt::ImhDigitsOnly);

        gridLayout_2->addWidget(txt_HW_MinutesConsumed, 1, 0, 1, 1);

        label_9 = new QLabel(scrollAreaWidgetContents);
        label_9->setObjectName(QStringLiteral("label_9"));
        QFont font;
        font.setPointSize(20);
        font.setBold(true);
        font.setWeight(75);
        label_9->setFont(font);

        gridLayout_2->addWidget(label_9, 0, 0, 1, 1);

        label_2 = new QLabel(scrollAreaWidgetContents);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setFont(font);

        gridLayout_2->addWidget(label_2, 2, 0, 1, 1);


        verticalLayout_3->addLayout(gridLayout_2);

        gridLayout_5 = new QGridLayout();
        gridLayout_5->setObjectName(QStringLiteral("gridLayout_5"));
        txt_HW_DaysConsumed = new QLineEdit(scrollAreaWidgetContents);
        txt_HW_DaysConsumed->setObjectName(QStringLiteral("txt_HW_DaysConsumed"));
        txt_HW_DaysConsumed->setInputMethodHints(Qt::ImhDigitsOnly);

        gridLayout_5->addWidget(txt_HW_DaysConsumed, 1, 0, 1, 1);

        label_6 = new QLabel(scrollAreaWidgetContents);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setFont(font);

        gridLayout_5->addWidget(label_6, 0, 0, 1, 1);


        verticalLayout_3->addLayout(gridLayout_5);


        gridLayout_8->addLayout(verticalLayout_3, 3, 0, 1, 1);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        txtConsumedUnit = new QLineEdit(scrollAreaWidgetContents);
        txtConsumedUnit->setObjectName(QStringLiteral("txtConsumedUnit"));
        txtConsumedUnit->setInputMethodHints(Qt::ImhDigitsOnly);

        verticalLayout_4->addWidget(txtConsumedUnit);

        label = new QLabel(scrollAreaWidgetContents);
        label->setObjectName(QStringLiteral("label"));

        verticalLayout_4->addWidget(label);


        gridLayout_8->addLayout(verticalLayout_4, 1, 0, 1, 1);

        label_4 = new QLabel(scrollAreaWidgetContents);
        label_4->setObjectName(QStringLiteral("label_4"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(label_4->sizePolicy().hasHeightForWidth());
        label_4->setSizePolicy(sizePolicy1);
        QFont font1;
        font1.setFamily(QStringLiteral("DejaVu Sans"));
        font1.setPointSize(20);
        font1.setBold(false);
        font1.setItalic(false);
        font1.setWeight(50);
        label_4->setFont(font1);
        label_4->setStyleSheet(QLatin1String("background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0 rgba(255, 178, 102, 255), stop:0.55 rgba(235, 148, 61, 255), stop:0.98 rgba(0, 0, 0, 255), stop:1 rgba(0, 0, 0, 0));\n"
"font: 20pt \"DejaVu Sans\";\n"
"color: rgb(255, 255, 0);"));
        label_4->setAlignment(Qt::AlignCenter);
        label_4->setWordWrap(true);

        gridLayout_8->addWidget(label_4, 0, 0, 1, 1);

        cmdCalculate = new QPushButton(scrollAreaWidgetContents);
        cmdCalculate->setObjectName(QStringLiteral("cmdCalculate"));
        sizePolicy.setHeightForWidth(cmdCalculate->sizePolicy().hasHeightForWidth());
        cmdCalculate->setSizePolicy(sizePolicy);
        QFont font2;
        font2.setBold(true);
        font2.setWeight(75);
        cmdCalculate->setFont(font2);

        gridLayout_8->addWidget(cmdCalculate, 6, 0, 1, 1);

        label_5 = new QLabel(scrollAreaWidgetContents);
        label_5->setObjectName(QStringLiteral("label_5"));
        QFont font3;
        font3.setBold(true);
        font3.setItalic(true);
        font3.setWeight(75);
        label_5->setFont(font3);
        label_5->setAlignment(Qt::AlignCenter);

        gridLayout_8->addWidget(label_5, 2, 0, 1, 1);

        label_7 = new QLabel(scrollAreaWidgetContents);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setFont(font3);
        label_7->setAlignment(Qt::AlignCenter);

        gridLayout_8->addWidget(label_7, 4, 0, 1, 1);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setSizeConstraint(QLayout::SetDefaultConstraint);
        txt_SW_MinutesConsumed = new QLineEdit(scrollAreaWidgetContents);
        txt_SW_MinutesConsumed->setObjectName(QStringLiteral("txt_SW_MinutesConsumed"));
        txt_SW_MinutesConsumed->setInputMethodHints(Qt::ImhDigitsOnly);

        gridLayout->addWidget(txt_SW_MinutesConsumed, 1, 0, 1, 1);

        txt_SW_HoursConsumed = new QLineEdit(scrollAreaWidgetContents);
        txt_SW_HoursConsumed->setObjectName(QStringLiteral("txt_SW_HoursConsumed"));
        txt_SW_HoursConsumed->setInputMethodHints(Qt::ImhDigitsOnly);

        gridLayout->addWidget(txt_SW_HoursConsumed, 4, 0, 1, 1);

        label_10 = new QLabel(scrollAreaWidgetContents);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setFont(font);

        gridLayout->addWidget(label_10, 0, 0, 1, 1);

        label_3 = new QLabel(scrollAreaWidgetContents);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setFont(font);

        gridLayout->addWidget(label_3, 3, 0, 1, 1);


        verticalLayout_2->addLayout(gridLayout);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        label_8 = new QLabel(scrollAreaWidgetContents);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setFont(font);

        verticalLayout->addWidget(label_8);

        txt_SW_DaysConsumed = new QLineEdit(scrollAreaWidgetContents);
        txt_SW_DaysConsumed->setObjectName(QStringLiteral("txt_SW_DaysConsumed"));
        txt_SW_DaysConsumed->setInputMethodHints(Qt::ImhDigitsOnly);

        verticalLayout->addWidget(txt_SW_DaysConsumed);


        verticalLayout_2->addLayout(verticalLayout);


        gridLayout_8->addLayout(verticalLayout_2, 5, 0, 1, 1);

        lblAmountToPay = new QLabel(scrollAreaWidgetContents);
        lblAmountToPay->setObjectName(QStringLiteral("lblAmountToPay"));
        lblAmountToPay->setFont(font);

        gridLayout_8->addWidget(lblAmountToPay, 8, 0, 1, 1);

        scrollAreaNew->setWidget(scrollAreaWidgetContents);

        gridLayout_3->addWidget(scrollAreaNew, 0, 1, 1, 1);


        retranslateUi(dlgMotorCalc);

        QMetaObject::connectSlotsByName(dlgMotorCalc);
    } // setupUi

    void retranslateUi(QDialog *dlgMotorCalc)
    {
        dlgMotorCalc->setWindowTitle(QApplication::translate("dlgMotorCalc", "Dialog", 0));
        lblCalcMethod->setText(QApplication::translate("dlgMotorCalc", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
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
        cmdBack->setText(QApplication::translate("dlgMotorCalc", "Back", 0));
        txt_HW_HoursConsumed->setText(QApplication::translate("dlgMotorCalc", "1", 0));
        txt_HW_MinutesConsumed->setText(QApplication::translate("dlgMotorCalc", "30", 0));
        label_9->setText(QApplication::translate("dlgMotorCalc", "Usage Minutes Per Day", 0));
        label_2->setText(QApplication::translate("dlgMotorCalc", "Usage Hour Per Day", 0));
        txt_HW_DaysConsumed->setText(QApplication::translate("dlgMotorCalc", "25", 0));
        label_6->setText(QApplication::translate("dlgMotorCalc", "Total Days Used", 0));
        label->setText(QApplication::translate("dlgMotorCalc", "Enter Total Unit", 0));
        label_4->setText(QApplication::translate("dlgMotorCalc", "Water Motor Current Amount Calculator", 0));
        cmdCalculate->setText(QApplication::translate("dlgMotorCalc", "Calculate", 0));
        label_5->setText(QApplication::translate("dlgMotorCalc", "Hard Water Motor Running Usage Details", 0));
        label_7->setText(QApplication::translate("dlgMotorCalc", "Soft Water Motor Running Usage Details", 0));
        txt_SW_MinutesConsumed->setText(QApplication::translate("dlgMotorCalc", "15", 0));
        txt_SW_HoursConsumed->setText(QApplication::translate("dlgMotorCalc", "1", 0));
        label_10->setText(QApplication::translate("dlgMotorCalc", "Usage Minutes Per Day", 0));
        label_3->setText(QApplication::translate("dlgMotorCalc", "Usage Hour Per Day", 0));
        label_8->setText(QApplication::translate("dlgMotorCalc", "Total Days Used", 0));
        txt_SW_DaysConsumed->setText(QApplication::translate("dlgMotorCalc", "5", 0));
        lblAmountToPay->setText(QApplication::translate("dlgMotorCalc", "Amout to Share : ", 0));
    } // retranslateUi

};

namespace Ui {
    class dlgMotorCalc: public Ui_dlgMotorCalc {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DLGMOTORCALC_H
