#include<bits/stdc++.h>
using  namespace std;

//permutacion comun, por orden alfabetico
string permutar(string cadena1, string cadena2){
  string coincidencias;
  sort(cadena1.begin(), cadena1.end());
  sort(cadena2.begin(), cadena2.end());
  int i=0, j=0;
  while(i < cadena1.size()){
    if(cadena1[i] == cadena2[j]) {
      coincidencias.push_back(cadena1[i]);
      i++;
      j++;
    } else{
      if(cadena1[i] < cadena2[j]) i++;
      else{
        if(j < cadena2.size()) j++;
        else break;
      }
    }
  }
  return coincidencias;
}

int main(){
  string a, b;
 //debe guardar cadenas vacias tambien
  while(getline(cin, a, '\n')){
    getline(cin, b, '\n');
    //cout<<"a: "<<a<<" b: "<<b<<endl;
    string x = permutar(a, b);
    cout<<x<<endl;
  }

return 0;
}
