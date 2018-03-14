#include <iostream>

using namespace std;

template<typename T>

class Pedra{

public:
  T esq;
  T dir;
  Pedra();
  Pedra(T a, T b){
        esq = a;
        dir = b;
  }
  void print(){
    cout<<"Pedra = ["<<esq<<"]["<<dir<<"]"<<endl;
  }
  bool valida(){
    if (esq>6 || esq<0 || dir>6 || dir<0){
      return false;
    }
    return true;
  }
};


int main(){

  Pedra<int> pedra(2,3);
  Pedra<int> pedra1(9,5);

  if (pedra.valida()){
      pedra.print();
    }
  else cout<<"Pedra Invalida"<<endl;
  if (pedra1.valida()){
      pedra1.print();
  }
  else cout<<"Pedra invalida"<<endl;
  return 0;
}
