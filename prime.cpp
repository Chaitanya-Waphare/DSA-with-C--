#include<iostream>
using namespace std;

bool isPrime(int n){
    cout<<"It is a Prime Number"<<endl;
}

int main(){
    int n;
    int a = 0;
    cout<<"Enter the Number that you wwant to Check: ";
    cin>>n;
    int i = 2;
    while(i<n){
        if(n%i == 0){
            cout<<"Not Prime"<<endl;
            break;
        }
        else if(n%i != 0){
            a += 1;
        }
        i = i + 1;
    }
    if(a > 1){
        cout<<"Prime"<<endl;
    }
}