#include <iostream>
using namespace std;

int fatorial ( int n, int a);
int fatorialcauda (int n);

int main(){
    int n;
    cout << "Insira o numero que deseja calcular: " << endl;
    cin >> n;
    cout << "Resultado: " << fatorialcauda(n) << endl;
    return 0;
}

int fatorial (int n, int a) {
    if ( n == 1) {
    return a;
    }else{
    return fatorial(n - 1, n * a);
    }
}

int fatorialcauda (int n){
    return fatorial(n, 1);
}