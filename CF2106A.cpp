#include<bits/stdc++.h>
using namespace std;

int main(){

int t;
cin>>t;

while(t--){

int n;
cin>>n;

vector<char>v(n);

int result=0;

for(int i=0;i<n;i++){
  cin>>v[i];
  if(v[i]=='0')
    result++;
  else
    result+=n-1;
}
cout<<result<<"\n";
}
return 0;}
