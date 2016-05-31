#ifndef MYTHREAD_H
#define MYTHREAD_H

#include <QThread>
#include <QDebug>

class MyThread : public QThread
{
	Q_OBJECT

public:
	explicit MyThread(QObject *parent = 0);

protected:
	void run();

signals:

public slots:
};

#endif // MYTHREAD_H
