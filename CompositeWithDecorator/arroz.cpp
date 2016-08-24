#include "arroz.h"
#include <QDebug>

Arroz::Arroz(double preco):m_preco(preco)
{

}


void Arroz::aumentarPreco(double percentual)
{
    m_preco += m_preco * percentual;
    qDebug() << "O Preco do arroz agora e :" << m_preco;
}
