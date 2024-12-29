#include <bits/stdc++.h>
using namespace std;

int main() {
    
    string s;
    cin >> s;

    int c = 0;

    for(int i = 0 ; i < s.size() ; ++i){
        if(s[i] == '1' || s[i] == '2' || s[i] == '3' || s[i] == '4' || s[i] == '5' || s[i] == '6' || s[i] == '7' || s[i] == '8' || s[i] == '9')
            c++;
        else if(s[i] == '0'){
            if(i != s.size() - 1 && s[i + 1] == '0')
                i++;
            c++;
        }
    }
    cout << c;
    return 0;
}

//OR

#include<bits/stdc++.h>
using namespace std;
int main(){
    string a;
    cin>>a;
    int cnt=0;
    for(int i=0;i<a.length() ;i++){
		if(a[i]=='0'&&a[i+1]=='0'){
			i++;
		}
		cnt++;
}
cout<<cnt;
}


	
	
	
	
	


	