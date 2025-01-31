#include<bits/stdc++.h>
using namespace std;

int main(){

    int k;
    cin >> k;
    string s, t;
    cin >> s >> t;

    if(s == t){
        cout << "Yes\n";
        return 0;
    }
    int slen = s.size();
    int tlen = t.size();

    if(slen == tlen){   //modify
        int c = 0;
        for(int i = 0 ; i < slen ; ++i){
            if(s[i] != t[i])
                c++;
        }
        if(c <= 1)
            cout << "Yes\n";
        else
            cout << "No\n";
    }
    else if(slen + 1 == tlen){  //insert
        int pc = 0, sc = 0;
        while(pc < slen){
            if(s[pc] == t[pc])
                pc++;
            else
                break;
        }
        while(sc < slen){
            if(s[slen - sc - 1] == t[tlen - sc - 1])
                sc++;
            else 
                break;
        }
        if(pc + sc >= slen)
            cout << "Yes\n";
        else   
            cout << "No\n";
    }
    else if(slen - 1 == tlen){  //delete
        swap(s,t);
        swap(slen,tlen);
        int pc = 0, sc = 0;
        while(pc < slen){
            if(s[pc] == t[pc])
                pc++;
            else
                break;
        }
        while(sc < slen){
            if(s[slen - sc - 1] == t[tlen - sc - 1])
                sc++;
            else 
                break;
        }
        if(pc + sc >= slen)
            cout << "Yes\n";
        else   
            cout << "No\n";
    }
    else
        cout << "No\n";

    return 0;
}