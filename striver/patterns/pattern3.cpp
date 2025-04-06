#include <bits/stdc++.h>

using namespace std;
/*
N = 5

1
12
123
1234
12345

*/

void solve()
{
  // write code here
  int n;
  cin >>  n;
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j <= i; j++){
      std::cout << j+1;
    }
    cout << "\n";
  }
}

void solve_tt()
{
  int tt;
  cin >> tt;
  while (tt--)
  {
    solve();
  }
}
int main()
{
  auto start_time = std::chrono::high_resolution_clock::now();
  solve_tt();
  auto end_time = std::chrono::high_resolution_clock::now();
  std::chrono::duration<double> duration = end_time - start_time;
  std::cout << std::endl;
  std::cout << std::fixed << "Time: " << duration.count() << " seconds." << std::endl;
}
