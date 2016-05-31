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

	QMutableListIterator<int> iter(list);
	while (iter.hasNext())
	{
		int i = iter.next();
		if (i == 5)
		{
			iter.remove();
		}
	}

	iter.toFront();
	while (iter.hasNext())
	{
		qDebug() << iter.next();
	}

	return a.exec();
}
