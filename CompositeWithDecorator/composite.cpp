#include "composite.h"
#include <component.h>
#include <QList>

Composite::Composite():m_children(new QList<Component *>())
{

}

Composite::~Composite()
{
    delete m_children;
    delete m_firstDecorator;
}

void Composite::addComponent(Component *component)
{
    m_children->append(component);
}

QList<Component *> *Composite::findChildren() const
{
    return m_children;
}

void Composite::aumentarPreco(double percentual)
{

    foreach (Component *component, *m_children) {
        if(component->findChildren()->count())
        {
            component->aumentarPreco(percentual);
        }
        else
        {
            m_firstDecorator->lastDecorated()->setDecorated(component);
            m_firstDecorator->aumentarPreco(percentual);
        }
    }
}

void Composite::setFirstDecorator(Decorator *firstDecorator)
{
    m_firstDecorator = firstDecorator;
}
