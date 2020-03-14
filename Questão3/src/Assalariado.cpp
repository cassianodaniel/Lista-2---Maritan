#include "Assalariado.h"

Assalariado::~Assalariado()
{
    //dtor
}

Assalariado::Assalariado(int MATRICULA, string NOME, double SALARIO)
{
    matricula = MATRICULA;
    nome = NOME;
    salario = SALARIO;
}

void Assalariado::setSalario(double SALARIO)
{
    salario = SALARIO;
}

double Assalariado::calculaSalario(){
    return salario;
}
