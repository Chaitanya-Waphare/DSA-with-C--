// 1 2 3 4
// 5 6 7 8
// 9 10 11 12
// 13 14 15 16


#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the Value of n: ";
    cin>>n;
    int row = 1;
    int count = 1;
    while(row<=n){
        int column = 1;
        while(column <= n){
            cout<<count<<" ";
            column = column + 1;
            count = count + 1;
        }
        row = row + 1;
        cout<<endl;
    }
}