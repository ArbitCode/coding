#include <bits/stdc++.h>

using namespace std;

void solve()
{
  // write code here
  int n;
  cin >> n;
  for (int i = 1; i <= n; i++){
    for (int j = 1; j <= i; j++){
      if(i%2==0){
        if(j%2){
          cout << 0;
        }
        else{
          cout << 1;
        }
      }
      else{
        if (j % 2)
        {
          cout << 1;
        }
        else
        {
          cout << 0;
        }
      }
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
