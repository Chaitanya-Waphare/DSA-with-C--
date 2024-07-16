//*
//**
//***
//****


#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the Value of n: ";
    cin>>n;
    int row = 1;
    while(row<=n){
        int column = 1;
        while(column <= row){
            cout<<"*"<<" ";
            column = column + 1;
        }
        row = row + 1;
        cout<<endl;
    }
}