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

	QListIterator<int> iter(list);

	iter.toBack();
	while (iter.hasPrevious())
	{
		qDebug() << iter.previous();
		if (iter.hasPrevious())
		{
			qDebug() << "Next:" << iter.peekPrevious();
		}
	}

	return a.exec();
}
