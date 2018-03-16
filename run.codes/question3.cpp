#include <iostream>
#include <math.h>

using namespace std;

#define MAXIMO 26;

class LISTA{
      int topo;
      int lista[MAXIMO];
 public:
       LISTA();
       int InsereFinal(int numero);
       int InsereInicio(int numero);
       void Imprime();

};

LISTA::LISTA()
{
    topo = 0;
}

int LISTA::InsereFinal(int numero)
{
   int retorno;
   if (topo >= MAXIMO)
    cout << "LISTA CHEIA"<<endl;
   else
   {
      lista[topo] = numero;
      topo++;
      retorno = OK;
   }
   return(retorno);
}


int LISTA::InsereInicio(int numero)
{
   int retorno;
   int posAux;
   if (topo >= MAXIMO)
    cout<<"LISTA CHEIA"<<endl;
   else
   {
      for (posAux = topo; posAux >= 0; posAux--)
         lista[posAux] = lista[posAux-1];
      lista[0] = numero;
      topo++;
      retorno = OK;
   }
   return(retorno);
}

void LISTA::Imprime()
{
   int retorno, posAux;
   if (topo == 0)
      cout<<"LISTA VAZIA"<<endl;
   else
   {
      for (posAux=0; posAux < topo;posAux++)
      {
         cout << "Elemento " << posAux << " :" << lista[posAux] << endl;
      }
   }
}


int main(){
  int i;
  Lista palavras;
  string n;
  while(cin>>n && n!="FimDeEntrada"){

  }



}
