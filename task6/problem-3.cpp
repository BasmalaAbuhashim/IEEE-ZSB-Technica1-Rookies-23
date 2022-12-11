#include <bits/stdc++.h>
using namespace std;

int main(){
  long long n, m, i, rank;
  cin >> n;
  stack<long long> ranks;
  for (i = 0; i < n; i++) {
    cin >> rank;
    if (ranks.empty() || ranks.top() != rank)
      ranks.push(rank);
  }
  cin >> m;
  for (i = 0; i < m; i++) {
    cin >> rank;
    while (!ranks.empty() && rank >= ranks.top()) 
      ranks.pop();
    cout << (ranks.size() + 1) << endl;
  }
  return 0;
}
