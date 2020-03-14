#ifndef ASSALARIADO_H
#define ASSALARIADO_H
#include "Funcionario.h"

class Assalariado : public Funcionario{
    public:
        Assalariado(int, string, double);
        virtual ~Assalariado();
        double calculaSalario();
        void setSalario(double);
    protected:
        double salario;
    private:
};

#endif // ASSALARIADO_H
