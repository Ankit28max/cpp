#include <bits/stdc++.h>
using namespace std;

int main() {
    int i;
    cin >> i;
    if (i%3==0 and i%5==0) {
        cout <<  "Fizzbuzz";
    }
    else if (i%3==0) {
        cout << "Fizz";
    }
    else if (i%5==0) {
        cout << "Buzz";
    }
    else {
        cout << i;
    }
}