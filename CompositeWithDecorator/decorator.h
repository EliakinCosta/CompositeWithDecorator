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
    Decorator *lastDecorated(Decorator *decorator) const;
protected:
    Decorator();
private:
    Component *m_decorated;
};

#endif // DECORATOR_H
