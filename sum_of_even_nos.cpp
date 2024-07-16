#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the Number till you want to print the Sum: ";
    cin>>n;
    int j = 0;
    int i = 2;
    int sum = 0;
    while(j<n){
        sum = sum + i;
        i = i + 2;
        j = j + 1;
    }
    cout<<"The Sum is: "<<sum<<endl;
    return 0;
}