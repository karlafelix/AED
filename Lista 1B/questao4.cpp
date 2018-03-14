#include <iostream>

using namespace std;

template<typename T>

class Pedra{

public:
  T esq = 2;
  T dir = 3;
  Pedra();
  Pedra(T a, T b){
        esq = a;
        dir = b;
  }
  void print(){
    cout<<"Pedra = ["<<esq<<"]["<<dir<<"]"<<endl;
  }
};


int main(){

  Pedra<int> pedra(2,3);
  Pedra<int> pedra1(5,5);

  pedra.print();
  pedra1.print();

}
