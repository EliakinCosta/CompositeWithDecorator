#ifndef DECORATOR_H
#define DECORATOR_H

#include <component.h>

class Decorator: public Component
{
public:
    virtual ~Decorator();
    virtual void aumentarPreco(double percentual);
    void setDecorated(Component *component);
    Component *decorated() const;
protected:
    Decorator(Component *decorated=0);
private:
    Component *m_decorated;
};

#endif // DECORATOR_H
