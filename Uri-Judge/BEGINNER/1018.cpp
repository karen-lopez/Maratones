#include <bits/stdc++.h>

using namespace std;

int main(void){

  int N;
  int billetes[]= {100, 50, 20, 10, 5, 2, 1};

  scanf("%d",&N );
  printf("%d\n",N );

  for(int i = 0; i<7; i++){

    int n = N/billetes[i];
    if(n > 0)   N = N-(billetes[i]*n);
    int billete = billetes[i];
    printf("%d nota(s) de R$ %d,00\n", n, billete );

  }

  return 0;
}
