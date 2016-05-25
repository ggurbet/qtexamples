#include "dialog.h"
#include "ui_dialog.h"
#include <QMessageBox>

Dialog::Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog)
{
    ui->setupUi(this);

    ui->comboBox->addItem("Hello");
    ui->comboBox->addItem("World");

    for (unsigned int i = 0; i < 10; i++)
    {
        ui->comboBox->addItem("Item " + QString::number(i + 1));
    }
}

Dialog::~Dialog()
{
    delete ui;
}

void Dialog::on_pushButton_clicked()
{
    QMessageBox::information(this, "Title", ui->comboBox->currentText());
}
