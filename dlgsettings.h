#ifndef DLGSETTINGS_H
#define DLGSETTINGS_H

#include <QDialog>
#include "clsactivityaccess.h"
#include "ui_dlgsettings.h"


namespace Ui {
class dlgSettings;
}

class dlgSettings : public QDialog
{
    Q_OBJECT

public:
    explicit dlgSettings(QWidget *parent = 0);
    ~dlgSettings();
    int fndata(){
        return 0;
    }

private slots:
    void on_dlgSettings_rejected();

    void on_cmdBack_clicked();

private:
    Ui::dlgSettings *ui;

};

#endif // DLGSETTINGS_H
