#include<bits/stdc++.h>
using namespace std;
int main(){
int t;
cin>>t;
while(t--){
int n,m,p,q;
cin>>n>>m>>p>>q;

string result;
if(n==1)
result="YES\n";
else if(n>1&&n-p+1==m&&n-p==q)
result="YES\n";
else
result="NO\n";

cout<<result;

}

return 0;}
