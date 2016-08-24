#include "decorator.h"

Decorator::Decorator()
{

}

Decorator::~Decorator()
{
    delete m_decorated;
}


void Decorator::aumentarPreco(double percentual)
{
    m_decorated->aumentarPreco(percentual);
}

void Decorator::setDecorated(Component *component)
{
    m_decorated = component;
}

Component *Decorator::decorated() const
{
    return m_decorated;
}

Decorator *Decorator::lastDecorated() const
{
    Decorator *decorator = dynamic_cast<Decorator *>(this->decorated());
    while(decorator->decorated())
         decorator = dynamic_cast<Decorator *>(decorator->decorated());
    return decorator;
}


