#include <bits/stdc++.h>
using namespace std;

int main(){

int n,q;

cin>>n>>q;

vector<int>v(n);
for(int i=0;i<n;i++){
    v[i]=i+1;
}
while(q--){
    int digit,p,x,k;
    cin>>digit;
    if(digit==1){
    cin>>p>>x;
    v[p-1]=x;
    }
    if(digit==2){
        cin>>p;
        cout<<v[p-1]<<"\n";
    }
   if(digit==3){
        cin>>k;
        int t;
    for(int i=0;i<k;i++){
         t = v[0];
        v.erase(v.begin());
        v.push_back(t);

    }
   }

}





return 0;}
