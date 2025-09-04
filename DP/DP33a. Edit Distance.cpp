#include<bits/stdc++.h>
using namespace std;

int helperEditDistance(int i, int j, string s1, string s2){
    if(i < 0)
        return j + 1;
    if(j < 0)
        return i + 1;

    if(s1[i] == s2[j]){
        return 0 + helperEditDistance(i - 1, j - 1, s1, s2);
    }

    return 1 + min (helperEditDistance(i, j - 1,s1,s2), min(helperEditDistance(i - 1, j, s1, s2), helperEditDistance(i - 1, j - 1, s1, s2)));
}

int editDistance(string str1, string str2){
    int n = str1.size(), m = str2.size();
    return helperEditDistance(n - 1, m - 1, str1, str2);

}
int main(){
    string s1 = "horse";
    string s2 = "ros";

    cout << editDistance(s1, s2);
    return 0;
}