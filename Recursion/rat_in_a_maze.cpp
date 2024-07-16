//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++

class Solution {
public:
    void solve(vector<vector<int>>& m, int n, int i, int j, string& result, vector<string>& ans) {
        if (i < 0 || i >= n || j < 0 || j >= n || m[i][j] == 0) {
            return;  // Skip invalid positions or blocked cells
        }

        if (i == n - 1 && j == n - 1) {
            ans.push_back(result);
            return;
        }
        
        m[i][j] = 0;  // Mark the current cell as visited
        
        result.push_back('D');
        solve(m, n, i + 1, j, result, ans);
        result.pop_back();
        
        result.push_back('R');
        solve(m, n, i, j + 1, result, ans);
        result.pop_back();
        
        result.push_back('U');
        solve(m, n, i - 1, j, result, ans);
        result.pop_back();
        
        result.push_back('L');
        solve(m, n, i, j - 1, result, ans);
        result.pop_back();
        
        m[i][j] = 1;  // Mark the current cell as unvisited for backtracking
    }
    
    vector<string> findPath(vector<vector<int>>& m, int n) {
        if (m[0][0] == 0) {
            return {}; // Return an empty vector if matrix is empty or starting cell is blocked
        }
        
        int i = 0;
        int j = 0;
        string result;
        vector<string> ans;
        solve(m, n, i, j, result, ans);
        return ans;
    }
};

    


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<vector<int>> m(n, vector<int> (n,0));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                cin >> m[i][j];
            }
        }
        Solution obj;
        vector<string> result = obj.findPath(m, n);
        sort(result.begin(), result.end());
        if (result.size() == 0)
            cout << -1;
        else
            for (int i = 0; i < result.size(); i++) cout << result[i] << " ";
        cout << endl;
    }
    return 0;
}
// } Driver Code Ends