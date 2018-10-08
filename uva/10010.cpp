#include<bits/stdc++.h>
using  namespace std;

int * buscar(string palabra, char *matriz){
  static int pos[2];
  pos[0] = 1;
  return pos;
}

int main(){

int casos;
cin>>casos;
while(casos > 0){
  int m, n;
  cin>>m>>n;
  char matriz[m+2][n+2];

  //para evitar una matriz llena de basura en los bordes
  for(int i = 0; i < m+2; i += m+1){
    for(int j = 0; j < n+2; j++){
      matriz[i][j] = '.';
    }
  }
  for(int j = 0; j < n+2; j += n+1){
    for(int i = 0; i < m+2; i++){
      matriz[i][j] = '.';
    }
  }
//////////////////////////////////////////////

  for(int i = 1; i <= m; i++){
    for(int j = 1; j <= n; j++){
      char caracter;
      cin >> caracter;
      matriz[i][j] = caracter;
    }
  }

  int numeroPalabras;
  cin >> numeroPalabras;
  int posiciones[numeroPalabras];
  int aux = 0;
  while(numeroPalabras > 0){
    string palabra;
    cin >> palabra;
    int *pos;
    pos = buscar(palabra, matriz);
    posiciones[aux] = pos[0];
    posiciones[aux+1] = pos[1];
    aux += 2;
    numeroPalabras --;
  }
  for(int i = 0; i <= m+1; i++){
    for(int j = 0; j <= n+1; j++){
      cout <<matriz[i][j];
    }
    cout <<'\n';
  }

  casos--;
}


  return 0;
}
