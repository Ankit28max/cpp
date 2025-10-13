#include <bits/stdc++.h>
using namespace std;

struct student{
    string name;
    int marks;
};

int main() {
    int n;
    cin >> n;

    student arr[n];
    int max=0;
    string out="";

    for (int i = 0; i < n; i++) {
        cin >> arr[i].name >> arr[i].marks;
    }

    for (int i=0; i<n;i++) {
        if (arr[i].marks>max) {
            max = arr[i].marks;
            out = arr[i].name;
        }
    }

    cout << out;
}