#include<iostream>
#include<bits/stdc++.h>
using namespace std;

bool binary_search(int arr[], int s, int e, int target) {
    int m = s + (e-s)/2;
    if(arr[m] == target) {
        return true;
    }
    if(e<s) {
        return false;
    }
    else if(target > arr[m]) {
        return binary_search(arr, m+1, e, target);
    }
    else{
        return binary_search(arr, s, m-1, target);
    }
}

int main()
{
    int arr[5] = {1,2,3,4,5};
    cout << binary_search(arr, 0, 4, 2) << endl;
    
    return 0;
}