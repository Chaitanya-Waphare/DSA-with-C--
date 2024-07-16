#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int partition(int arr[], int s, int e) {
    int pivot = arr[s];
    int count = 0;
    for(int i = s+1; i<=e; i++) {
        if(arr[i] <= pivot) {
            count++;
        }
    }

    int PivotIndex = s + count;
    swap(arr[s], arr[PivotIndex]);

    int i = s;
    int j = e;

    while(i < PivotIndex && j > PivotIndex) {
        while(arr[i] <= arr[PivotIndex]) {
            i++;
        }
        while(arr[j] > arr[PivotIndex]) {
            j--;
        }
        if(i < PivotIndex && j > PivotIndex) {
            swap(arr[i++], arr[j--]);
        }
    }
    return PivotIndex;
}

void quickSort(int arr[], int s, int e) {
    if(s >= e) {
        return;
    }
    int pi = partition(arr, s, e);
    quickSort(arr, s, pi-1);
    quickSort(arr, pi+1, e);
}

int main()
{
    int arr[9] = {3,4,1,2,6,8,9,5,7};
    quickSort(arr, 0, 8);
    for(int i = 0; i<9; i++) {
        cout << arr[i] << " ";
    }cout<<endl;
    
    return 0;
}