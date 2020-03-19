#include "TestaValidaNumero.h"

using namespace std;

TestaValidaNumero::TestaValidaNumero(){

}

void TestaValidaNumero::validaNumero(int num){
    if(num <= 0){
        throw ValorAbaixoException();
    }
    else if(num > 100 && num < 1000){
        throw ValorAcimaException();
    }
    else if(num >= 1000){
        throw ValorMuitoAcimaException();
    }
}
