#ifndef SISTEMAGERENCIAFOLHA_H
#define SISTEMAGERENCIAFOLHA_H
#include "Funcionario.h"
#include "Assalariado.h"
#include "Horista.h"
#include "Comissionado.h"
#include "FuncionarioNaoExisteException.h"
#include "OrcamentoEstouradoException.h"
#include <string.h>

using namespace std;

class SistemaGerenciaFolha
{
    public:
        SistemaGerenciaFolha(double orcamento);
        virtual ~SistemaGerenciaFolha();
        void setFuncionario(Funcionario *f);
        Funcionario* getFuncionario(int);
        double calculaValorTotalFolha();
        double consultaSalarioFuncionario(string NOME);

    protected:
        double orcamento;
        int i;
        Funcionario *funcionarios[];
    private:
};

#endif // SISTEMAGERENCIAFOLHA_H
