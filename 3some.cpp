#include<iostream>
#include<vector>
using namespace std;

int binarysearch(int lower, int upper, int a[], int key){
    int start = lower;
    int end = upper;
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
    if(a[mid] >key){
        return -1;
    }
    return -2;
}

void threesome( int n, int arr[]){
    int upperbound = n-1;
    int lowerbound = 0;
    while(lowerbound < upperbound-1){
        int temp = binarysearch(lowerbound+1, upperbound-1, arr, -arr[lowerbound]-arr[upperbound]);
        if(temp >= 0){
            cout<<arr[lowerbound]<<" "<<arr[temp]<<" "<<arr[upperbound]<<endl;
            lowerbound++;
            upperbound--;
        }
        else if(temp == -1){
            upperbound--;
        }
        else if(temp == -2){
            lowerbound++;
        }
    }

}

int main(){
    int arr[] = {-3,-1, 0, 1, 2};
    threesome(5, arr);
}