#include<bits/stdc++.h>
using namespace std;
int main(){
int t;
cin>>t;
while(t--){

int n;
cin>>n;
int m=2*n;
vector<int>v(m);

bool even = false;

for(int i=0;i<m;i++){
   cin>>v[i];
   if(v[i]%2!=0)
    even=true;
}

sort(v.begin(), v.end());

bool hasdupli = false,evensum=false;

for(int i=1;i<m;i++){
    if(v[i]==v[i-1])
        hasdupli=true;
        if((v[i]+v[i-1])%2==0){
            evensum = true;
            break;
            }
}

if(even==false||hasdupli==true||evensum==true)
  cout<<"No\n";
  else
  cout<<"Yes\n";

}
return 0;}
