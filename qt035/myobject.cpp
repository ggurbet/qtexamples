#include "myobject.h"

MyObject::MyObject(QObject *parent) : QObject(parent)
{

}

void MyObject::DoSetup(QThread &cThread)
{
	connect(&cThread, SIGNAL(started()), this, SLOT(DoWork()));
}

void MyObject::DoWork()
{
	for (unsigned int i = 0; i < 100; i++)
	{
		qDebug() << i;
	}
}
