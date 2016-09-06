#include "queijo.h"
#include <QDebug>

Queijo::Queijo(double preco):m_preco(preco)
{

}


void Queijo::aumentarPreco(double percentual)
{
    this->m_preco += this->m_preco * percentual;
    qDebug() << "O Preco do queijo agora e :" << m_preco;
}
