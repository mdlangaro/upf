#include <iostream>
#include <stack>

using namespace std;

int main() {
    stack<string> p;
    
    p.push("AAA");
    p.push("BBB");
    p.push("CCC");
    p.push("DDD");
    p.push("EEE"); // Insere
    while(!p.empty()){ // testa se vazia
        cout << "Tamanho: " << p.size()  // Consulta o tamanho
             << " Topo:" << p.top() // Consulta valor no topo
             << endl; 
        p.pop();   // Desempilha
    }
    return 0;
}
