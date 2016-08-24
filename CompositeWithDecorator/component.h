#ifndef COMPONENT_H
#define COMPONENT_H

#include <QList>

class Decorator;

class Component
{
public:
    Component();
    virtual ~Component();
    virtual void addComponent(Component *component);
    virtual QList<Component *> *findChildren() const;
    virtual bool hasChildren() const;
    virtual void aumentarPreco(double percentual) = 0;
    virtual Decorator *firstDecorator() const;
    virtual void setFirstDecorator(Decorator *firstDecorator);
private:
    Decorator *m_firstDecorator;
};

#endif // COMPONENT_H
