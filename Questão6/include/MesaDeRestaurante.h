#ifndef MESADERESTAURANTE_H
#define MESADERESTAURANTE_H
#include <string>
#include <iostream>
#include "Pedido.h"

using namespace std;

class MesaDeRestaurante
{
    public:
        MesaDeRestaurante();
        void adicionaAoPedido(Pedido);
        void zeraPedidos(Pedido);
        double calculaTotal();

    protected:

    private:
        Pedido pedidos[100];
};

#endif // MESADERESTAURANTE_H
