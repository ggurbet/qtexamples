#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "mydialog.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    setCentralWidget(ui->plainTextEdit);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_actionNew_Window_triggered()
{
    // Nonmodal dialog
    mDialog = new MyDialog(this);
    mDialog->show();

    // Modal dialog
//    MyDialog mDialog;
//    mDialog.setModal(true);
//    mDialog.exec();
//    mDialog.show();
}
