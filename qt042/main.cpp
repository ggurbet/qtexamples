#include <QCoreApplication>
#include <QStringList>
#include <QDebug>

int main(int argc, char *argv[])
{
	QCoreApplication a(argc, argv);

	QStringList List;
	QString Line = "a,b,c,d,e,f,g";

	List = Line.split(",");
	List.replace(1,"batman");

	QString After = List.join(",");
	qDebug() << After;

	List.append("Hello");

	foreach (QString itm, List)
	{
		qDebug() << itm;
	}

	return a.exec();
}
