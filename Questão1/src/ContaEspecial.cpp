#include "ContaEspecial.h"
//virtual
ContaEspecial::~ContaEspecial(){

}

void ContaEspecial::definirLimite(){
    this->limite = this->salarioMensal*3;
}
