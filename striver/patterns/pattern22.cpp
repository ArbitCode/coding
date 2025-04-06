#include <bits/stdc++.h>

using namespace std;
atomic<bool> done{false};

const int TIME_LIMIT_TEST = 2;

/*
N = 5
6     6 6 6 6 6 6 6 6 6   6
6 5     5 5 5 5 5 5 5   5 6
6 5 4     4 4 4 4 4   4 5 6
6 5 4 3     3 3 3   3 4 5 6
6 5 4 3 2    2    2 3 4 5 6
6 5 4 3 2 1       2 3 4 5 6
6 5 4 3 2    2    2 3 4 5 6
6 5 4 3   3 3 3     3 4 5 6
6 5 4    4 4 4 4 4    4 5 6
6 5   5 5 5 5 5 5 5     5 6
6   6 6 6 6 6 6 6 6 6     6



5 5 5 5 5 5 5 5 5 
5 4 4 4 4 4 4 4 
5 4 3 3 3 3 3 
5 4 3 2 2 2 
5 4 3 2 1 
5 4 3 2 2 2 
5 4 3 3 3 3 3 
5 4 4 4 4 4 4 4 
5 5 5 5 5 5 5 5 5 


5
4 5
3 4 5
2 3 4 5 

3 4 5
4 5
5

2*n -1;


*/

void solve()
{
  int n;
  cin >> n;
  /*Write Code Here*/
  for(int i = 1; i <= n; i++){
    int p = n;
    for (int j = 1; j <= i; j++)
    {
      cout << p-- << " ";
    }
    p++;
    for (int j = 1; j <= 2 * (n - i); j++)
    {
      cout << p << " ";
    }
    int k = n - i + 2;
    for(int j = 2; j <= i; j++)
    cout << k++ << " ";
      cout << "\n";
  }

  for (int i = n - 1; i >= 1; i--)
  {
    int p = n;
    for (int j = 1; j <= i; j++)
    {
      cout << p-- << " ";
    }
    p++;
    for (int j = 1; j <= 2 * (n - i); j++)
    {
      cout << p << " ";
    }

    int k = n - i + 2;
    for (int j = 2; j <= i; j++)
      cout << k++ << " ";

    cout << "\n";
  }

  /*Code End Here*/

  done = true;
}

void timer_thread(int time_limit)
{
  for (int elapsed = 1; elapsed <= time_limit; elapsed++)
  {
    this_thread::sleep_for(chrono::seconds(1));
    if (done)
      return;
  }
  if (!done)
  {
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
