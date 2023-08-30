#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

#include "mydb.h"
#include "book.h"
#include "cancel.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    void updateUI();


private slots:
    void on_btnBook_clicked();

    void on_btnCancel_clicked();

    void on_btnReset_clicked();

private:
    Ui::MainWindow *ui;
    book *ptrBook;
    Cancel *ptrCancel;

};
#endif // MAINWINDOW_H
