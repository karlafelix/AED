#include<lista.hpp>
using namespace std;

void Lista::insere(Item it){
  ult->prox = new No(it);
  ult = ult->prox;
  ult->prox = NULL;
  ult->item = it;
}
 void Lista::print(){
   No *p = prim->prox;
   while (p!= NULL){
     p->Item.print();
     p = p->prox;
   }
 }
