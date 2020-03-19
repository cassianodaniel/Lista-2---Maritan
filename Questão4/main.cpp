#include <iostream>
#include "TestaValidaNumero.h"
#include "ValorAbaixoException.h"
#include "ValorAcimaException.h"
#include "ValorMuitoAcimaException.h"
using namespace std;

int main(){

    TestaValidaNumero *obj = new TestaValidaNumero();

    for(int i = 0; i < 1003; i += 500){ //executa três vezes! 0, 500, 1000
        try{
            obj->validaNumero(i);
        }
        catch(ValorAbaixoException){
        }
        catch(ValorAcimaException){
        }
        catch(ValorMuitoAcimaException){
        }
    }
    return 0;
}
