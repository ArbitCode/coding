#include <chrono>
#include<iostream>
using namespace std;


void rotate_byNd(int *arr, const int &size, const int &d){
    for(int i = 0; i < d; i++){
        int x = arr[size - 1];
        for (int i = size - 2; i >= 0; i--)
            arr[i + 1] = arr[i];
        arr[0] = x;
    }
    for (int i = 0; i < size; i++)
        cout << arr[i] << " ";
    std::cout << std::endl;
}

void rotate_copy_N(int *arr, const int &size, const int &d){
    int copy[size];
    int j = 0;
    for (int i = size - d; i < size; i++)
        copy[j++] = arr[i];
    for (int i = 0; i < size - d; i++)
        copy[j++] = arr[i];
    for (int i = 0; i < size; i++)
        std::cout << copy[i] << " ";
    std::cout << std::endl;
}

void rotate_byIndex(int *arr, const int& size, const int &d){
    for (int i = 0; i < size; i++){
        arr[i] = arr[(i + d) % size];
    }
    for (int i = 0; i < size; i++)
        cout << arr[i] << " ";
    std::cout << std::endl;
}

void rotate(int *arr, int start, int end){
    while (start < end)
    {
        std::swap(arr[start++], arr[end--]);
    }
}

void rotate_byReverse(int *arr, const int &size, const int &d){
    rotate(arr, 0, size - d);
    rotate(arr, size - d, size - 1);
    rotate(arr, 0, size - 1);
    for (int i = 0; i < size; i++)
        cout << arr[i] << " ";
    std::cout << std::endl;
}

void solve(){
    int size;
    cin >> size;
    int arr[size];
    for (int i = 0; i < size; i++)
        cin >> arr[i];
    int d;
    cin >> d;

    //rotate_byNd(arr, size, d);
    //rotate_copy_N(arr, size, d);
    //rotate_byIndex(arr, size, d);
    rotate_byReverse(arr, size, d);
}

void solve_tt(){
    int tt;
    cin >> tt;
    while (tt--)
    {
        solve();
    }
}
int main(){
    auto start_time = std::chrono::high_resolution_clock::now();
    solve_tt();
    auto end_time = std::chrono::high_resolution_clock::now();
    std::chrono::duration<double> duration = end_time - start_time;
    std::cout<< std::endl;
    std::cout << std::fixed << "Time: " << duration.count() << " seconds." << std::endl;
}
