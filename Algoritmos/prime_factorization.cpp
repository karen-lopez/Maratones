#include<bits/stdc++.h>
using namespace std;
#define endl '\n'

bool prime_factorization(long x){
  long i;
  long c;

  c = x;
  if (c == 2) return true;
  while( (c % 2) == 0){
      return false;
  }

  i = 3;
  while(i <= (sqrt(c) + 1)){
    if((c % i) == 0){
      return false;
    }
    else i = i + 2;
  }

  if (c > 1) return true;
}

int main(){
  int a;
  cin >> a;
  cout << prime_factorization(a) <<endl;
}
