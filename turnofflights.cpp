#include <iostream>
using namespace std;

int chk(string &s, int l) {
    int n = s.size();
    int cnt = 0;

    for (int i = 0; i < n; ) {
        if (s[i] == '1') {
            cnt++;
            i += l; // skip next l bulbs
        } else {
            i++;
        }
    }
    return cnt;
}

int main() {
    int n, k;
    cin >> n >> k;

    string s;
    cin >> s;

    int lo = 1, hi = n, ans = n;

    while (lo <= hi) {
        int mid = (lo + hi) / 2;

        if (chk(s, mid) <= k) {
            ans = mid;
            hi = mid - 1;
        } else {
            lo = mid + 1;
        }
    }

    cout << ans;

    return 0;
}