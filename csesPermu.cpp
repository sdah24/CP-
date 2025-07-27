#include <bits/stdc++.h>
using namespace std;

int main(){
ios::sync_with_stdio(false);
cin.tie(0);

string n;
cin>>n;
int m=n.size();

int c=1,ma=1;
for(int i=0;i<m;i++){
        if(n[i]==n[i-1]){
          c++;
          ma=max(c,ma);
        }
          else
            c=1;
}
cout<<ma<<endl;
return 0;}
