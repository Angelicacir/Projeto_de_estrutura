#include <iostream>
using namespace std;

int funcbin(int n, int k);

int main(){
    int n, k;
    cout << "Informe os valores de n e k: " << endl;
    cin >> n;
    cin >> k;
    cout << "Resultado: " << funcbin(n, k) << endl;
    return 0;
}

int funcbin(int n, int k){
    if (n == 0 || k == 0){
        return 1;
    }else{
        return funcbin(n - 1, k - 1) + funcbin(n - 1, k);
    }
}