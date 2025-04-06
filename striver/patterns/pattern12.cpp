#include <bits/stdc++.h>

using namespace std;

/*
N = 5

1        1
12      21
123    321
1234  4321
1234554321



L1 : 1, 8, 1
L2 : 2, 6, 2
L3 : 3, 4, 3
L4 : 4, 2, 4
L5 : 5, 0, 5

space : 2*(N-i);



*/

void solve()
{
  // write code here
  int n;
  cin >> n;
  for (int i = 1; i <= n; i++){
    // number
    for (int j = 1; j <= i; j++)
      std::cout << j;
    // space
    for (int j = 1; j <= 2 * (n - i); j++)
      cout << " ";
    // number
    for (int j = i; j >= 1; j--)
      cout << j;
    std::cout << "\n";
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
