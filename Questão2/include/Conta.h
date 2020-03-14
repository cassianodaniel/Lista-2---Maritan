#ifndef CONTA_H
#define CONTA_H
#include "IConta.h"
#include <string>

using namespace std;

class Conta : public IConta
{
    public:
        Conta();
        Conta(string,double,int,double);
        virtual ~Conta();
        string getNomeCliente();
        double getSalarioMensal();
        int getNumeroConta();
        double getSaldo();
        double getLimite();

        void setNomeCliente(string);
        void setSalarioMensal(double);
        void setNumeroConta(int);
        void setSaldo(double);
        virtual void definirLimite(); //virtual porque será sobrescrito posteriormente

        //VIRTUAIS DO ICONTA
        //NÃO RECEBEM A DECLARACAO DE VIRTUAL, MAS NECESSARIAMENTE SÃO DECLARADAS,NOVAMENTE, NAS CLASSES POSTERIORES
        void sacar(double);
        void depositar(double);

    protected:
        string nomeCliente;
        double salarioMensal;
        int numeroConta;
        double saldo;
        double limite;

    private:
};

#endif // CONTA_H
