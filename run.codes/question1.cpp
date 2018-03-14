/**/
#include <iostream>

using namespace std;

int main(){

  int N, i;
  cin >> N;

  string* palavras = new  string[N];

  for (int x=0; x<N; x++){
    cin >> palavras[x];
  }

  for (i =0; i< N/2; i++){
    string v = palavras[i];
    palavras[i] = palavras[N - i -1];
    palavras[N - i -1] = v;
  }

  for (i=0; i<N; i++){
    cout << palavras[i]<<endl;
  }
}
