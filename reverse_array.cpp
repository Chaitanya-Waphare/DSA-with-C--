#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> a = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int n = a.size();
    for (int i = 0; i < n/2; i++) {
        swap(a[i], a[n - i - 1]);
    }

    for (int i = 0; i < a.size(); i++) {
        cout << a[i] << " ";
    }
    cout << endl;
    return 0;
}