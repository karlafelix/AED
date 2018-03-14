#include <iostream>
#include <new>

using namespace std;



struct Pizza{
  bool delivery;
  string sabor;

};

void imprimePedido(Pizza* pedido){
  if (pedido->delivery){
    cout<<"O seu pedido eh :\n "<<pedido->sabor<<" - Delivery\n";
  }
  else{
    cout<<"O seu pedido eh :\n "<<pedido->sabor<<" - Mesa\n";
  }
};

void imprimePedido(Pizza pedido){
  if (pedido.delivery){
    cout<<"O seu pedido eh :\n "<<pedido.sabor<<" - Delivery\n";
  }
  else{
    cout<<"O seu pedido eh :\n "<<pedido.sabor<<" - Mesa\n";
  }
};


int main(){
  int x = 3;
  Pizza* vetor = new Pizza[x];


  Pizza pedido;
  //Pizza *pPedido = &pedido;
  pedido.delivery = true;
  pedido.sabor = "Mussarela";
  vetor[0] = pedido;

  Pizza pedido2;
  //Pizza *pPedido2 = &pedido2;
  pedido2.delivery = false;
  pedido2.sabor = "Napolitana";
  vetor[1] = pedido2;

  Pizza pedido3;
  //Pizza *pPedido2 = &pedido2;
  pedido3.delivery = true;
  pedido3.sabor = "4 Queijos";
  vetor[2] = pedido3;



  for (int i=0; i<x ; i++){
    imprimePedido(vetor[i]);
    cout<<"oi"<<endl;
  }


}
