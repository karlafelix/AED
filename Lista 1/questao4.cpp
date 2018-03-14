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

int main(){
  Pizza* pedido = new Pizza;
  //Pizza *pPedido = &pedido;
  pedido->delivery = true;
  pedido->sabor = "Mussarela";
  delete(pedido);

  Pizza* pedido2 = new Pizza;
  //Pizza *pPedido2 = &pedido2;
  pedido2->delivery = false;
  pedido2->sabor = "Napolitana";

  imprimePedido(pedido);
  imprimePedido(pedido2);
  delete(pedido2);
}
