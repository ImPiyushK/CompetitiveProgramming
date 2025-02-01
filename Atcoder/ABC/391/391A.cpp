#include<bits/stdc++.h>
using namespace std;

int main(){

    string d;
    cin >> d;

    if(d.size() == 1){
        if(d == "N")
            cout << 'S';
        else if(d == "S")
            cout << 'N';
        else if(d == "E")
            cout << 'W';
        else if(d == "W")
            cout << 'E';
    }
    else{
        if(d[0] == 'N'){
            cout << 'S';
            if(d[1] == 'E')
                cout << 'W';
            else
                cout << 'E';
        }
        else{
            cout << 'N';
            if(d[1] == 'E')
                cout << 'W';
            else
                cout << 'E';
        }
    }
    return 0;
}