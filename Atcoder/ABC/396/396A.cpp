#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
	cin >> n;
	vector<int> a(n);
	for(auto &it : a)
		cin >> it;

    int c = 0;
	for(int i = 0 ; i < n - 1 ; ++i){
		if(a[i] == a[i+1]){
            c++;
            if(c == 2){
                break;
            }
        }
        else 
            c = 0;
	}
    if(c == 2)
        cout << "Yes";
    else
        cout << "No";
    return 0;
}