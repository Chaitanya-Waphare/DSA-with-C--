#include<iostream>
#include<vector>
using namespace std;

void printarray(vector<vector<int>> arr, int n, int m) {
    for(int i = 0; i<n; i++){
        for(int j = 0; j<m; j++){
            cout << arr[i][j] << " ";
        }
        cout<<endl;
    }
}

int main() {
    // vector<vector<int>> arr;
    vector<vector<int>> arr(3, vector<int>(3)); 
    for(int i = 0; i<3; i++){
        for(int j = 0; j<3; j++){
            cout<< "Enter " << i << "th and "<< j <<"th value"<<endl;
            cin>>arr[i][j];
        }
    }
    printarray(arr, 3, 3);
    return 0;
}