#include <QCoreApplication>
#include "mythread.h"

int main(int argc, char *argv[])
{
	QCoreApplication a(argc, argv);

	MyThread mThread;
	mThread.start();

	mThread.wait();
	qDebug() << "Done!";

	return a.exec();
}
