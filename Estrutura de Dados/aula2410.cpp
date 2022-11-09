#include <iostream>

using namespace std;

// Nodos são os valores e o elo (link) para o próximo valor
struct node
{
    int value;
    node *link;
};

// nullptr = null para ponteiro nullpointer
int main()
{
    int n;
    node *first = nullptr;
    cout << "Digite valores (0 para sair): \n";
    while (true)
    {
        cin >> n;
        if (n == 0)
            break;
        node *p = new node;
        p->value = n;
        p->link = first;
        first = p;
    }
    // while (first != nullptr)
    //{
    //    cout << first->value << endl;
    //   first = first->link;
    //}
    cout << "Conteúdo da lista:\n";
    node *p = first;
    while (p != nullptr)
    {
        cout << p->value << endl;
        p = p->link;
    }

    while (p != nullptr)
    {
        p = p->link;
        delete first;
        first = p;
    }
    cout << p << endl;
    return 0;
}