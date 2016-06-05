#include <QCoreApplication>
#include <QMap>
#include <QDebug>

int main(int argc, char *argv[])
{
	QCoreApplication a(argc, argv);

	QMap<int, QString> employees;

	employees.insert(1, "Bob");
	employees.insert(2, "Chad");
	employees.insert(3, "Mary");

	foreach (int i, employees.keys())
	{
		qDebug() << employees[i];
	}

	QMapIterator<int, QString> iter(employees);

	while (iter.hasNext())
	{
		iter.next();
		qDebug() << iter.key() << " = " << iter.value();
	}

	return a.exec();
}
