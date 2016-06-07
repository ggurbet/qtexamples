#include <QCoreApplication>
#include <QStringList>
#include <QVector>
#include <QDebug>

int main(int argc, char *argv[])
{
	QCoreApplication a(argc, argv);

	QStringList List;
	List << "a" << "b" << "c";

	QVector<QString> vect(3);

	qCopy(List.begin() + 1, List.end(), vect.begin() + 1);

	foreach (QString itm, vect)
	{
		qDebug() << itm;
	}

	return a.exec();
}
