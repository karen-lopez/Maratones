#include <bits/stdc++.h>

using namespace std;

int main(void){

  double N;
  double billetes[] = {100, 50, 20, 10, 5, 2, 1, 0.50, 0.25, 0.10, 0.05, 0.01};

  scanf("%lf", &N);
  printf("NOTAS:\n" );

  for(int i = 0; i<12; i++){

    int n =float(N/billetes[i]);
    if((int)n>0) N = N - (billetes[i]*n);
    if(i == 6) printf("MOEDAS:\n");
    if(i<6){
      printf("%d nota(s) de R$ %.2lf\n", n, billetes[i]);
    }
    else {
      printf("%d moeda(s) de R$ %.2lf\n", n, billetes[i]);
    }
    n=0;
  }



  return 0;
}
