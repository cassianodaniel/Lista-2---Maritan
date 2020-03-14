#include "Pedido.h"
#include <string>
#include <iostream>

using namespace std;

Pedido::Pedido()
{
    this->Numero = 0;
    this->Descricao = "Sem descricao";
    this->Quantidade = 0;
    this->Preco = 0.0;
}

Pedido::Pedido(int numero,string descricao,int quantidade,double preco)
{
    this->Numero = numero;
    this->Descricao = descricao;
    this->Quantidade = quantidade;
    this->Preco = preco;
}

int Pedido::getNumero(){
    return Numero;
}

string Pedido::getDescricao(){
    return Descricao;
}

int Pedido::getQuantidade(){
    return Quantidade;
}

double Pedido::getPreco(){
    return Preco;
}

void Pedido::setNumero(int numero){
    if(numero < 0){
        Numero = 0;
    }else{
        Numero = numero;
    }
}

void Pedido::setDescricao(string descricao){
    if(descricao == ""){
        Descricao = "Sem descricao";
    }else{
        Descricao = descricao;
    }
}

void Pedido::setQuantidade(int quantidade){
    if(quantidade < 0){
        Quantidade = 0;
    }else{
        Quantidade = quantidade;
    }
}

void Pedido::setPreco(double preco){
    if(preco < 0){
        Preco = 0;
    }else{
        Preco = preco;
    }
}
