#include <iostream>
#include "IConta.h"
#include "Conta.h"
#include "ContaEspecial.h"
#include "Locale.h"
#include "SaldoNaoDisponivelException.h"

using namespace std;

int main()
{
    setlocale(LC_ALL, "Portuguese");
    Conta objetoConta;
    //ContaEspecial objetoContaEspecial;


    objetoConta.depositar(5000);
    try{
        objetoConta.sacar(5001);
        cout << "O saldo da conta [objetoConta] �: " << objetoConta.getSaldo() << endl;
            }catch(SaldoNaoDisponivelException objeto){
                //SaldoNaoDisponivelException();
            }

    objetoConta.setSalarioMensal(500);
    //objetoConta.definirLimite();
    //cout << "O limite da conta [objetoConta] �: " << objetoConta.getLimite() << endl;
    cout << "O saldo da conta [objetoConta] �: " << objetoConta.getSaldo() << endl;

    /*objetoContaEspecial.depositar(5000);
    objetoContaEspecial.sacar(1000);
    objetoContaEspecial.setSalarioMensal(500);
    objetoContaEspecial.definirLimite();
    cout << "O limite da conta [objetoConta] �: " << objetoContaEspecial.getLimite() << endl;
    cout << "O saldo da conta [objetoConta] �: " << objetoContaEspecial.getSaldo() << endl;*/


}
