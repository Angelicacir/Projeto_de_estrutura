#include <iostream>
using namespace std;

int fatorial ( int n);

int main(){
    int n;
    cout << "Insira o numero que deseja calcular: " << endl;
    cin >> n;
    cout << "Resultado: " << fatorial(n) << endl;
    return 0;
}

int fatorial (int n) {
    if ( n == 0) {
    return 1;
    } else {
    return n * fatorial(n - 1);
    }
}