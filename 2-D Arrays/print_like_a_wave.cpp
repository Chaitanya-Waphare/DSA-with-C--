#include<iostream>
#include<vector>
using namespace std;

vector<int> print_like_a_wave(vector<vector<int>> arr, int nRows, int mCols) {
    vector<int> temp;

    for(int i = 0; i<mCols; i++){
        if(i%2 == 0){
            for(int j = 0; j<nRows; j++) {
                temp.push_back(arr[j][i]);
            }
        }
        else{
            for(int j = nRows-1; j>=0; j--){
                temp.push_back(arr[j][i]);
            }
        }
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
    vector<int> result = print_like_a_wave(arr, 3, 3);
    for(int i = 0; i<result.size(); i++){
        cout<< result[i] << " ";
    }
    return 0;
}