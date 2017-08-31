#include <bits/stdc++.h>

using namespace std;

int main(void){

  int A, B, C, D;
  scanf("%d %d %d %d", &A, &B, &C, &D);

  if(B>C && D>A){
    if((C+D)>(A+B) && C>=0 && D>=0 && (A%2) == 0){
      printf("Valores aceitos\n");
      return 0;
    }
  }

  printf("Valores nao aceitos\n");

  return 0;
}
