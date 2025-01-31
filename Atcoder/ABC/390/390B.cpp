#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	long long a[100];
	bool flag=true;

	cin>>n;
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	for(int i=0;i<(n-2);i++){
		if((a[i]*a[i+2])!=(a[i+1]*a[i+1])){
		flag=false;
		break;
		}
	}

	if(flag)cout<<"Yes"<<endl;
	else cout<<"No"<<endl;
}
