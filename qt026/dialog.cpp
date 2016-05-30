#include "dialog.h"
#include "ui_dialog.h"
#include <QMessageBox>

Dialog::Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog)
{
    ui->setupUi(this);
}

Dialog::~Dialog()
{
    delete ui;
}

void Dialog::on_pushButton_clicked()
{
    // info
    QMessageBox::information(this, "Information", "It works!");
}

void Dialog::on_pushButton_2_clicked()
{
    // question
    QMessageBox::StandardButton reply;
    reply = QMessageBox::question(this, "Question", "Do you like cats?",
                                  QMessageBox::Yes | QMessageBox::No);
    if (reply == QMessageBox::Yes)
        QMessageBox::information(this, "Information", "You like cats!");
    else
        QMessageBox::information(this, "Information", "You don't like cats!");
}

void Dialog::on_pushButton_3_clicked()
{
    // warning
    QMessageBox::warning(this, "Warning", "Be warned");
}

void Dialog::on_pushButton_4_clicked()
{
    // custom
    QMessageBox::StandardButton reply;
    reply = QMessageBox::question(this, "Custom", "My text here",
                                  QMessageBox::Yes | QMessageBox::YesToAll | QMessageBox::No | QMessageBox::NoToAll);
    if (reply == QMessageBox::Yes)
        QMessageBox::information(this, "Information", "You said yes!");
    else if (reply == QMessageBox::YesToAll)
        QMessageBox::information(this, "Information", "You said yes to all!");
    if (reply == QMessageBox::No)
        QMessageBox::information(this, "Information", "You said no!");
    else if (reply == QMessageBox::NoToAll)
        QMessageBox::information(this, "Information", "You said no to all!");
}
