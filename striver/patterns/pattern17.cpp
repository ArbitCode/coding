#include <bits/stdc++.h>

using namespace std;

/*
N = 5

A
ABA
ABCBA
ABCDCBA
ABCDEDCBA

L1: 1 0
L2: 2 1
L3: 3 2
L4: 4 3
L5: 5 4



*/

void solve()
{
  // write code here
  int n;
  cin >> n;
  for (int i = 1; i <= n; i++){
    for (int j = 1; j <= n - i; j++){
      std::cout << " ";
    }
    char ch = 'A';
    for (int j = 1; j <= i; j++)
    {
      cout << ch++;
    }
    ch = ch - 2;
    for (int j = 1; j < i; j++)
    {
      cout << ch--;
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
