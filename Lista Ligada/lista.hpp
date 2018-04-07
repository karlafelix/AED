#include <iostream>

using namespace std;

typedef string Chave;
typedef string Hora;

class Item{
private:


};

class No{
public:
  Item item;
  No *prox;

  No(){
    prox = NULL;
  }
  No(Item item){
    this->item = item;
    prox = NULL;
  }
};

class Lista{
private:
  No *prim, *ult;
  Item item;
  int tam;
public:
  Lista(){
    prim = new No; //cabeça
    prim->prox = NULL;
    ult = prim;
  }
  void cria();
  void insere(Item);
  void mostra();
  void remove( No *p, Item &item);
  void busca(Item item);
};
