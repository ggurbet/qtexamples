#include <QCoreApplication>
#include <QFile>
#include <QString>
#include <QDebug>
#include <QTextStream>

void Write(QString Filename)
{
    QFile mFile(Filename);
    if (!mFile.open(QFile::WriteOnly | QFile::Text))
    {
        qDebug() << "Cannot open file for writing";
        return;
    }

    QTextStream out(&mFile);
    out << "Hello world!";
    mFile.flush();
    mFile.close();
}

void Read(QString Filename)
{
    QFile mFile(Filename);
    if (!mFile.open(QFile::ReadOnly | QFile::Text))
    {
        qDebug() << "Cannot open file for reading";
        return;
    }

    QTextStream in(&mFile);
    QString mText = in.readAll();

    qDebug() << mText;

    mFile.close();
}

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    Read(":/MyFiles/qt013.pro");

    return a.exec();
}
