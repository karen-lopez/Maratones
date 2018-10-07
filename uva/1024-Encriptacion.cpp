#include <bits/stdc++.h>

using namespace std;

int main(void){

   int n;
   string x;
   string cadena;
    cin >> n;
   for (int i=0;i<=n;i++){
       cin >> x;
       int tamaño=size(x);
       int aux = 0;
       for (int j=(tamaño-1);j>=0;j--){
        cadena[aux] = x[tamaño-1] + 3;
        aux ++;
       }
   }

    return 0;
}