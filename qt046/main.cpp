#include <QCoreApplication>
#include <QList>
#include <QDebug>

int main(int argc, char *argv[])
{
	QCoreApplication a(argc, argv);

	QList<int> lst;
	lst << 4 << 8 << 15 << 16 << 23 << 42;

	QList<int>::const_iterator iter = qFind(lst.begin(), lst.end(), 15);

	if (iter != lst.end())
	{
		qDebug() << "Found " << *iter;
	}
	else
	{
		qDebug() << "Not found";
	}

	return a.exec();
}
