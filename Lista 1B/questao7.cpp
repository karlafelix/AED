#include <iostream>

using namespace std;

template<typename T>

class Pedra{
private:
  T esq;
  T dir;
public:

  Pedra();
  Pedra(T a, T b){
        esq = a;
        dir = b;
  }
  void print(){
    if (valida()){
      cout<<"Pedra = ["<<esq<<"]["<<dir<<"]"<<endl;
      }
    else cout<<"Pedra Invalida"<<endl;
  }
  bool valida(){
    if (esq>6 || esq<0 || dir>6 || dir<0){
      return false;
    }
    return true;
  }
  T getEsq(){
    return esq;
  }
  T getDir(){
    return dir;
  }
};


int main(){

  Pedra<int> pedra(2,3);
  Pedra<int> pedra1(9,5);

  pedra.print();
  pedra1.print();

  return 0;
}
