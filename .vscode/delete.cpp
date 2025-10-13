#include <bits/stdc++.h>
using namespace std;

void del(int arr[],int *size, int pos = -1) {
    for (int i = pos; i < *size - 1; i++) {
        arr[i] = arr[i + 1];
    }
    *size = *size - 1;

}

int main() {
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    int pos;
    cin >> pos;
    del(arr, &n, pos - 1);
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
}