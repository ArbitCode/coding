#include <iostream>
#include <chrono>
using namespace std;

int largest_index(int *arr, const int &size){
    int res = 0;
    for (int i = 1; i < size; i++)
        if(arr[i] > arr[res])
            res = i;
    return res;
}

void solve()
{
    // write code here
    int size;
    cin >> size;
    int arr[size];
    for (int i = 0; i < size; i++)
        cin >> arr[i];
    std::cout << "Largest: " << arr[largest_index(arr, size)] << std::endl;
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
