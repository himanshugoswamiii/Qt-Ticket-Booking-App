#ifndef CANCEL_H
#define CANCEL_H

#include <QDialog>
#include "mydb.h"


namespace Ui {
class Cancel;
}

class Cancel : public QDialog
{
    Q_OBJECT

public:
    explicit Cancel(QWidget *parent = nullptr);
    ~Cancel();
    void updateUI();

private:
    Ui::Cancel *ui;

private slots:
    void on_btnCancel_clicked();
signals:
    void mysignal1();


};

#endif // CANCEL_H
