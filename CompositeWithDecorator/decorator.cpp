#include "decorator.h"

Decorator::Decorator():m_decorated(0)
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
    if(m_decorated)
        return m_decorated;
    return 0;
}

Decorator *Decorator::lastDecorated(Decorator *decorator) const
{
    Decorator *decorator_temp = decorator;
    while(decorator_temp->decorated()!=0)
         decorator_temp = dynamic_cast<Decorator *>(decorator->decorated());
    return decorator_temp;
}


