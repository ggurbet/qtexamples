#include <QtCore>
#include <QApplication>
#include <QtGui>
#include <QWidget>
#include <QGridLayout>
#include <QLabel>
#include <QLineEdit>
#include <QPushButton>

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);

    QWidget *window = new QWidget;
    window->setWindowTitle("My App");

    QGridLayout *layout = new QGridLayout;

    QLabel *label1 = new QLabel("Name:");
    QLineEdit *txtName1 = new QLineEdit;
    layout->addWidget(label1, 0, 0);
    layout->addWidget(txtName1, 0, 1);

    QLabel *label2 = new QLabel("Name:");
    QLineEdit *txtName2 = new QLineEdit;
    layout->addWidget(label2, 1, 0);
    layout->addWidget(txtName2, 1, 1);

    QPushButton *button = new QPushButton("OK");
    layout->addWidget(button, 2, 0, 1, 2);

    window->setLayout(layout);

    window->show();
    return app.exec();
}
