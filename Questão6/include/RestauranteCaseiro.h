#ifndef RESTAURANTECASEIRO_H
#define RESTAURANTECASEIRO_H
#include <string>
#include "Pedido.h"
#include "MesaDeRestaurante.h"
#include <iostream>

using namespace std;

class RestauranteCaseiro
{
    public:
        RestauranteCaseiro();
        void adicionaAoPedido(Pedido, int);
        double calculaTotalRestaurante();

    protected:

    private:
        MesaDeRestaurante mesas[100];
};

#endif // RESTAURANTECASEIRO_H
