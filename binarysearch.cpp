#include<iostream>
using namespace std;

int binarysearch(int n, int a[], int key){
    int start = 0;
    int end = n - 1;
    int mid = (start + end)/2;
    while(start<=end){
        if(a[mid] == key){
            return mid;
        }
        if(a[mid] > key){
            end = mid-1;
        }
        else{
            start = mid + 1;
        }
        mid = (start+end)/2;
    }
    return -1;
}

int main(){
    int a[] = {1,2,3,4,5,6,7};
    int key = 2;
    cout << binarysearch(7, a, key);
}