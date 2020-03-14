#include "Comissionado.h"

Comissionado::Comissionado(int MATRICULA, string NOME, double SALARIO, double VENDASSEMANAIS, double PERCENTUAL)
{
    matricula = MATRICULA;
    nome = NOME;
    salarioPiso = SALARIO;
    vendasSemanais = VENDASSEMANAIS;
    percentualComissao = PERCENTUAL;
}


Comissionado::~Comissionado()
{
    //dtor
}


double Comissionado::calculaSalario()
{
    return this->salarioPiso + ((percentualComissao/100) * vendasSemanais);
}
