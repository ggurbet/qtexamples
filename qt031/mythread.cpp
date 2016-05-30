#include "mythread.h"

MyThread::MyThread(QObject *parent) :
    QThread(parent)
{

}

void MyThread::run()
{
    for (unsigned int i = 0; i < 10000; i++)
    {
        QMutex mutex;
        mutex.lock();
        if (this->Stop)
            break;
        mutex.unlock();

        emit NumberChanged(i);

        this->msleep(100);
    }
}
