#include<iostream>
#include<vector>
using namespace std;
    // Write your code here
    int FirstOccurence(vector<int>& arr, int n, int k)
    {
        int start = 0;
        int end = n - 1;
        int mid = start + (end-start)/2;
        int ans = -1;
        while(start<=end){
            if(arr[mid] == k){
                ans = mid;
                end = mid - 1;
            }
            
            if(arr[mid] > k){
                end = mid-1;
            }
            if(arr[mid] < k){
                start = mid + 1;
            }
            mid = start + (end-start)/2;
            
        }
        return ans;
    }
    int LastOccurence(vector<int>& arr, int n, int k)
    {
        int start = 0;
        int end = n - 1;
        int mid = start + (end-start)/2;
        int ans = -1;
        while(start<=end){
            if (arr[mid] == k) {
                ans = mid;
                start = mid + 1;
            }
            if(arr[mid] > k){
                end = mid-1;
            }
            if(arr[mid] <= k){
                start = mid + 1;
            }
            mid = start + (end-start)/2;
        }
        return ans;
    }

    pair<int, int> firstAndLastPosition(vector<int>& arr, int n, int k)
    {
        pair<int, int> p;
        p.first = FirstOccurence(arr, n, k);
        p.second = LastOccurence(arr, n, k);
        return p;
    }