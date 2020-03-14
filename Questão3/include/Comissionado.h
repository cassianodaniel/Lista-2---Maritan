#ifndef COMISSIONADO_H
#define COMISSIONADO_H
#include "Funcionario.h"

class Comissionado : public Funcionario
{
    public:
        Comissionado(int,string,double,double,double);
        virtual ~Comissionado();
        double vendasSemanais;
        double percentualComissao;
        double salarioPiso;
        double calculaSalario();
    protected:

    private:
};

#endif // COMISSIONADO_H
