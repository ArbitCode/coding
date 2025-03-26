#include<iostream>

int search_index(int *arr, const int &size, const int &x){
    for (int i = 0; i < size; i++) 
        if(arr[i] == x)
            return i;
    return -1;
}

int main(){
    int tt;
    std::cin >> tt;
    while(tt--){
        int size;
        std::cin >> size;
        int array[size];
        for (int i = 0; i < size; i++)
            std::cin >> array[i];
        int x;
        std::cin >> x;
        std::cout << "Searched Index: " << search_index(array, size, x) << std::endl;
    }
}
