#include <iostream>
#include <chrono>
#include <bits/stdc++.h>

using namespace std;

/*
1. figure out the number of lines to be printed?
    write outer loop on it;
2. Figure out what is happening at each line & try to connect with outer loop if possible,
    write inner loop on this basis.
3. execute the print statement when needed.
4. observ symmetry(optional)
*/

/*
problem : N*N matrix star pattern

*/

void solve()
{
  // write code here
  int N;
  cin >> N;

  for (int i = 0; i < N; i++){
    for (int j = 0; j < N; j++){
      std::cout << "*" << " ";
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
