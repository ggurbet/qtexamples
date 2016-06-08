#include <QCoreApplication>
#include <QVector>
#include <QDebug>

int main(int argc, char *argv[])
{
	QCoreApplication a(argc, argv);

	QVector<QString> vect(5);

	qFill(vect, "Hello world!");
	qFill(vect.begin() + 1, vect.end() - 2, "LOL");

	foreach (QString itm, vect)
	{
		qDebug() << itm;
	}

	return a.exec();
}
