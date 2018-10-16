#include<bits/stdc++.h>
using  namespace std;

//busca una palabra en una matriz y retorna la posicion donde encontro que empezaba la palabra
pair<int,int> buscar(string palabra, vector<vector <char> > matriz, int filas, int columnas){
  pair<int,int> pos(-1,-1);
  int longitudPalabra = palabra.size();

  for(int i = 1; i <= filas; i++){  //recorre las filas
    for(int j = 1; j <= columnas; j++){ //recorre las columnas
      int k = 0;
      if(matriz[i][j] == palabra[k]){  //busca el primer caracter de la palabra
        //busca hacia ABAJO
        if((i + (longitudPalabra-1)) <= filas){
          k = 1;
          while((k < longitudPalabra) && matriz[i+k][j] == palabra[k]) k++;
          if(k == longitudPalabra){
            pos = make_pair(i,j);
            return pos;
          }
        }
        //ARRIBA
        if((i - (longitudPalabra-1)) >= 1){
          k = 1;
          while((k < longitudPalabra) && matriz[i-k][j] == palabra[k]) k++;
          if(k == longitudPalabra){
            pos = make_pair(i,j);
            return pos;
          }
        }
        //IZQUIERDA
        if((j - (longitudPalabra-1)) >= 1){
          k = 1;
          while((k < longitudPalabra) && matriz[i][j-k] == palabra[k]) k++;
          if(k == longitudPalabra){
            pos = make_pair(i,j);
            return pos;
          }
        }
        //DERECHA
        if((j + (longitudPalabra-1)) <= columnas){
          k = 1;
          while((k < longitudPalabra) && matriz[i][j+k] == palabra[k]) k++;
          if(k == longitudPalabra){
            pos = make_pair(i,j);
            return pos;
          }
        }
        //SUPERIOR-IZQUIERDA
        if( ((i - (longitudPalabra-1) ) >= 1) && ( (j - (longitudPalabra-1) ) >= 1)){
          k = 1;
          while((k < longitudPalabra) && matriz[i-k][j-k] == palabra[k]) k++;
          if(k == longitudPalabra){
            pos = make_pair(i,j);
            return pos;
          }
        }
        //SUPERIOR-DERECHA
        if( ((i - (longitudPalabra-1) ) >= 1) && ( (j + (longitudPalabra-1) ) <= columnas)){
          k = 1;
          while((k < longitudPalabra) && matriz[i-k][j+k] == palabra[k]) k++;
          if(k == longitudPalabra){
            pos = make_pair(i,j);
            return pos;
          }
        }
        //INFERIOR-IZQUIERDA
        if( ((i + (longitudPalabra-1) ) <= filas) && ( (j - (longitudPalabra-1) ) >= 1)){
          k = 1;
          while((k < longitudPalabra) && matriz[i+k][j-k] == palabra[k]) k++;
          if(k == longitudPalabra){
            pos = make_pair(i,j);
            return pos;
          }
        }
        //INFERIOR-DERECHA
        if( ((i + (longitudPalabra-1) ) <= filas) && ( (j + (longitudPalabra-1) ) <= columnas)){
          k = 1;
          while((k < longitudPalabra) && matriz[i+k][j+k] == palabra[k]) k++;
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
      //convertir todos los caracteres a minusculas
      if(caracter <= 90) caracter += 32;
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
    //convertir palabra toda a minuscula
    for(int i = 0; i < palabra.size(); i++) if(palabra[i] <= 90) palabra[i] += 32;
    posiciones.push_back(buscar(palabra, matriz, m, n));
    numeroPalabras --;
  }
  //imprime vector de posiciones
  for (int i=0; i<posiciones.size(); ++i){
    pair<int,int> pos = posiciones[i];
    cout <<pos.first<<" "<<pos.second<<'\n';
  }

  casos--;
  if(casos > 0) cout <<'\n';
}


  return 0;
}
