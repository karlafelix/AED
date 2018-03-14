#include <iostream>

using namespace std;


class Pedra{
private:
  int esq;
  int dir;
public:

  Pedra();
  Pedra(int a, int b){
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
  int getEsq(){
    return esq;
  }
  int getDir(){
    return dir;
  }
};

void imprimeLista(Pedra lista[3], int tam){
  for (int i=0; i<tam; i++){
    lista[i].print();
  }
}

int main(){

  Pedra lista[3];
  Pedra pedra;
  Pedra pedra1;
  Pedra pedra2;

  pedra.Pedra(2,1);
  pedra1.Pedra(9,4);
  pedra2.Pedra(5,6);

  lista[0] = pedra;
  lista[1] = pedra1;
  lista[2] = pedra2;

  imprimeLista(lista, 3);
  return 0;
}
