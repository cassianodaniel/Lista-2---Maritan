#ifndef PEDIDO_H
#define PEDIDO_H
#include <string>
#include <iostream>

using namespace std;

class Pedido
{
    public:
        Pedido();
        Pedido(int,string,int,double);
        string getDescricao();
        int getNumero();
        double getPreco();
        int getQuantidade();
        void setDescricao(string);
        void setNumero(int);
        void setPreco(double);
        void setQuantidade(int);

    protected:

    private:
        int Numero;
        string Descricao;
        int Quantidade;
        double Preco;
};

#endif // PEDIDO_H
