#include <bits/stdc++.h>
using namespace std;

int findMinKey(map<int, int> &m, int n) {
    int minVal = INT_MAX;
    int minKey = 1;


    for (int i = 1; i <= n; ++i) {
        int val;


        if (m.count(i) > 0) {
            val = m[i];
        }

        else {
            val = 0;
        }
        if (val < minVal || (val == minVal && i < minKey)) {
            minVal = val;
            minKey = i;
        }
    }

    return minKey;
}

int main() {
    int n, q;
    cin >> n >> q;

    vector<int> a(q);
    for (int i = 0; i < q; ++i)
        cin >> a[i];

    map<int, int> m;
    vector<int> ans;
    for (int i = 0; i < q; ++i) {
        if (a[i] >= 1) {
            m[a[i]]++;
            ans.push_back(a[i]);
        } else if (a[i] == 0) {
            int minKey = findMinKey(m, n);
            m[minKey]++;
            ans.push_back(minKey);
        }
    }
    for (int x : ans) {
        cout << x << " ";
    }
    cout << endl;

    return 0;
}
