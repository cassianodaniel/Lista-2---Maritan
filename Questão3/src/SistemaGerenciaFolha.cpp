#include "SistemaGerenciaFolha.h"

SistemaGerenciaFolha::SistemaGerenciaFolha(double ORCAMENTO)
{
    this->orcamento = ORCAMENTO;
    this->i=0;
}

SistemaGerenciaFolha::~SistemaGerenciaFolha()
{
    //dtor
}

void SistemaGerenciaFolha::setFuncionario(Funcionario *f){
    funcionarios[i] = f;
    i++;
}

Funcionario* SistemaGerenciaFolha::getFuncionario(int I){
    return funcionarios[i];
}


double SistemaGerenciaFolha::consultaSalarioFuncionario(string NOME){
        try{
        for(int j=0;j<i;j++){
            if(funcionarios[j]->getNome() == NOME){
                return funcionarios[j]->calculaSalario();
            }
        }
        throw FuncionarioNaoExisteException();
        }catch(FuncionarioNaoExisteException funcEx){
            funcEx = FuncionarioNaoExisteException();
        }
}

double SistemaGerenciaFolha::calculaValorTotalFolha(){
    double total = 0;
    try{
    for(int j=0;j<i;j++){
        total += funcionarios[j]->calculaSalario();
    }
    if(total > orcamento){
        throw new OrcamentoEstouradoException;
    }if(total < orcamento){
    return total;
    }
    }catch(OrcamentoEstouradoException objOrcExp){
        objOrcExp = OrcamentoEstouradoException();
    }
}
