#include<bits/stdc++.h>
using namespace std;

// int main(){
//     int a1, a2, a3;
//     cin >> a1 >> a2 >> a3;

//     if((a1 * a2) == a3)
//         cout << "Yes";
//     else if((a1 * a3) == a2)
//         cout << "Yes";
//     else if((a2 * a3) == a1)
//         cout << "Yes";
//     else
//         cout << "No";
// }

//OR

int main(){
    vector<int> a(3);
    cin >> a[0] >> a[1] >> a[2];
    sort(a.begin(), a.end());

    if(a[0]*a[1] == a[2])
        cout << "Yes";
    else 
        cout << "No";
}