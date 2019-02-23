#include<bits/stdc++.h>
using  namespace std;
/*
void quick(int cadena[], int inicio, int fin){

  int p;
  if((fin-1)>0){
    p = partition(cadena, inicio, fin);
    quick(cadena, inicio, p-1);
    quick(cadena, p+1, fin);
  }
}

int partition(int cadena[], int inicio, int fin){

  int pivote, primerElemento;
  primerElemento = inicio;
  for(int i = inicio; i < fin; i++){
    if(cadena[i] < cadena[pivote]){
      swap(&cadena[i], &cadena[primerElemento]);
      primerElemento ++;
    }
  }
  swap(&cadena[pivote], &cadena[primerElemento]);

  return primerElemento;

}
*/
int main(){

  vector<int> v;
  int n, x;
  cin >> n;
  for(int i = 0; i < n; i++){
    cin >> x;
    v.push_back(x);
  }
  sort(v.begin(), v.end());

  for(int i = 0; i < v.size(); i++){
    cout<<v[i]<<" ";
  }
  return 0;
}
