#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        long long n, k;
        cin >> n >> k;


        long long x = 0;

        if (n % 2 == 1) {
            x = (k + 1) / 2;
        } else {
           x = k / 2;
        }


        if (x % 2 == 0)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
    return 0;
}
