// 1 1 1
// 2 2 2
// 3 3 3


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
            cout<<row<<" ";
            column = column + 1;
        }
        row = row + 1;
        cout<<endl;
    }
}