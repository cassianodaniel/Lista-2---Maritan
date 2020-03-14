#ifndef HORISTA_H
#define HORISTA_H
#include "Funcionario.h"
#include <string.h>

class Horista : public Funcionario
{
    public:
        Horista(int MATRICULA, string NOME, double SPH,double HT);
        virtual ~Horista();
        double salarioPorHora;
        double horasTrabalhadas;
        double calculaSalario();
    protected:

    private:
};

#endif // HORISTA_H
