#include <bits/stdc++.h>

using namespace std;

/*
N = 4

*******
 ***** 
  ***  
   *   


*/

void solve()
{
  // write code here
  int N;
  cin >> N;
  for (int i = 1; i <= N; i++){
    for (int j = 1; j < i; j++){
      std::cout << " ";
    }
    for (int j = 1; j < 2*(N - i + 1); j++){
      std::cout << "*";
    }
    for (int j = 1; j < i; j++)
    {
      std::cout << " ";
    }
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
