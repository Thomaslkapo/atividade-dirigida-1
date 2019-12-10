#include<iostream>
#include<iomanip>
#include<vector>
#include<fstream>
#include <algorithm>
#include <locale.h>

using namespace std;

int main(){
setlocale(LC_ALL, "Portuguese");
int limite_tarefas;
int opcao;
string tarefa, linha;


do{
    cout << " Deseja inserir uma tarefa ? digite[1] para sim e [2] para nao :"<< endl;
    cin >> opcao;
    cout << "Quantas tarefas deseja colocar na lista?" << endl;
    cin >> limite_tarefas;
for (int i = -1; i < limite_tarefas; i++)
    {
    getline(cin, tarefa);
    ofstream arquivo;
    arquivo.open ("Banco.txt", ios :: app);
    arquivo << tarefa << endl;
    arquivo.close();
    }



     }while(opcao == 1);
    sort(tarefa.begin() + 1, tarefa.end());

    system("cls");

    cout << "Esta é a sua lista de tarefas em ordem alfabetica: " << endl;


    cout << tarefa;


return 0;

}

