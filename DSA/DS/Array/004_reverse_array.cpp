#include<iostream>

void reverse(int* arr, int start, int end){
    while(start < end){
        std::swap(arr[start++], arr[end--]);
    }
}

int main(){
    int tt;
    std::cin >> tt;
    while(tt--){
        int size;
        std::cin >> size;
        int arr[size];
        for (int i = 0; i < size; i++)
            std::cin >> arr[i];
        reverse(arr, 0, size - 1);
        for (int i = 0; i < size; i++){
            std::cout << arr[i] << " ";
        }
        std::cout << std::endl;
    }
}
