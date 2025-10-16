#include <bits/stdc++.h>
using namespace std;

void search(int arr[], int n) {
    int x;
    cin >> x;
    int i = 0;
    while (i < n) {
        if (arr[i] == x) {
            cout << "found at index " << i;
            return;
        }
        i++;
    }
    cout << "not found";
    
}

int main() {
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    search(arr, n);
}