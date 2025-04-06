#include <bits/stdc++.h>

using namespace std;
/*
N = 5
12345
1234
123
12
1


*/ 

void solve()
{
  // write code here
  int n;
  cin >> n;
  for (int i = 0; i < n; i++){
    for (int j = 0; j < n - i; j++){
      std::cout << j + 1;
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
