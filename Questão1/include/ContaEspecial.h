#ifndef CONTAESPECIAL_H
#define CONTAESPECIAL_H
#include "Conta.h"

class ContaEspecial : public Conta
{
    public:
        virtual ~ContaEspecial();
        void definirLimite();

    protected:

    private:
};

#endif // CONTAESPECIAL_H
