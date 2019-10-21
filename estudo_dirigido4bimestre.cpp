
#include <iostream>
#include <locale.h>
#include <vector>
#include <time.h>
#include <stdlib.h>
using namespace std;
 bool repitidos(vector <int> valores, int tamanho, int valor){

        for(int i = 0; i < tamanho; i++){

        if(valores[i] == valor) return true;

        }

        return false;

    }

    void gerador_aleatorio(int ale_dezenas ,int minimo, int rand_max){

    srand(time(NULL));

    int x;

        vector <int> numeros;

            for(int i = 0; i < ale_dezenas; i++){

        refazer:

        x = minimo + rand() % rand_max;

            if(!repitidos(numeros, i, x)){

        numeros.push_back(x);

               }
            else goto refazer;
        }

        cout << "Os números selecionados foram: ";

            for(int i = 0; i < ale_dezenas; i++){

        cout << numeros[i] << ", ";

            }

        cout << endl << endl;

    }
void Mega_Sena(){

    int geracao, aposta;

    cout <<"-----------BEM-VINDO Á MEGA-SENA---------------" << endl;

        do{
    cout << "Quantas apostas voce deseja gerar?(DIGITE SOMENTE NUMEROS POSITIVOS)" << endl;

    cin >> geracao;

        }while(geracao < 1);

        do{ cout << "Na Mega-Sena só é permitido apostar entre [6] e [15] dezenas, " << endl << "sendo assim quantas dezenas voce deseja apostar?:" << endl;

    cin >> aposta;

        }while(aposta < 6 || aposta > 15);

    gerador_aleatorio(aposta, 1,99);

     string lista[] = { " 3,50 ", " 24,50 ", " 98,00 ", " 294,00 "," 735,00 ", " 1.617,00 ", " 3.234,00 ", " 6.006,00 ", " 10.510,50 ", " 17.517,50 "};

     cout << "O valor gasto foi o de: R$" << lista[aposta -6] << endl;

    }

void Quina(){

    int geracao, aposta;

    cout <<"-----------BEM-VINDO Á QUINA---------------" << endl;

        do{
    cout << "Quantas apostas voce deseja gerar?(DIGITE SOMENTE NUMEROS POSITIVOS)" << endl;

    cin >> geracao;

        }while(geracao < 1);

        do{ cout << "Na Quina só é permitido apostar entre [5] e [15] dezenas, " << endl << "sendo assim quantas dezenas voce deseja apostar?:" << endl;

    cin >> aposta;

        }while(aposta < 5 || aposta > 15);

    gerador_aleatorio(aposta, 1,99);

    string lista[] = { " 1,50", " 9,00 ", " 31,50 ", " 84,00 ", " 189,00 ", " 378,00 ", " 693,00 ", " 1.188,00 ", " 1.930,50 ", " 3.003,00 ", " 4.504,00 "};

    cout << "O valor gasto foi o de: R$" << lista[aposta -5] << endl;
    }

 void Lotomania(){

    int geracao, aposta;

     cout <<"-----------BEM-VINDO Á LOTOMANIA---------------" << endl;

        do{

    cout << "Quantas apostas voce deseja gerar?(DIGITE SOMENTE NUMEROS POSITIVOS)" << endl;

    cin >> geracao;

        }while(geracao < 1);


        do{ cout << "Na Lotomania só é permitido apostar [50] dezenas" << endl << "sendo assim quantas dezenas voce deseja apostar?:" << endl;

    cin >> aposta;

        }while(aposta < 50 || aposta > 50);

    gerador_aleatorio(aposta, 1,99);

    cout << "O valor gasto foi o de: R$1,50" << endl;

    }

void Lotofacil(){

    int geracao, aposta;

    cout <<"-----------BEM-VINDO Á LOTOFÁCIL---------------" << endl;

        do{

    cout << "Quantas apostas voce deseja gerar?(DIGITE SOMENTE NUMEROS POSITIVOS)" << endl;

    cin >> geracao;

        }while(geracao < 1);

        do{ cout << "Na Lotofácil só é permitido apostar entre [15] e [18] dezenas, " << endl << "sendo assim quantas dezenas voce deseja apostar?:" << endl;

    cin >> aposta;

        }while(aposta < 15 || aposta > 18);

    gerador_aleatorio(aposta, 1,99);

    string lista[]{ " 2,00 ", " 32,00 ", " 272,00 ", " 1.632,00 " };

    cout << "O valor gasto foi o de: R$" << lista[aposta -15] << endl;
    }


int main(){

    int resposta;

    setlocale(LC_ALL, "Portuguese");

     cout <<"-----------BEM-VINDO AO GERADOR DE APOSTAS---------------" << endl;

    cout << "Digite o numero do jogo em que deseja participar sendo:" << endl <<"[1]Mega-Sena" << endl << "[2]Quina" << endl << "[3]Lotomania" << endl << "[4]Lotofácil" << endl;

    cin >> resposta;

switch(resposta) {

            case 1:

                Mega_Sena();

                break;

            case 2:

                Quina();

                break;

            case 3:

                Lotomania();

                break;

            case 4:

                Lotofacil();

                break;

        }
    return 0;
}





