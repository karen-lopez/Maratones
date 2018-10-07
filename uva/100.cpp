#include<bits/stdc++.h>
using  namespace std;


long Collatz(long n){
	if (n == 1) return 1;
	if(n % 2 == 0) n = n/2;
	else n = 3*n + 1;

	return 1 + Collatz(n);
}

int main(){

	long a, b;

	while(cin>>a>>b){
		long result = LONG_MIN;
		long menor = a, mayor = b;
		if (a > b) {
			menor = b;
			mayor = a;
		}
		for(int i = menor; i <= mayor; i++){
			long aux = Collatz(i);
			if(aux > result) result = aux;
		}
		cout << a << " " << b << " "<<result<<endl;

	}

	return 0;
}
