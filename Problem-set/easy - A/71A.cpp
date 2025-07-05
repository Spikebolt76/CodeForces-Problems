#include <bits/stdc++.h>
using namespace std;

int main () {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    vector<string> words(n);
    int i;

    for (i = 0; i < n; i++) {
        cin >> words[i];
    }

    for (i = 0; i < n; i++) {
        int len = words[i].length();
        if (words[i].length() > 10) {
            words[i] = words[i][0] + to_string(len - 2) + words[i][len - 1];
        }
        else continue;
    }

    for (i = 0; i < n; i++) {
        cout << words[i] << '\n';
    }
    return 0;
}