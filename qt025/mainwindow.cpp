#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    StatLabel = new QLabel(this);
    StatProgress = new QProgressBar(this);

    ui->statusBar->addPermanentWidget(StatLabel);
    ui->statusBar->addPermanentWidget(StatProgress, 1);
    StatProgress->setTextVisible(false);
    StatLabel->setText("hello");
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_actionDo_Something_triggered()
{
    ui->statusBar->showMessage("Hello");
    StatProgress->setValue(45);
}
