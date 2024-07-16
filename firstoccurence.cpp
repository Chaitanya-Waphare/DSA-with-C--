#include<iostream>
using namespace std;

int FirstOccurence(int n, int a[], int key){
    int start = 0;
    int end = n - 1;
    int mid = (start + end)/2;
    int ans = -1;
    while(start<=end){
        if(a[mid] == key){
            ans = mid;
            end = end - 1;
        }
        if(a[mid] > key){
            end = mid-1;
        }
        if(a[mid] < key){
            start = mid + 1;
        }
        mid = (start+end)/2;
    }
    return ans;
}

int main(){
    int a[] = {1,2,2,2,2,2,7};
    int key = 2;
    cout << FirstOccurence(7, a, key);
}