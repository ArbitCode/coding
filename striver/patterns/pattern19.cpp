#include <bits/stdc++.h>

using namespace std;
const int TIME_LIMIT_TEST = 1;
atomic<bool> done{false};

/*
N = 5

**********
****  ****
***    ***
**      **
*        *
*        *
**      **
***    ***
****  ****
**********



L1: 5 0 5
L2: 4 2 4
L3: 3 4 3
L4: 2 6 2
L5: 1 8 1



*/

void solve()
{
  // write code here
  int n;
  cin >> n;
  for (int i = n; i >= 1; i--){
    for (int j = 1; j <= i; j++){
      cout << "*";
    }
    for (int j = 1; j <= 2*(n-i); j++){
      cout << " ";
    }
      for (int j = 1; j <= i; j++)
      {
        cout << "*";
      }
      cout << "\n";
  }

  for (int i = 1; i <= n; i++)
  {
    for (int j = 1; j <= i; j++)
    {
      cout << "*";
    }
    for (int j = 1; j <= 2 * (n - i); j++)
    {
      cout << " ";
    }
    for (int j = 1; j <= i; j++)
    {
      cout << "*";
    }
    cout << "\n";
  }

  done = true;
}

void timer_thread(int time_limit){
  for(int elapsed = 1; elapsed <= time_limit; elapsed++)
  {
    this_thread::sleep_for(chrono::seconds(1));
    if(done) return;
  }
  if(!done){
    cerr << "\nTLE: Exiting...\n";
    std::exit(1);
  }
}

void solve_tt()
{
  int tt;
  cin >> tt;
  while (tt--)
  {
    auto start_time = std::chrono::high_resolution_clock::now();
    thread t1(solve);
    thread t2(timer_thread, TIME_LIMIT_TEST);
    t1.join();
    done = true;
    t2.join();
    auto end_time = std::chrono::high_resolution_clock::now();
    std::chrono::duration<double> duration = end_time - start_time;
    std::cout << std::endl;
    std::cout << std::fixed << "Time: " << duration.count() << " seconds." << std::endl;
  }
}
int main()
{
  solve_tt();
  return 0;
}
