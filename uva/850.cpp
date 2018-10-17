#include <bits/stdc++.h>
using namespace std;

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

bool esClave(string linea, map<char,char> alfabeto){
  int size = linea.size();
  string clave = "the quick brown fox jumps over the lazy dog";
  if(size == 43){
    for(int i = 0; i < linea.size(); i++){
      if((alfabeto[linea[i]] != ' ') || (linea[i] == ' ') ){
        if(alfabeto[linea[i]] != clave[i]) return false;
      }else alfabeto[linea[i]] = clave[i];
    }
    return true;
  } else return false;
}

map<char,char> cambiarAlfabeto(map<char,char> alfabeto, string linea){
  string clave = "the quick brown fox jumps over the lazy dog";
  for(int i = 0; i < linea.size(); i++){
    alfabeto[linea[i]] = clave[i];
  }
  return alfabeto;
}

string descifrar(map<char,char> alfabeto, string linea){
  for(int i = 0; i < linea.size(); i++){
    linea[i] = alfabeto[linea[i]];
    cout<<linea[i];
  }
  return linea;
}

int main(){
  map<char,char> alfabetoVacio ={{'a',' '},{'b',' '},{'c',' '},{'d',' '},{'e',' '},{'f',' '},{'g',' '},{'h',' '},{'i',' '},
  {'j',' '},{'k',' '},{'l',' '},{'m',' '},{'n',' '},{'o',' '},{'p',' '},{'q',' '},{'r',' '},{'s',' '},
  {'t',' '},{'u',' '},{'v',' '},{'w',' '},{'x',' '},{'y',' '},{'z',' '},{' ',' '}};
  int casos;
  cin>>casos;
  cin.ignore();
  cin.ignore();
  while(casos > 0){
    string linea;
    bool modAlfabeto = false;
    vector <string> lineas;
    map<char,char> alfabeto = alfabetoVacio;
    while(getline(cin, linea, '\n')){
        if(linea == "") break;
        lineas.push_back(linea);
        if(!modAlfabeto){
          if(esClave(linea, alfabeto)){
            alfabeto = cambiarAlfabeto(alfabeto, linea);
            modAlfabeto = true;
          }
        }
        /*/tokenizar
        stringstream ss(linea);
        string s;
        while (getline(ss, s, ' ')) {
         palabras.push_back(s);
       }*/
        //palabras.push_back("**");
    }

    if(modAlfabeto){
      for(int i = 0; i < lineas.size(); i++){
        lineas[i] = descifrar(alfabeto,lineas[i]);
        cout<<endl;
      }
    }else cout<<"No solution."<<endl;

    if(casos > 1)cout<<endl;
    casos--;
  }

  return 0;
}
