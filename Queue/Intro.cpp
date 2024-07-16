#include <bits/stdc++.h>
using namespace std;
void PrintQueue(queue<int> ans) {
    while(!ans.empty()) {
        cout << ans.front() << " ";
        ans.pop();
    }
    cout << endl;
}

void PrintDeQueue(deque<int> a) {
    while(!a.empty()) {
        cout << a.front() << " ";
        a.pop_front();
    }
    cout << endl;
}

int main()
{
    queue<int> ans;
    ans.push(1);
    ans.push(2);
    ans.push(3);
    ans.push(4);
    ans.push(5);
    ans.push(6);
    PrintQueue(ans);
    cout << "Last Element of the queue is(Through Back stl): " << ans.back() << endl;
    ans.pop();
    PrintQueue(ans);
    deque<int> a;
    a.push_front(4);
    a.push_back(5);
    PrintDeQueue(a);
    cout << "Last Element of the dequeue is(Through Back stl): " << a.back() << endl;
    return 0;
}