#include <bits/stdc++.h>

using namespace std;

/*
N = 5

E
D E
C D E
B C D E
A B C D E



*/

void solve()
{
  // write code here
  int n;
  cin >> n;
  char ch = 'A' + n-1;
  for (int i = 1; i <= n; i++)
  {
    char ch1 = ch--;
    for (int j = 1; j <= i; j++)
    {
      cout << ch1++ << " ";
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
