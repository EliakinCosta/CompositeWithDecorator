#ifndef QUEIJO_H
#define QUEIJO_H

#include "component.h"

class Queijo : public Component
{
public:
    Queijo(double preco);
    virtual ~Queijo(){}
    virtual void aumentarPreco(double percentual);
private:
    double m_preco;
};

#endif // QUEIJO_H
