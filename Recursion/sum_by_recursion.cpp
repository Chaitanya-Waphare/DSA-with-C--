#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int summation(int arr[], int n) {
    if(n == 0) {
        return 0;
    }
    int sum = arr[0] + summation(arr+1, n-1);
    return sum;
}
int main()
{
    int arr[5] = {2, 3, 5, 6, 1};
    int sum = summation(arr, 5);
    cout << sum << endl;
    return 0;
}