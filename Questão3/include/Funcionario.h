#ifndef FUNCIONARIO_H
#define FUNCIONARIO_H
#include "string"

using namespace std;

class Funcionario
{
    public:
        Funcionario();
        virtual ~Funcionario();
        string getNome();
        int getMatricula();
        void setMatricula(int MATRICULA);
        void setNome(string NOME);

        virtual double calculaSalario() = 0; //cpp sem declaração de calculasalario() porque está estanciado [ = 0 ]; a instância condiz no fato de não criar um objeto na main desta classe, ou seja: Funcionario(string,int) não teria sentido
        //já que Funcionario é apenas uma classe abstrata para outros três tipos de FUNCIONÁRIOS que vão ser implementados posteriormente
    protected:
        string nome;
        int matricula;
    private:
};

#endif // FUNCIONARIO_H
