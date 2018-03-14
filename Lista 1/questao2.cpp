#include <iostream>


using namespace std;

struct Pizza{
  bool delivery;
  string sabor;

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
  Pizza pedido;
  Pizza *pPedido = &pedido;
  pPedido->delivery = true;
  pPedido->sabor = "Mussarela";


  Pizza pedido2;
  Pizza *pPedido2 = &pedido2;
  pPedido2->delivery = false;
  pPedido2->sabor = "Napolitana";

  imprimePedido(pedido);
  imprimePedido(pedido2);
}
