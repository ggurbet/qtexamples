#include <QCoreApplication>
#include <QHash>
#include <QDebug>

int main(int argc, char *argv[])
{
	QCoreApplication a(argc, argv);

	QHash<int, QString> employees;

	employees.insert(1, "Bob");
	employees.insert(2, "Chad");
	employees.insert(3, "Mary");

	qDebug() << "3 = " << employees.value(3);

	return a.exec();
}
