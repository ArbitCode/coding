#include<iostream>
using namespace std;

int sum(int a, int b) { return a + b; }
//int sum(int &a, int &b) { return a + b; }
int sum(int *a, int *b) { return (*a) + (*b); }

int main(){
    int a, b;
    a = 10, b = 20;
    cout << "Sum: " << sum(a, b) << endl;
}
