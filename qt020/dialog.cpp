#include "dialog.h"
#include "ui_dialog.h"

Dialog::Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog)
{
    ui->setupUi(this);
//    ui->listWidget->addItem("Hello");

    for (unsigned int i = 0; i < 10; i++)
    {
        ui->listWidget->addItem("Item " + QString::number(i));
    }
}

Dialog::~Dialog()
{
    delete ui;
}

void Dialog::on_pushButton_clicked()
{
    QListWidgetItem *itm = ui->listWidget->currentItem();
    itm->setText("Fuzzy bunny");
    itm->setTextColor(Qt::cyan);
    itm->setBackgroundColor(Qt::black);
}
