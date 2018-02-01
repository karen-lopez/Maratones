#include <bits/stdc++.h>

int mcd( int a, int b){

    if(b==0) return a;

    return mcd(b, a%b);
}

int main(void){

  int N, F1, F2;

  scanf("%d", &N);

  while (N > 0) {

    scanf("%d %d", &F1, &F2);

    int result = mcd(F1,F2);

    printf("%d\n", result);

    N--;
  }

  return 0;
}

/*Funcion que halla y devuelve el mcd mediante el Algoritmo de Euclides
  de forma iterativa
int mcd_iter (int m, int n)
{
	int r;

	while(r!=0)
	{
		r=m%n;
		m=n;
		n=r;
	}
	return(m);   m es el ultimo resto no nulo
} */
