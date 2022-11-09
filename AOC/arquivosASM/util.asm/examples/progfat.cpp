#include <iostream>

extern "C" long long fatorial(long long n);

using namespace std;

int main() {
    int n;
    cout << "N: " << endl;
    cin >> n;
    cout << "Fatorial: " << fatorial(n) << endl;
    return 0;
}