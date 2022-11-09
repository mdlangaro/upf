#include <iostream>
#include <queue>

using namespace std;
int main(){
    queue<int> fila;
    for (int i = 0; i < 10; i++){
        fila.push(i+7);
    }
    cout << "Tamanho: " << fila.size() << endl;             // consulta o tamanho
    cout << "Front: " << fila.front() << endl;              // consulta o front; não mexe na fila
    cout << "Back: " << fila.back() << endl;                // consulta o back; não mexe na fila
    cout << "Tirei o primeiro: " << fila.front() << endl;
    fila.pop();                                             // remove o primeiro da fila
    cout << "Tamanho: " << fila.size() << endl;             // consulta o tamanho
    return(0);
}