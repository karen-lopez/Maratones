#include <bits/stdc++.h>


using namespace std;


int main(void){

	int A,B,C,aux, mayor;
	
	while(scanf("%d %d %d",&A, &B, &C) != EOF){

		aux = (A + B + abs(A-B))/2;
		mayor =(aux + C + abs(aux-C))/2;
		printf("%d eh o maior\n",mayor); 
	}
}
    
