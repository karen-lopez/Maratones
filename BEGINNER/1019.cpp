#include <bits/stdc++.h>

using namespace std;

int main(void){

  int N, H = 0, M = 0, S = 0;

  scanf("%d", &N);

  int n = N/60;
  if(n>59){
    H = n/60;
    M = n - (H*60);
    S = N - (n*60);
  }
  else {
    M = n;
    S = N - (n*60);
  }

  printf("%d:%d:%d\n", H, M, S );

  return 0;
}
