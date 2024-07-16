#include <iostream>
using namespace std;


void BubbleSort(int arr[], int n){
    for(int i = 1; i<n; i++){
        for(int j = 0; j<n-i; j++){
            if(arr[j] > arr[j+1]){
                swap(arr[j], arr[j+1]);
            }
        }
    }
}

int main(){
    int arr[] = {1,4,5,0,25,14,2,3};
    int n = 8;
    BubbleSort(arr, n);
    for(int k = 0; k<n; k++){
        cout<<arr[k]<<" ";
    }
    cout<<endl;
}