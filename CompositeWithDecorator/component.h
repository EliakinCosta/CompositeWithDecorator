#ifndef COMPONENT_H
#define COMPONENT_H

#include <QList>

class Decorator;

class Component
{
public:
    virtual ~Component(){}
    virtual void addChild(Component *component);
    virtual QList<Component *> *findChildren() const;
    virtual void aumentarPreco(double percentual) = 0;
protected:
    Component();
};

#endif // COMPONENT_H
