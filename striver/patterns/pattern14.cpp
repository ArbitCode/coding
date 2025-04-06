#include <bits/stdc++.h>

using namespace std;

/*
N = 5
A
AB
ABC
ABCD
ABCDE

*/

void solve()
{
  // write code here
  int n;
  cin >> n;
  for (int i = 1; i <= n; i++){
    char ch = 'A';
    for (int j = 1; j <= i; j++)
    {
      cout << ch;
      ch++;
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
