#include <climits>
#include<iostream>
#include<vector>
using namespace std;
int delete_x(vector<int> &arr, const int &size, const int &x){
    int index;
    for (index = 0; index < size; index++)
        if(arr[index] == x)
            break;
    if(index == size)
        return size;
    for (int i = index; i < size-1; i++)
    {
        arr[i] = arr[i+1];
    }

    return size - 1;
}
int main(){
    int tt;
    cin >> tt;
    while(tt--){
        int size;
        cin >> size;
        vector<int> arr(size, -1);

        for (int i = 0; i < size; i++)
            cin >> arr[i];
        int x;
        cin >> x;
        size = delete_x(arr, size, x);
        for (int i = 0; i < size; i++)
            cout << arr.at(i) << " ";
        std::cout << std::endl;
    }
}
