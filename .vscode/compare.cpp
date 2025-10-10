#include <bits/stdc++.h>
using namespace std;

int main() {
    string s,t;
    cin >> s >> t;
    int n=min(s.length(),t.length());
    for (int i = 0; n; i++) {
        if (s[i] < t[i]) {
            cout << s;
            break;
        } else if (s[i] > t[i]) {
            cout << t;
            break;
        }
    } 
}