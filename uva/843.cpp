#include<bits/stdc++.h>
using  namespace std;

void print( vector <string> & v )
{
  for (size_t n = 0; n < v.size(); n++)
    cout << "\"" << v[ n ] << "\"\n";
  cout << endl;
}

//si esta  un caracter en un vector return false
bool buscar(char c, vector<char> v){
  if(!v.empty()){
    for (vector<char>::iterator it = v.begin() ; it != v.end(); ++it){
      //cout<<" char "<<*it<<endl;
      if (*it == c) return false;
    }
    return true;
  }
  else return true;
}

//descifra una oracion utilizando un diccionario
map<char,char> superdescifrador(vector<string> diccionario, map<char,char> alfabeto, vector<string> palabras, vector<char> memoria){
  //asignacion de palabra del diccionario
  for(int i = 0; i < diccionario.size(); i++){
    int j= 0;
    if(diccionario[i].size() == palabras.back().size()){
      string cifrado = palabras.back();
      string descifrado = diccionario[i];
      map<char,char> alfabetoModificado = alfabeto;
      vector<char> memoriatemp = memoria;
      vector<string> auxPalabras = palabras;
      //comprueba que la palabra cifrada puede ser descifrada con la palabra actual del diccionario
      while(j < cifrado.size()){
        if(alfabetoModificado[cifrado[j]] != ' '){
          if(descifrado[j] != alfabetoModificado[cifrado[j]]) break;
        }
        else {
          if(buscar(descifrado[j], memoriatemp)){
            alfabetoModificado[cifrado[j]] = descifrado[j];
            memoriatemp.push_back(descifrado[j]);
          }
          else break;
        }
        j++;
      }
      if(j == cifrado.size()){
        auxPalabras.pop_back();
        //busca las otras palabras
        if(!auxPalabras.empty()){
          alfabetoModificado = superdescifrador(diccionario, alfabetoModificado, auxPalabras, memoriatemp);
        }
        if(alfabetoModificado['*'] != '*') return alfabetoModificado;
      }
    }
  }
  return {{'*','*'}};
}


int main(){
  int n;
  cin >> n;
  vector <string> diccionario(n);
  map<char,char> alfabetoVacio ={{'a',' '},{'b',' '},{'c',' '},{'d',' '},{'e',' '},{'f',' '},{'g',' '},{'h',' '},{'i',' '},
  {'j',' '},{'k',' '},{'l',' '},{'m',' '},{'n',' '},{'o',' '},{'p',' '},{'q',' '},{'r',' '},{'s',' '},
  {'t',' '},{'u',' '},{'v',' '},{'w',' '},{'x',' '},{'y',' '},{'z',' '},{' ',' '}};
  string linea;

  for(int i = 0; i < n; i++){
    string palabra;
    cin >> palabra;
    //elimina el \n para que getline no lo lea
    cin.ignore();
    diccionario[i] = palabra;
  }

  while(getline(cin, linea, '\n')){
    map<char,char> alfabeto = alfabetoVacio;
    //dividir la oracion en palabras
    vector <string> palabras;
    stringstream ss(linea);
    string s;
    while (getline(ss, s, ' ')) {
     palabras.push_back(s);
    }
    vector<char> memoria;
    alfabeto = superdescifrador(diccionario, alfabeto, palabras, memoria);

    for(int i = 0; i < linea.size(); i++){
      if(alfabeto['*'] != '*') linea[i] = alfabeto[linea[i]];
      else{
        if(linea[i] != ' ') linea[i] = '*';
      }
      cout <<linea[i];
    }
    cout<<endl;
  }

  return 0;
}
