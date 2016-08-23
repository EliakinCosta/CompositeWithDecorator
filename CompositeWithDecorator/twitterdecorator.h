#ifndef TWITTERDECORATOR_H
#define TWITTERDECORATOR_H

#include <decorator.h>

class TwitterDecorator : public Decorator
{
public:
    TwitterDecorator();
    virtual ~TwitterDecorator(){}
    virtual void aumentarPreco(double percentual);
};

#endif // TWITTERDECORATOR_H
