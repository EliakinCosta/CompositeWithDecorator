#ifndef ARROZ_H
#define ARROZ_H

#include <component.h>

class Arroz : public Component
{
public:
    Arroz(double preco);
    virtual ~Arroz(){}
    virtual void aumentarPreco(double percentual);
private:
    double m_preco;
};

#endif // ARROZ_H
