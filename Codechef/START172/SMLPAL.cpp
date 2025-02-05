#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--){
	    int x, y;
	    cin >> x >> y;
	    
	    int a =  x / 2;
	    while(a != 0){
	        cout << '1';
	        a--;
	    }
	    while(y != 0){
	        cout << '2';
	        y--;
	    }
	    a =  x / 2;
	    while(a != 0){
	        cout << '1';
	        a--;
	    }
	   
	   cout << '\n';
	}
	return 0;
}
