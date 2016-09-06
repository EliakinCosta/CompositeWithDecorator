#include "decorator.h"
#include "composite.h"
#include <QtGlobal>

Decorator::Decorator(Component *component)
{
    this->setDecorated(component);
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
    if(dynamic_cast<Composite *>(component))
        Q_ASSERT(false);
    m_decorated = component;
}

Component *Decorator::decorated() const
{
   return m_decorated;
}


