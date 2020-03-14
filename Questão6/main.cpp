#include <iostream>
#include "Pedido.h"
#include "MesaDeRestaurante.h"
#include "RestauranteCaseiro.h"
#include <string>

using namespace std;

int main()
{
    RestauranteCaseiro restaurante1 = RestauranteCaseiro();
    Pedido p1(1,"Suco de Laranja", 1,2.00);
    Pedido p2(2,"Suco de Uva", 2, 3.00);
    Pedido p3(3,"Suco de Laranja",4,2.00);
    restaurante1.adicionaAoPedido(p1, 0);
    restaurante1.adicionaAoPedido(p2, 0);
    restaurante1.adicionaAoPedido(p3, 0);
    cout << "Valor total: " << restaurante1.calculaTotalRestaurante() << "R$." <<endl;

    return 0;
}
