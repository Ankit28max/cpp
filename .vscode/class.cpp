#include <bits/stdc++.h>
using namespace std;


int main() {
    int n;
    long long sum=0;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    for (int i = 0; i < n; i++) {
        sum += arr[i];
    }
    if (sum < 0) {
        cout << -sum;
    } else {
        cout << sum;
    }
}
