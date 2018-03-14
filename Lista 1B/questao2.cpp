#include <iostream>

using namespace std;

template<typename T>

class Pedra{
public:
  T esq;
  T dir;
};
void print(Pedra<int> p){
  cout<<"Pedra = ["<<p.esq<<"]["<<p.dir<<"]"<<endl;
}

int main(){

  Pedra<int> pedra;
  pedra.esq = 3;
  pedra.dir = 5;

  print(pedra);

}
