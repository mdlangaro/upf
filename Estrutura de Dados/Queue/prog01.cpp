#include <iostream>
#include <queue>

using namespace std;
int main(){
    queue<int> fila;
    fila.push(10); // adiciona um valor
    fila.push(20); // adiciona um valor
    cout << "Tamanho: " << fila.size() << endl;     // consulta o tamanho
    cout << "Front: " << fila.front() << endl;      // consulta o front; não mexe na fila
    cout << "Back: " << fila.back() << endl;        // consulta o back; não mexe na fila
    cout << "Tirei: " << fila.front() << endl;
    fila.pop();                                     // remove o primeiro da fila
    cout << "Tamanho: " << fila.size() << endl;     // consulta o tamanho
    cout << "Fila está vazia? ";
    (fila.empty()==1) ? cout << "Sim\n" : cout << "Não\n";
    return(0);
}