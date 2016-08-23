#ifndef LOGDECORATOR_H
#define LOGDECORATOR_H

#include <decorator.h>

class LogDecorator : public Decorator
{
public:
    LogDecorator();
    virtual ~LogDecorator(){}
    virtual void aumentarPreco(double percentual);
};

#endif // LOGDECORATOR_H
