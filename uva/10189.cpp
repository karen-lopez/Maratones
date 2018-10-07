#include<bits/stdc++.h>
using  namespace std;

int main(){

  int n, m;
  char c;
  int cont = 1;

  cin >> n >> m;
  while(n != 0 && m != 0){
    int auxn = 1, auxm = 1;
    int solve[n+2][m+2] = {0};

      for(int i = 1; i <= n; i++ ){

        for(int j =1; j <= m; j++){

            cin >> c;
            if (c == '*'){

              solve[i][j] = INT_MIN;
              solve[i+1][j] += 1;
              solve[i-1][j] += 1;
              solve[i+1][j+1] += 1;
              solve[i+1][j-1] += 1;
              solve[i-1][j+1] += 1;
              solve[i-1][j-1] += 1;
              solve[i][j+1] += 1;
              solve[i][j-1] += 1;
            }
        }
      }

      cout << "Field #" << cont<< ":" << endl;
      for(int i = 1; i <= n; i++ ){

        for(int j =1; j <= m; j++){

          if(solve[i][j] >= 0) cout << solve[i][j];
          else cout <<'*';
        }

        cout << endl;
      }
      cout <<endl;

      cin >> n >> m;
      cont += 1;

  }


  return 0;
}
