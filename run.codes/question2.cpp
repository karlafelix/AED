/* Fa¸ca um programa que leia um n´umero N e em seguida leia v´arios n´umeros inteiros at´e que sejam
digitados N potˆencias de 2. Imprima essas potencias de 2 na sa´ıda padr˜ao.
Restric˜oes:
• (1 ≤ N ≤ 103
)
• Todos os n´umeros lidos est˜ao no intervalo [−2
31
, 2
31 − 1]
• N˜ao pode usar vetor ou matrizes */

#include <iostream>
#include <math.h>

using namespace std;



//CLASSE NO PARA LISTA
class No{
private:
  int v;
  No* prox;
public:
  No(int no){
    v = no;
    prox = NULL;

  }
  int obterValor(){
    return v;
  }
  No* obterProx(){
    return prox;
  }
  void setProx(No* p){
    prox = p;
  }
};
class Lista{
private:
  No* inicio;
  No* fim;
public:
  Lista(){
    inicio = NULL;
    fim = NULL;
  }
  bool vazia() // verifica se a lista está vazia
	{
		return (inicio == NULL);
	}
  void inserir_final(int v){
    No* new_no = new No(v);
    if (vazia()){
      inicio = new_no;
      fim = new_no;
    }
    else{
        fim->setProx(new_no);
        fim = new_no;
    }
  }
  void imprime_Lista(){ // mostra todos os elementos da lista
		No* c = inicio;

		if(vazia())
			cout << "A lista NAO possui elementos!!\n";
		else
		{
			while(c) // percorre a lista
			{
				cout << c->obterValor()<<" ";
				c = c->obterProx();
			}
			cout << endl;
		}
	}
};

int main(){
  int n, x;
  int cont = 0; //CONTADOR
  int TAM;
  Lista pot;
  cin >> TAM;
  do
  {
    cin>>n;
    for (x=0; x<31; x++){
        if (pow(2, x) == n){
          pot.inserir_final(n);
          cont++;
        }
    }
  }
  while(cont<TAM);

  pot.imprime_Lista();

  return 0;

}
