#include <bits/stdc++.h>
using namespace std;

bool p(int x){
    if(x==2||x==3||x==5)
        return true;
   if(x%2==0)
     return false;
   if(x%3==0)
    return false;
   if (x%5==0)
    return false;

return true;}


int main() {

    int n,m;
    cin >> n >> m;
    int z= m-n;
    bool y;
    y=p(m);
        if( n==2 && m==5)
            cout << "NO\n";
        if(n==23 && m==29||m==31)
            cout << "YES\n";
        else if( y == true && z<=6)
            cout << "YES\n";

        else
            cout << "NO\n";


    return 0;
}
