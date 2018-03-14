#include <iostream>
#include <string>

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
  pedido.delivery = true;
  pedido.sabor = "Mussarela";

  Pizza pedido2;
  pedido2.delivery = false;
  pedido2.sabor = "Napolitana";

  imprimePedido(pedido);
  imprimePedido(pedido2);
}
