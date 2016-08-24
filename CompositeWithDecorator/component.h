#ifndef COMPONENT_H
#define COMPONENT_H

#include <QList>

class Component
{
public:
    Component();
    virtual ~Component(){}
    virtual void addComponent(Component *component);
    virtual QList<Component *> *findChildren() const;
    virtual void aumentarPreco(double percentual) = 0;
};

#endif // COMPONENT_H
