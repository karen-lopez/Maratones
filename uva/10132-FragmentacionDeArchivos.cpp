#include<bits/stdc++.h>
using  namespace std;


string archivoFragmentado(vector< pair<int, string> > trozos, int sizePatron){
  vector<string> combinaciones;
  vector<string> multipleRespuesta;
  //caso mas simple
  if(trozos.size()==2) return (trozos[0].second+trozos[1].second);
  //comprobamos todos los posibles patrones
  for(int i = 0; i < trozos.size(); i++){
    vector<string> combinacionesTemporal;
    for(int j = i+1; j < trozos.size(); j++){
      if((trozos[i].first + trozos[j].first) == sizePatron){
        //se toman las 2 posibles combinaciones para cada patron
        string patron1 = trozos[i].second+trozos[j].second;
        string patron2 = trozos[j].second+trozos[i].second;
        //evitar patrones repetidos
        if(patron1 == patron2) patron2 = "-1";
        //agregamos los primeros patrones a la lista sin repetir patrones
        if(i == 0){
          for(int k = 0; k < combinaciones.size(); k++){
            if(combinaciones[k] == patron1) patron1 = "-1";
            if(combinaciones[k] == patron2) patron2 = "-1";
          }
          if(patron1 != "-1") combinaciones.push_back(patron1);
          if(patron2 != "-1") combinaciones.push_back(patron2);
        }
        //agregamos a la lista temporal todos los patrones que coincidad con los patrones de la
        //permutacion anterior, sin agregar repetidos
        else{
          //evita repetidos
          for(int k = 0; k < combinacionesTemporal.size(); k++){
            if(combinacionesTemporal[k] == patron1) patron1 = "-1";
            if(combinacionesTemporal[k] == patron2) patron2 = "-1";
          }
          //agrega patrones
          if(patron1 != "-1" || patron2 != "-1"){
            for(int k = 0; k < combinaciones.size(); k++){
              if(combinaciones[k] == patron1)combinacionesTemporal.push_back(patron1);
              if(combinaciones[k] == patron2)combinacionesTemporal.push_back(patron2);
            }
          }

        }
      }
    }
    /*for(int k = 0; k < combinaciones.size(); k++){
      std::cout << " c " <<combinaciones[k]<< '\n';
    }
    for(int k = 0; k < combinacionesTemporal.size(); k++){
      std::cout << " t " <<combinacionesTemporal[k]<< '\n';
    }*/
    //cuando haya un solo elemento en la lista temporal es porque hayamos el patron
    if(combinacionesTemporal.size() == 1) return combinacionesTemporal[0];
    else {
      if(combinacionesTemporal.size() > 1) combinaciones = combinacionesTemporal;
    }
    multipleRespuesta = combinacionesTemporal;
  }
  return  multipleRespuesta[0];
}

int main(){

int casos;
cin>>casos;
//siempre poner cin.ignore() si se va a usar despues un getline
cin.ignore();
string x;
//captura el espacio en blanco inicial
getline(cin, x,'\n');

while(casos > 0){
  vector< pair<int, string> > trozos;
  string trozo;

  //guarda todo los trozos y sus tamaños en un vector
  while(getline(cin, trozo, '\n')){
    if(trozo.size() < 1) break;
    trozos.push_back(make_pair(trozo.size(),trozo));
    //cout<<trozo<<endl;
  }
  int sizePatron = 0;
  for(int i = 0; i < trozos.size(); i++){
    sizePatron += trozos[i].first;
  }
  //calcula el tamaño del patron que estamos buscando
  sizePatron = sizePatron / (trozos.size()/2);
  //cout << "tamaño " <<sizePatron<< '\n';

  string patron = archivoFragmentado(trozos, sizePatron);
  cout<<patron<<endl;
  if(casos > 1)cout<<endl;
  casos--;
}

  return 0;
}
