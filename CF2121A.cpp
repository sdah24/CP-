#include<bits/stdc++.h>
using namespace std;

int main(){


int t;
cin>>t;

while(t--){

    int n,s;
    cin>>n>>s;

    vector<int>v(n);

    for(int i=0;i<n;i++){
        cin>>v[i];
    }

    int c=0,r;

    for(int i=0;i<n;i++){
            if(v[i]==s){
           for(int j=0;j<n;j++){
            if(j+1<n)
             if(v[j]+1==v[j+1])
                c++;
              else if(v[j]+1<v[j+1]){
                 int f = v[j]+1;
                 while(f!=v[j+1]){
                    f++;
                    c++;
                 }

              }
           }

        }
        if(v[i-1]==s){
           for(int j=0;j<n;j++){
            if(j+1<n)
             if(v[j]+1==v[j+1])
                c++;
              else if(v[j]+1<v[j+1]){
                 int f = v[j]+1;
                 while(f!=v[j+1]){
                    f++;
                    c++;
                 }

              }
           }

        }
        else if(v[i]<s){
            while(s!=v[i])
               s--;
               c++;
        }
        else if(v[i]>s){
            while(s!=v[i])
            v[i]--;
            c++;
    }

    }

    cout<<c<<"\n";

}


return 0;}
