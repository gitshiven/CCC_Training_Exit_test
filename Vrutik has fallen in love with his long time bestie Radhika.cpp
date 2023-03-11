#include <bits/stdc++.h>
using namespace std;

int main() {
    int v;
    cin >> v;
    vector<int> a(9);
    for (int i = 0; i < 9; i++) {
        cin >> a[i];
    }

    int min_a = *min_element(a.begin(), a.end());
    if (min_a > v) {
        cout << "-1\n";
        return 0;
    }

    int max_d = v / min_a;
    string ans(max_d, '0' + distance(a.begin(), find(a.begin(), a.end(), min_a)) + 1);
    v -= max_d * min_a;

    for (int i = 0; i < max_d; i++) {
        for (int j = 8; j >= 0; j--) {
            if (v + min_a >= a[j]) {
                ans[i] = '0' + j + 1;
                v -= a[j] - min_a;
                break;
            }
        }
    }

    cout << ans << endl;

    return 0;
}
