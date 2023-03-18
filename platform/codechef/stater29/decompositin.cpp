#include <bits/stdc++.h>
using namespace std;
#define ll long long
const ll INF = 1e9 + 7;


int main()
{
  
  long long n, m;
  cin >> n >> m;
  vector<long long> A(n);
  for (int i = 0; i < n; i++)
    cin >> A[i];
  while (m--)
  {
    long long c, x;
    cin >> c >> x;
    vector<long long> u(2 * x);
 
    for (int i = 0; i < 2 * x; i++)
      cin >> u[i];
    long long temp = A[c - 1];
    A[c - 1] = 0;
    for (int i = 0; i < u.size() - 1; i += 2)
    {
      A[u[i + 1] - 1] = (A[u[i + 1] - 1] + temp * u[i]) % INF;
    }
  }
  for (auto x : A)
    cout << x << "\n";
  return 0;
}