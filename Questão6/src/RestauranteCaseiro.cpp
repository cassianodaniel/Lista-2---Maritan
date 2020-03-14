#include "RestauranteCaseiro.h"
#include <string>
#include <iostream>

using namespace std;

RestauranteCaseiro::RestauranteCaseiro()
{
    for(int i=0; i<100; i++){
        mesas[i] = MesaDeRestaurante();
    }
}

void RestauranteCaseiro::adicionaAoPedido(Pedido p, int mesa){
    mesas[mesa].adicionaAoPedido(p);
}

double RestauranteCaseiro::calculaTotalRestaurante(){
    double soma = 0.0;
    for(int i=0;i<100;i++){
        soma = soma + mesas[i].calculaTotal();
    }
    return soma;
}
