#include<iostream>
#include<vector>
using namespace std;

vector<int> print_like_a_spiral(vector<vector<int>>& arr, int nRows, int mCols) {
    vector<int> temp;
    int StartRow = 0;
    int StartCol = 0;
    int EndRow = nRows-1;
    int EndCol = mCols-1;

    int total = nRows*mCols;
    int count = 0;

    while(count < total){
        // Left to Right
        for(int i = StartCol; i<=EndCol && count < total; i++) {
            temp.push_back(arr[StartRow][i]);
            count++;
        }
        StartRow++;

        // Top to Bottom
        for(int i = StartRow; i<=EndRow && count < total; i++){
            temp.push_back(arr[i][EndCol]);
            count++;
        }
        EndCol--;

        // Left to Right
        for(int i = EndCol; i>=StartCol && count < total; i--){
            temp.push_back(arr[EndRow][i]);
            count++;
        }
        EndRow--;

        // Bottom to Top
        for(int i = EndRow; i>=StartRow && count < total; i--){
            temp.push_back(arr[i][StartCol]);
            count++;
        }
        StartCol++;
    }
    return temp;
}


int main() {
    vector<vector<int>> arr(3, vector<int>(3)); 
    for(int i = 0; i<3; i++){
        for(int j = 0; j<3; j++){
            cin>>arr[i][j];
        }
    }
    vector<int> result = print_like_a_spiral(arr, 3, 3);
    for(int i = 0; i<result.size(); i++){
        cout<< result[i] << " ";
    }
    return 0;
}