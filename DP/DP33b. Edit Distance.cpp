#include<bits/stdc++.h>
using namespace std;

int helperEditDistance(int i, int j, string &s1, string &s2, vector<vector<int>> &dp){
    if(i < 0)
        return j + 1;
    if(j < 0)
        return i + 1;

    if(dp[i][j] != -1)
        return dp[i][j];
    
    if(s1[i] == s2[j]){
        return dp[i][j] = helperEditDistance(i - 1, j - 1, s1, s2, dp);
    }

    return dp[i][j] = 1 + min (helperEditDistance(i, j - 1,s1,s2, dp), min(helperEditDistance(i - 1, j, s1, s2, dp), helperEditDistance(i - 1, j - 1, s1, s2, dp)));
}

int editDistance(string str1, string str2){
    int n = str1.size(), m = str2.size();
    vector<vector<int>> dp(n, vector<int>(m, -1));
    return helperEditDistance(n - 1, m - 1, str1, str2, dp);

}
int main(){
    string s1 = "horse";
    string s2 = "ros";

    cout << editDistance(s1, s2);
    return 0;
}