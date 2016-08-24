#ifndef COMPOSITE_H
#define COMPOSITE_H

#include <component.h>
#include <QList>
#include <decorator.h>

class Composite: public Component
{
public:
    Composite();
    virtual ~Composite();
    virtual void addComponent(Component *component);
    virtual void aumentarPreco(double percentual);
    virtual  QList<Component *> * findChildren() const;
    void setFirstDecorator(Decorator *firstDecorator);
private:
    QList<Component *> *m_children;
    Decorator *m_firstDecorator;
};

#endif // COMPOSITE_H
