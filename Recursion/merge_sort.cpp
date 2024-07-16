#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void merge(int *arr, int s, int e) {
    int m = (s+e)/2;
    int len1 = m - s + 1;
    int len2 = e-m;

    int *first = new int[len1];
    int *second = new int[len2];

    int k = s;
    for(int i = 0; i<len1; i++) {
        first[i] = arr[k++];
    }
    k = m+1;
    for(int i = 0; i<len2; i++) {
        second[i] = arr[k++];
    }

    int fir = 0;
    int sec = 0;
    k = s;
    while(fir < len1 && sec < len2) {
        if(first[fir] < second[sec]) {
            arr[k++] = first[fir++];
        }
        else{
            arr[k++] = second[sec++];
        }
    }
    while(fir < len1) {
        arr[k++] = first[fir++];
    }
    while(sec < len2) {
        arr[k++] = second[sec++];
    }
}

void merge_sort(int *arr, int s, int e) {
    int m = (s+e)/2;
    if(s>=e) {
        return;
    }

    merge_sort(arr, s, m);
    merge_sort(arr, m+1, e);

    merge(arr, s, e);
}

int main()
{
    int arr[7] = {5, 6, 7 , 1, 2, 13, 15};
    int n = 7;
    merge_sort(arr, 0, n-1);
    for(int i = 0; i<n; i++) {
        cout<< arr[i] <<" ";
    }cout<<endl;
    
    return 0;
}