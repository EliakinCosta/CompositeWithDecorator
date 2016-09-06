#include "component.h"
#include <QtGlobal>

Component::Component()
{

}

void Component::addChild(Component *component)
{
    Q_ASSERT(false);
}


QList<Component *> *Component::findChildren() const
{
    Q_ASSERT(false);
}
