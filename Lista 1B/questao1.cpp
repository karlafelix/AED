#include <iostream>

using namespace std;

template<typename T>

class Pedra{
public:
  T esq;
  T dir;
};

int main(){
  Pedra<int> pedra;
  pedra.esq = 3;
  pedra.dir = 5;
  cout<<"A pedra eh: ["<<pedra.esq<<"]["<<pedra.dir<<"]"<<endl;

}
