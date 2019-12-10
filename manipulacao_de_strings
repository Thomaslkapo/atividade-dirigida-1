#include <iostream>
#include <string>
#include <vector>
#include <locale.h>
using namespace std;
int quantidade_palavras = 1;
int quantidade_a = 0;
int posicao = -1;
int quantidade_repetidas = 0;
string frase;
void numero_de_caracteres();
void quantidade_de_palavras();
void quantidade_letra_a();
void se_repetem();
void troca();
int contarPalavrasRepetidas(string frase );
vector<string> lista_de_palavras;

int main(){

    setlocale(LC_ALL, "Portuguese");

    cout << "Digite uma frase: " << endl << endl;

    getline(cin, frase);

    cout << endl;

    numero_de_caracteres();


    quantidade_de_palavras();


    quantidade_letra_a();


    cout << "Quantidade de palavras repetidas: " << contarPalavrasRepetidas(frase) << endl << endl;

    troca();

   return 0;
}

void numero_de_caracteres(){

 cout << "O comprimento é: " << frase.length() << endl << endl;
    for(int i = 0; i < frase.length(); i++){
    if (frase[i] == 'a'){
    quantidade_a++;
    }
  }
}

void quantidade_de_palavras(){

do{

    posicao = frase.find(' ');

if(posicao != -1){

    quantidade_palavras++;

}

   frase = frase.substr(posicao+1);

 }while(posicao != -1);

    cout << "Na frase há " << quantidade_palavras << " palavras " <<endl << endl;

}

void quantidade_letra_a(){

    cout << "A letra (a) aparece " << quantidade_a << " vezes"<<endl << endl;

}

int contarPalavrasRepetidas(string frase){

   do{

        posicao = frase.find(' ');
        lista_de_palavras.push_back(frase.substr(0, posicao));
        frase = frase.substr(posicao + 1);

    }while(posicao != -1);

        for(int i = 0; i < (int)lista_de_palavras.size(); i++){
            for (int j = 0; j < (int)lista_de_palavras.size(); ++j) {
                if(lista_de_palavras[i] == lista_de_palavras[j]){
                    if(i != j){
                        quantidade_repetidas++;
cout << "A quantidade palavras repetidas é: " << endl << endl;
        }
      }
    }
  }
    return quantidade_repetidas;
}
void troca(){
    cout << "Quando trocamos a primeira palavra da frase pela ultima temos: " << endl << endl;

    for (int i = 0; i < frase.size(); i++){
    cout << lista_de_palavras[i] + " " ;
  }
}

