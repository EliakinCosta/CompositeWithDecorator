#ifndef LOGDECORATOR_H
#define LOGDECORATOR_H

#include <decorator.h>

class Component;

class LogDecorator : public Decorator
{
public:
    LogDecorator(Component *decorated = 0);
    virtual ~LogDecorator(){}
    virtual void aumentarPreco(double percentual);
};

#endif // LOGDECORATOR_H
