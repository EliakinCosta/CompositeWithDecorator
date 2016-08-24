#include "component.h"
#include <QtGlobal>
#include <QList>
#include <decorator.h>

Component::Component()
{

}

Component::~Component()
{
    delete m_firstDecorator;
}

void Component::addComponent(Component *component)
{
    Q_ASSERT(false);
}


QList<Component *> *Component::findChildren() const
{
    Q_ASSERT(false);
}

bool Component::hasChildren() const
{
   return false;
}

Decorator *Component::firstDecorator() const
{
    return m_firstDecorator;
}

void Component::setFirstDecorator(Decorator *firstDecorator)
{
    m_firstDecorator = firstDecorator;
}
