#include<bits/stdc++.h>
using  namespace std;

pair<int,int> buscar(string palabra, vector<vector <char> > matriz, int filas, int columnas){
  pair<int,int> pos(-1,-1);
  int longitudPalabra = palabra.size();

  for(int i = 1; i < filas; i++){
    for(int j = 1; j < columnas; j++){
      int k = 0;
      if(matriz[i][j] == palabra[k]){
        if((i + (longitudPalabra-1)) <= filas){
          k = 1;
          while(matriz[i+k][j] == palabra[k]){
            k++;
          }
          if(k == longitudPalabra){
            pos = make_pair(i,j);
            return pos;
          }
        }

        if((i - (longitudPalabra-1)) >= 1){
          k = 1;
          while(matriz[i-k][j] == palabra[k]){
            k++;
          }
          if(k == longitudPalabra){
            pos = make_pair(i,j);
            return pos;
          }
        }
      }

    }
  }
  return pos;
}


int main(){

int casos;
cin>>casos;
while(casos > 0){
  int m, n;
  cin>>m>>n;
  vector<vector< char > > matriz(m+2,vector<char>(n+2));
  //para evitar una matriz llena de basura en los bordes (solo para datos tipo char)
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
  vector< pair < int,int > > posiciones;
  int aux = 0;

  while(numeroPalabras > 0){
    string palabra;
    cin >> palabra;
    posiciones.push_back(buscar(palabra, matriz, m, n));
    numeroPalabras --;
  }
  //imprime vector de posiciones
  for (int i=0; i<posiciones.size(); ++i){
    pair<int,int> pos = posiciones[i];
    cout <<pos.first<<" "<<pos.second<<'\n';
  }

  casos--;
}


  return 0;
}
