#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
    int opcao, i, soma = 0;
    string resposta;
    vector <int> numeros ;
    do {
        cout <<"Digite um valor inteiro"<< endl;
        cin >> i;
        numeros.push_back(i);
        cout << "Voce quer digitar outro valor inteiro?[sim][nao]"<< endl << "[sim] = para continuar" << endl <<"[nao] = para acessar o Menu" << endl;
        cin >> resposta;
    }while(resposta == "sim" || resposta == "Sim" || resposta == "SIM" || resposta == "sIm" || resposta == "sIM" || resposta == "SiM" || resposta == "SIm" || resposta == "S" || resposta == "s");
        do {cout << "********** MENU **********" << endl << endl;
        cout << "Digite [0] ou qualquer outro numero que nao esteja entre as opcoes abaixo para encerrar o programa."<< endl;
        cout << "Digite [1] para ver a soma dos elementos." << endl;
        cout << "Digite [2] para ver a media dos elementos." << endl;
        cout << "Digite [3] para ver a media e o somatorio dos elementos." << endl;
        cout << "Digite [4] para substituir  por zero todos os valores negativos e imprimir a media." << endl;
        cout << "Digite [5] para substituir por zero todos os valores repetidos e imprimir a media e o somatorio." << endl;
        cout << "Digite [6] para mostrar os numeros digitados em ordem crescente." << endl;
        cin >> opcao;
        switch(opcao){
    case 1:
        soma = 0;
        for( i = 0; i < numeros.size();i ++){
        soma = soma + numeros[i];
        }cout << "Soma e igual a: " << soma << endl;
    break;
    case 2:
        soma = 0;
        for( i = 0; i < numeros.size();i ++){
        soma = soma + numeros[i];
        }cout << "Media e igual a: " << soma/numeros.size() << endl;
    break;
    case 3:
        soma = 0;
        for( i = 0; i < numeros.size();i ++){
        soma = soma + numeros[i];
    }cout << "A Media e a Soma dos elementos e igual a: " << endl <<"Media = "<<soma/numeros.size() << endl << "Soma = " << soma << endl;
    break;
    case 4:
        soma = 0;
        for (int i = 0; i < numeros.size(); ++i) {
        if(numeros[i] < 0){
        numeros[i] = 0;
        }
        soma = soma + numeros[i];
        }cout << "Media sem numeros negativos e igual a = " << soma/numeros.size() << endl;
    break;
    case 5 :
        soma = 0;
        for (int x = 0; x < numeros.size(); x++) {
        for (int y = 0; y < numeros.size(); y++) {
        if (x != y && numeros[x] == numeros[y]){
        numeros[y] = 0;
        }
        }
        }for( i = 0; i < numeros.size();i ++){
        soma = soma + numeros[i];
        }cout << "A Media e a Soma dos elementos sem os numeros repetidos e igual a : " << endl << "Media = " << soma / numeros.size() << endl << "Soma = " << soma << endl;
    break;
    case 6 :
        cout << "Os numeros que voce digitou em ordem crescente sao:" << endl;
        sort(numeros.begin(), numeros.end());
        cout << "[";
        for (int x = 0; x < numeros.size(); x++) {
        cout << numeros[x] << ",";
        }cout << "]" << endl;
    break;
        }
        }while(opcao == 1 || opcao == 2 || opcao == 3 ||opcao == 4 || opcao == 5 ||opcao == 6);
    return 0;
}








