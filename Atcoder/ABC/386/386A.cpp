#include <bits/stdc++.h>
using namespace std;

int main() {    
  int a, b, c,d;
  cin >> a >> b>> c >> d;
  vector<int> ar(14, 0);
  ar[a]++;
  ar[b]++;
  ar[c]++;
  ar[d]++;

  for(int i = 1 ; i < 14 ; ++i){
    if(ar[i] == 3){
      cout << "Yes";
      return 0;
    }
     
     else if(ar[i] == 2){
      for(int j = i +1 ; j < 14 ;j++){
        if(ar[j] == 2){
          cout << "Yes";
          return 0;
      }
      }
    }
  }
  cout << "No";
}
