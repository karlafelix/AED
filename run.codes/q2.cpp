#include<iostream>
#include<math.h>

using namespace std;

int main(){
  int n, x;
  int cont = 0; //CONTADOR
  int TAM;
  cin >> TAM;
  cout<<TAM<<" O  TAMANHO EH"<<endl;
  do
  {
    cin>>n;
    for(x=0; x<31; x++){
        if (pow(2, x) == n){
          cout<< n;
          cont++;
          cout<<cont<< " eh o cont?"<<endl;
        }
    }
  }while(cont<TAM);//Quando CONT tiver o mesmo tamanho que TAM acaba o loop

  return 0;

}
