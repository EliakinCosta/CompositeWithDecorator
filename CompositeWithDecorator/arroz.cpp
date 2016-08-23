#include "arroz.h"

Arroz::Arroz(double preco):m_preco(preco)
{

}


void Arroz::aumentarPreco(double percentual)
{
    m_preco += m_preco * percentual;
}
