#include "twitterdecorator.h"
#include <decorator.h>
#include <QDebug>

TwitterDecorator::TwitterDecorator()
{

}

void TwitterDecorator::aumentarPreco(double percentual)
{
    qDebug() << "Mensagem enviada para o twitter";
    Decorator::aumentarPreco(percentual);
}
