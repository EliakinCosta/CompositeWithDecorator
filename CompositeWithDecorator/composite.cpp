#include "composite.h"
#include <component.h>
#include <decorator.h>
#include <QList>
#include <QtGlobal>

Decorator *Composite::m_decorator = 0;

Composite::Composite():m_children(new QList<Component *>())
{

}

Composite::~Composite()
{
    delete m_children;
}

void Composite::addChild(Component *component)
{
    if(dynamic_cast<Decorator*>(component))
        Q_ASSERT(false);
    m_children->append(component);
}

QList<Component *> *Composite::findChildren() const
{
    return m_children;
}

void Composite::setDecorator(Decorator *decorator)
{
    m_decorator = decorator;
}

void Composite::aumentarPreco(double percentual)
{
    foreach (Component *component, *m_children)
    {
        if(dynamic_cast<Composite *>(component))
        {
            component->aumentarPreco(percentual);
        }
        else
        {
            Decorator *first_decorator = m_decorator;
            while(first_decorator->decorated() && dynamic_cast<Decorator *>(first_decorator->decorated()))
                 first_decorator = dynamic_cast<Decorator *>(first_decorator->decorated());
            first_decorator->setDecorated(component);
            m_decorator->aumentarPreco(percentual);
        }
    }
}
