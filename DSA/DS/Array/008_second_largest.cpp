#include <climits>
#include <iostream>
#include <chrono>
using namespace std;

int secondLargest(const int *array, const int & size){
    if(size < 2)
        return array[0];
    int res = array[0]; // max
    int res2 = (array[0] == array[1]) ? array[0] : std::min(array[0], array[1]);
    for (int i = 1; i < size; i++) 
        if(array[i] > res)
        {
            res2 = res;
            res = array[i];
        }else if(array[i] > res2 && array[i] != res){
            res2 = array[i];
        }
    return res2;
}

void solve()
{
    // write code here
    int size;
    cin >> size;
    int array[size];
    for (int i = 0; i < size; i++)
        cin >> array[i];
    std::cout << "Second largest: " << secondLargest(array, size) << std::endl;
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
