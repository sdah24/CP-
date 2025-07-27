#include<bits/stdc++.h>
using namespace std;

int main(){
int n,k;
cin>>n;
int arr[n];
for(int i=0;i<n;i++){
 cin>>arr[i];
}
cin>>k;
sort(arr,arr+n);
int c=0;
for(int i=0;i<n;i++){
     if(arr[i]>=k)
       c++;
}
cout<<c<<endl;


return 0;}
