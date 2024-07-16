//    *
//   **
//  ***
// ****


#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the Value of n: ";
    cin>>n;
    int row = 1;
    while(row<=n){
        int space = n - row;
        while(space>=0){
            cout<<" ";
            space = space - 1;
        }
        int column = 1;
        while(column <= row){
            cout<<"*";
            column = column + 1;
        }
        row = row + 1;
        cout<<endl;
    }
}