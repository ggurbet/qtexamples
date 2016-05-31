#include <QCoreApplication>
#include <QList>
#include <QDebug>

int main(int argc, char *argv[])
{
	QCoreApplication a(argc, argv);

	QList<int> list;

	for (unsigned int i = 0; i < 10; i++)
	{
		list.append(i);
	}

	list.removeOne(5);

	foreach (int mNumber, list)
	{
		qDebug() << mNumber;
	}

	return a.exec();
}
