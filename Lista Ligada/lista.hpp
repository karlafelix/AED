#include <iostream>

using namespace std;

typedef string Chave;
typedef string Hora;

class Item{
private:
  //Variaveis que o item vai guardar
  //No caso de um horario de escola
  //Seriam int horario, int cargaHoraria; string NomedaMateria
  string item1;
  int item2;
  float item3;

  cria();
  mostra();

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

  cria();
};

class Lista{
private:
  No *prim, *ult;
  Item item;
  int tam;
public:
  Lista();
  void cria();
  void insere(Item);
  void print();
  void remove( No *p, Item &item);
  void busca(Item item);
};
