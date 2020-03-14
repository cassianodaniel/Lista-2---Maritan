#include "MesaDeRestaurante.h"
#include <string>
#include <iostream>

using namespace std;

MesaDeRestaurante::MesaDeRestaurante()
{
    for(int i=0; i<100; i++){
        pedidos[i].setNumero(0);
        pedidos[i].setDescricao("Sem descricao");
        pedidos[i].setPreco(0);
        pedidos[i].setQuantidade(0);
    }
}

void MesaDeRestaurante::adicionaAoPedido(Pedido p){
    for(int i=0; i<100; i++){
        if(pedidos[i].getDescricao() == p.getDescricao()){
            pedidos[i].setQuantidade(pedidos[i].getQuantidade() + p.getQuantidade());
            p.setQuantidade(0);
        }
            if(pedidos[i].getDescricao() == "Sem descricao"){
                pedidos[i].setNumero(p.getNumero());
                pedidos[i].setDescricao(p.getDescricao());
                pedidos[i].setPreco(p.getPreco());
                pedidos[i].setQuantidade(p.getQuantidade());
                break;
            }
    }
}

void MesaDeRestaurante::zeraPedidos(Pedido p){
    p.setQuantidade(0);
}

double MesaDeRestaurante::calculaTotal(){
    double soma = 0.0;
        for(int i=0;i<100;i++){
            soma = soma + pedidos[i].getQuantidade() * pedidos[i].getPreco();
        }
    return soma;
}
