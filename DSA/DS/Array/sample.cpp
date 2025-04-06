#include <bits/stdc++.h>

using namespace std;
atomic<bool> done{false};

const int TIME_LIMIT_TEST = 2;

/*




*/

void solve()
{
  /*Write Code Here*/







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
