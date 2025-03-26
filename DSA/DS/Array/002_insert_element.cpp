#include<iostream>
using namespace std;

void insert_at(int *arr, const int &x, const int &size, const int &pos)
{
    for (int i = size - 1; i >= pos - 1; i--){
        arr[i + 1] = arr[i];
    }
    arr[pos-1] = x;
}
int main(){
    int size;
    cin >> size;
    int arr[size+1];
    for (int i = 0; i < size; i++)
        cin >> arr[i];

    int x;
    cin >> x;
    int p;
    cin >> p;
    insert_at(arr, x, size, p);
    std::cout << "After insert: ";
    for (int i = 0; i < size + 1; i++)
        cout << arr[i] << " ";
}
