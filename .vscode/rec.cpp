#include <bits/stdc++.h>
using namespace std;

// int cnt = 0;

// void mul() {
//     if (cnt == 4) {
//         return;
//     }
//     cout << cnt << endl;
//     cnt++;
//     mul();
// }

// int main() {
//     mul();
// }


// void name(int i,int n) {
//     if (i>n) {
//         return;
//     }
//     name(i+1,n);
//     cout << i << endl;
// }

// int main() {
//     int n;
//     cin >> n;
//     name(1,n);
// }



void su(int i, int sum){
    if (i<1) {
        cout << sum;
        return;
    }
    su(i-1,sum+i);
}

int main() {
    int n;
    cin >> n;
    su(n,0);
}