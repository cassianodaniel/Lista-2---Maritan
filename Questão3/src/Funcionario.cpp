#include "Funcionario.h"

Funcionario::Funcionario()
{
    this->nome = "Não setado";
    this->matricula = 0;
}

Funcionario::~Funcionario()
{
    //dtor
}

string Funcionario::getNome(){
    return this->nome;
}
int Funcionario::getMatricula(){
    return this->matricula;
}
void Funcionario::setMatricula(int MATRICULA){
    this->matricula = MATRICULA;
}

void Funcionario::setNome(string NOME){
    this->nome = NOME;
}
