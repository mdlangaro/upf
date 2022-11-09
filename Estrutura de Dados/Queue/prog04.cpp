#include <iostream>
#include <queue>
#include <string>

using namespace std;

struct pessoa{
    string nome;
    string tel;
};


int menu ()
{
    cout << "\n1) Me adiciona lá no Orkut\n" << "2) Pq me deletou?\n" << "9) FIFO\n" << "\nPick One" << endl;
    int op;
    cin >> op;
    cin.ignore();
    return op;
}


void adicionar(queue<pessoa> &fila){
    pessoa aux;
    cout << "Nome: ";
    getline(cin, aux.nome);
    cout << "Telefone: ";
    getline(cin, aux.tel);
    fila.push(aux);
}


void retirar(queue<pessoa> &fila){
    if (fila.empty()){
            cout << "\x1b[31mStack underflow\x1b[0m";
        } else {
            cout << "Pessoa Chamada\nNome: " << fila.front().nome << "\nTelefone: " << fila.front().tel << endl;
            fila.pop();
        }
}


int main() {
    queue<pessoa> fila;
   int opcao;
   do{
    opcao = menu();
    switch (opcao){
        case 1:
            adicionar(fila);
            break;
        case 2:
            retirar(fila);
            break;
        default:
            break;
    }
   } while (opcao != 9);
   return 0;
}