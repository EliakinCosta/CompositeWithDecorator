#include "composite.h"
#include <component.h>
#include <QList>

Composite::Composite():m_children(new QList<Component *>())
{

}

Composite::~Composite()
{
    delete m_children;
    delete m_lastDecorator;
}

void Composite::addComponent(Component *component)
{
    m_children->append(component);
}

void Composite::aumentarPreco(double percentual)
{
    Component *chainDecorators = m_lastDecorator->decorated();
    foreach (Component *component, *m_children) {
        component->aumentarPreco(percentual);
    }
}
