#include <iostream>
#include "IConta.h"
#include "Conta.h"
#include "ContaEspecial.h"
#include "Locale.h"

using namespace std;

int main()
{
    setlocale(LC_ALL, "Portuguese");
    Conta objetoConta;
    ContaEspecial objetoContaEspecial;


    objetoConta.depositar(5000);
    objetoConta.sacar(1000);
    objetoConta.setSalarioMensal(500);
    objetoConta.definirLimite();
    cout << "O limite da conta [objetoConta] é: " << objetoConta.getLimite() << endl;
    cout << "O saldo da conta [objetoConta] é: " << objetoConta.getSaldo() << endl;

    objetoContaEspecial.depositar(5000);
    objetoContaEspecial.sacar(1000);
    objetoContaEspecial.setSalarioMensal(500);
    objetoContaEspecial.definirLimite();
    cout << "O limite da conta [objetoConta] é: " << objetoContaEspecial.getLimite() << endl;
    cout << "O saldo da conta [objetoConta] é: " << objetoContaEspecial.getSaldo() << endl;

}
