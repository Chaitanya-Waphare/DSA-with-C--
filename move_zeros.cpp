#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> a = {1, 2, 3, 4, 5, 6, 0, 7, 8, 9, 10, 0, 0, 0, 0};
    int n = a.size();
    int i = 0;
    int j = 0
    for (i; i < a.size(); i++) {
        cout << a[i] << " ";
    }
    cout << endl;
    return 0;
}