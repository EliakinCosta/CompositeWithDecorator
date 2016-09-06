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
    virtual void addChild(Component *component);
    virtual void aumentarPreco(double percentual);
    virtual  QList<Component *> * findChildren() const;
    static void setDecorator(Decorator *decorator);
    static Decorator *m_decorator;
private:
    QList<Component *> *m_children;
};

#endif // COMPOSITE_H
