#include <iostream>

using namespace std;

template<typename T>

class Pedra{

public:
  T esq = 0;
  T dir = 0;
};
void print(Pedra<int> p){
  cout<<"Pedra = ["<<p.esq<<"]["<<p.dir<<"]"<<endl;
}

int main(){
  //LETRA A
  Pedra<int> pedra;
  //LETRA B
  print(pedra);
  //LETRA C
  pedra.esq = 3;
  pedra.dir = 5;
  //LETRA D
  print(pedra);

}
