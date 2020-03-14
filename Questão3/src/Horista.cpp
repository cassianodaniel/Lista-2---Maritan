#include "Horista.h"

Horista::Horista(int MATRICULA, string NOME, double SPH, double HT)
{
    this->matricula = MATRICULA;
    this->nome = NOME;
    this->salarioPorHora = SPH;
    this->horasTrabalhadas = HT;
}

double Horista::calculaSalario()
{
    if(horasTrabalhadas > 40){
        return 4 * ((40 * salarioPorHora) + ((horasTrabalhadas - 40) * (salarioPorHora * 1.5)));
    }
    else{
        return 4 * horasTrabalhadas * salarioPorHora;
    }
}

Horista::~Horista()
{
    //dtor
}
