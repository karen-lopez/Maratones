#include <bits/stdc++.h>

using namespace std;

int main(void){

  int N, A = 0, M = 0, D = 0;

  scanf("%d", &N);

  A = N/365;
  N = N - (A*365);
  M = N/30;
  D = N -(M*30);



  printf("%d ano(s)\n%d mes(es)\n%d dia(s)\n", A, M, D );

  return 0;
}
