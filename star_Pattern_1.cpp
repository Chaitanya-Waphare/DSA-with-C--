//****
//****
//****
//****


#include<iostream>
using namespace std;

int main(){
    int row = 1;

    int n;
    cin>>n;
    while(row<=n){
        int column = 1;
        while(column<=n){
            cout<<"*"<<" ";
            column = column + 1;
        }
        cout<<endl;
        row = row + 1;
    }
}