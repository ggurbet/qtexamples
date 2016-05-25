#include <QCoreApplication>
#include <QtDebug>
#include <QDir>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    qDebug() << "Directory exists?";
    QDir eDir1(".");
    qDebug() << eDir1.exists();
    QDir eDir2("garbage");
    qDebug() << eDir2.exists();

    qDebug() << "Show drives";
    QDir mDir;
    foreach (QFileInfo mItm, mDir.drives())
    {
        qDebug() << mItm.absoluteFilePath();
    }

    qDebug() << "Crete directory";
    QDir mkDir;
    QString mkPath = "gokhan";
    if (!mkDir.exists(mkPath))
    {
        mkDir.mkpath(mkPath);
        qDebug() << "Created";
    }
    else
    {
        qDebug() << "Already exists";
    }

    qDebug() << "Directory contents";
    QDir fDir("gokhan");
    foreach (QFileInfo fItm, fDir.entryInfoList())
    {
        qDebug() << fItm.absoluteFilePath();
    }


    return a.exec();
}
