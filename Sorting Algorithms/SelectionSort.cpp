
#include <iostream>
using namespace std;
void selection_sort(int arr[], int n){
    for(int i = 0; i<n-1; i++){
        int minIndex = i;
        for(int j = i+1; j<n; j++){
            if(arr[j] < arr[minIndex]){
                minIndex = j;
            }
        }
        swap(arr[i], arr[minIndex]);
    }
}

int main(){
    int arr[] = {1,4,5,0,25,14,2,3};
    int n = 8;
    selection_sort(arr, n);
    for(int i = 0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}