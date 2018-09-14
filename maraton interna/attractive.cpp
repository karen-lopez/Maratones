#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
long int S[100001];

long int solver(long int K, long int N) {
  long int sum = 0, ans = 0, aux = 0;
  cout << "QUERRY ------- " << K << endl;
  for (long int i = 0; i < N; i++) {
      if (i != 0)  sum = sum -  S[i-1];
      else sum = 0;
    for (long int j = aux; j <= N ; j++) {
      if ( j == N-1 && ans == 0 && S[j] != K) return 0;

      cout << " i --" << i << endl;
      cout << " j --" << j << endl;
      if (j < N) sum += S[j];
      cout << "sum " << sum << endl;

      if (K == sum) {
        ans++;
      }

      if (sum > K){
        aux = j + 1;
        if (aux == i + 1) aux += 1;
        cout << "aux " << aux << endl;
        break;
      }

    }
  }
  // cout << "ans " << ans << endl;
  return ans;
}

int main(void) {
  int T;
  long int N, Q, K, ans;
  vector<long int> v;
  cin >> T;
  while (T--) {
    v.clear();
    cin >> N >> Q;
    for (long int i = 0; i < N; i++) {
      cin >> S[i];
    }
    for (long i = 0; i < Q; i++) {
      cin >> K;
      ans = solver(K, N);
      v.push_back(ans);
    }
    for (long int i = 0; i < v.size(); i++) {
      cout << v[i];
      if (i != v.size() - 1) cout << " ";
    }
    cout << endl;
  }
  return 0;
}
