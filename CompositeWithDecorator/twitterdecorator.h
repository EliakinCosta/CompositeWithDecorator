#ifndef TWITTERDECORATOR_H
#define TWITTERDECORATOR_H

#include <decorator.h>

class Component;

class TwitterDecorator : public Decorator
{
public:
    TwitterDecorator(Component *decorated = 0);
    virtual ~TwitterDecorator(){}
    virtual void aumentarPreco(double percentual);
};

#endif // TWITTERDECORATOR_H
