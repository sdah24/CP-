#include<string>
#include<cctype>
#include<bits/stdc++.h>
using namespace std;

int main(){

string s;
cin>>s;
string s1 = s;

for(char &c: s1){
    c = tolower(c);
}
bool ispalin=true;
int n = s.size();
for(int i=0;i<n;i++){
    if(s1[i]!=s1[n-(i+1)]){
        ispalin=false;
        break;
        }
}
if(ispalin)
    cout<<"Palindrome\n";
else
    cout<<"NotPalindrome\n";




return 0;}
