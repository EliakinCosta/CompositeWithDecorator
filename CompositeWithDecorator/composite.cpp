#include "composite.h"
#include <component.h>
#include <QList>

Composite::Composite():m_children(new QList<Component *>())
{

}

Composite::~Composite()
{
    delete m_children;
}

void Composite::addComponent(Component *component)
{
    m_children->append(component);
}

QList<Component *> *Composite::findChildren() const
{
    return m_children;
}

bool Composite::hasChildren() const
{
    return true;
}

void Composite::aumentarPreco(double percentual)
{
    foreach (Component *component, *m_children)
    {
        if(component->hasChildren())
        {
            component->aumentarPreco(percentual);
        }
        else
        {
            Component::firstDecorator()->lastDecorated(Component::firstDecorator())->setDecorated(component);
            Component::firstDecorator()->aumentarPreco(percentual);
        }
    }
}
