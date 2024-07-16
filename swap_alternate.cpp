#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> a = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    for (int i = 0; i < a.size(); i += 2) {
        swap(a[i], a[i + 1]);
    }

    for (int i = 0; i < a.size(); i++) {
        cout << a[i] << " ";
    }
    cout << endl;
    return 0;
}