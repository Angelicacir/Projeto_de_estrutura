#include <iostream>
#include <string.h>
using namespace std;

bool verificapalindromo(string s, int i);

int main(){
  string s2;
  cout << "Digite a frase que deseja verificar, sem espaço ou pontuacao: " << endl;
  getline(cin, s2);
  if (verificapalindromo(s2, 0)){
      cout << "A frase eh um palindromo" << endl;
  }else{
      cout << "A frase nao eh um palindromo" << endl;
  }
  return 0;
}

bool verificapalindromo(string s, int i){
        
    if(i > s.size()/2){
       return true ;
    }
    return s[i] == s[s.size()-i-1] && verificapalindromo(s, i+1) ;
}