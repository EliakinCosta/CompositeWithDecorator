#include "logdecorator.h"
#include <decorator.h>
#include <QDebug>

LogDecorator::LogDecorator(Component *decorated):Decorator(decorated)
{

}

void LogDecorator::aumentarPreco(double percentual)
{
    Decorator::aumentarPreco(percentual);
    qDebug() << "Log gerado";
}
