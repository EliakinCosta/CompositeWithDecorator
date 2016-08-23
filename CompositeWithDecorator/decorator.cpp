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


