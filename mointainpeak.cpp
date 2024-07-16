 #include<iostream>
#include<vector>
using namespace std;
    int peakIndexInMountainArray(vector<int>& arr) {
        int s = 0;
        int e;
        e = arr.size() - 1;
        int mid = s + (e-s)/2;
        int ans = -1;
        while(s<=e){
            if(arr[mid]>arr[mid-1] && arr[mid]>arr[mid+1]){
                ans = mid;
            }
            else if(arr[mid]>arr[mid-1] && arr[mid]<arr[mid+1]){
                s = mid + 1;
            }
            else if(arr[mid]<arr[mid-1] && arr[mid]>arr[mid+1]){
                
                e = mid - 1;
            }
            mid = s + (e-s)/2;
        }
        return ans;
    }