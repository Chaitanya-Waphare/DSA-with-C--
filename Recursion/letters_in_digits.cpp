#include<iostream>
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    void solve(string digits, string result, int i,string mapping[10], vector<string>& ans) {
        if(i>= digits.length()) {
            ans.push_back(result);
            return;
        }
        int number = digits[i] - '0';
        string value = mapping[number];
        for(int j = 0; j<value.length(); j++) {
            result.push_back(value[j]);
            solve(digits, result, i+1, mapping, ans);
            result.pop_back();
        }
    }
    vector<string> letterCombinations(string digits) {
        vector<string> ans;
        if(digits.length() == 0) {
            return ans;
        }
        string result;
        int i = 0;
        string mapping[10] = {"", "","abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};
        solve(digits, result, i, mapping, ans);
        return ans;
    }
};

int main()
{
    string digits;
    cin >> digits;
    vector<string> res = (Solution().letterCombinations(digits));
    for (auto x : res)
     cout << x << endl;
    return 0;
}