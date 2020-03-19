#include <iostream>
#include <fstream> //biblioteca necessária para funções do arquivo

using namespace std;

int main(void){

    fstream input("teste.txt", ios::app);

    ofstream output("teste_bkp.txt", ios::out);

    int idade;
    int idadebckp;

    string nome;
    string nomebckp;

    if(!input.is_open()){ //se o arquivo não abrir
        cout << "Nao foi possivel abrir o arquivo 'teste.txt'";
        return -1;
    }else if(!output.is_open()){ //se o arquivo não abrir
        cout << "Nao foi possivel abrir o arquivo 'teste_bkp.txt'.";
        return -1;
    }

    cout << "Digite o nome: ";
    getline(cin, nome); //podendo absorver os espaços
    cout << "Digite a idade: ";
    cin >> idade;

    input << nome << endl;
    input << idade;
    input.ignore(); //não-string
//_________________________________________________________
    getline(input, nomebckp); //manda a primeira linha pro nomebckp
    input >> idadebckp; //manda a segunda linha pro nomebckp

    output << nome << endl;
    output << idade;

    input.close();
    output.close();

    return 0;
}
