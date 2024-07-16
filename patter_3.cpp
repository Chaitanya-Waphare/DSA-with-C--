// 1 2 3 4
// 1 2 3 4
// 1 2 3 4
// 1 2 3 4


#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the Value of n: ";
    cin>>n;
    int row = 1;
    while(row<=n){
        int column = 1;
        while(column <= n){
            cout<<column<<" ";
            column = column + 1;
        }
        row = row + 1;
        cout<<endl;
    }
}