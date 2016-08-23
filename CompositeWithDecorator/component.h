#ifndef COMPONENT_H
#define COMPONENT_H


class Component
{
public:
    Component();
    virtual ~Component(){}
    virtual void addComponent(Component *component);
    virtual void aumentarPreco(double percentual) = 0;
};

#endif // COMPONENT_H
