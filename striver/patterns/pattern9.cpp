
#include <bits/stdc++.h>

using namespace std;

void solve()
{
  // write code here
  int n;
  cin >> n;
  // top
  for (int i = 1; i <= n; i++){
    //space
    for (int j = 1; j <= n - i; j++)
      cout << " ";
    // star
    for (int j = 1; j <= 2 * i - 1; j++)
      cout << "*";
    // space
    for (int j = 1; j <= n - i; j++)
      cout << " ";
    cout << "\n";
  }
  //bottom
  for (int i = 1; i <= n; i++){
    //space
    for (int j = 1; j < i; j++)
      cout << " ";
    // star
    for (int j = 1; j < 2 * (n - i+1); j++)
      cout << "*";
      // space
      for (int j = 1; j < i; j++)
        cout << " ";
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
