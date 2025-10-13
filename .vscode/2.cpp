#include <bits/stdc++.h>
using namespace std;

// int main() {
//     int n;
//     cin >> n;

//     switch (n) {
//         case 1: cout << "Monday";
//         break;
//         case 2: cout << "Tuesday";
//         break;
//         case 3: cout << "Wednesday";
//         break;
//         case 4: cout << "Thursday";
//         break;
//         case 5: cout << "Friday";
//         break;
//         case 6: cout << "Saturday";
//         break;
//         case 7: cout << "Sunday";
//         break;
//     }
// }


// int main() {
//     int n;
//     cin >> n;
//     int sum = 0;
//     for (int i=0;i<=n;i++) {
//         sum+=i;
//     }
//     cout << sum;
// }



// int main() {
//     int n;
//     cin >> n;
//     for (int i=1;i<=n;i++) {
//         for (int j=1;j<=n;j++) {
//             cout << "* ";
//         }
//         cout << endl;
//     }
// }

//hollow square

// int main() {
//     int n;
//     cin >> n;
//     for (int i=0;i<n;i++) {
//         for (int j=0;j<n;j++) {
//             if (i==0 || i==n-1 || j==0 || j==n-1) {
//                 cout << "* ";
//             }
//             else {
//                 cout << "  ";
//             }
//         }
//         cout << endl;
//     }
// }

// diagnol sqaure

// int main() {
//     int n;
//     cin >> n;
//     for (int i=0;i<n;i++) {
//         for (int j=0;j<n;j++) {
//             if (i == j || i + j == n - 1)
//             {
//                 cout << "* ";
//             }
//             else {
//                 cout << "  ";
//             }
//         }
//         cout << endl;
//     }
// }


// int main() {
//     int n;
//     cin >> n;
//     for (int i=0;i<n;i++) {
//         for (int j=0;j<n-i-1;j++) {
//             cout << " ";
//         }
//         for (int j=0;j<2*i+1;j++) {
//             cout << "*";
//         }
//         cout << endl;
//     }
// }


// prime

// int main() {
//     int n,cnt=0;
//     cin >> n;
//     for (int i=1;i<n;i++) {
//         if (n%i==0) {
//             cnt++;
//         }
//     }
//     if (cnt>1) {
//         cout << n << " is not a prime";
//     } else {
//         cout << n << " is prime";
//     }
// }


// fibonacci

int main() {
    int n;
    cin >> n;
    int a = 0;
    int b = 1;
    int nxt = 0;
    cout << a << endl << b << endl;
    
    for (int i=0; i<n; i++) {
        nxt = a + b;
        cout << nxt << endl;
        a = b;
        b = nxt;
    }
}


// factors 

// int main() {
//     int n;
//     cin >> n;
//     for (int i=1;i<=n;i++) {
//         if (n%i==0) {
//             cout << i << endl;
//         }
//     }
// }


// reverse

// int main() {
//     int n;
//     cin >> n;
    
//     int ld = 0;
//     int rev = 0;

//     while (n!=0) {  
//         ld = n % 10;
//         n = n / 10;
//         rev = rev + ld * 10;
//     }
//     cout << rev;

// }   


// bool isPrime(int n) {
//     if (n==1) {
//         return false;
//     }
//     for (int i=2;i*i<n;i++) {
//         if (n%i==0) {
//             return false;
//         }
//     }
//     return true;
// }

// int main() {
//     int n;
//     cin >> n;
//     bool x = isPrime(n);
//     cout << x;
// }


// largest no. in array

// int main() {
//     int n;
//     cin >> n;
//     int arr[n];
//     for (int i=0;i<n;i++) {
//         cin >> arr[i];
//     }
//     int max = arr[0];
//     for (int i=0;i<n;i++) {
//         if (arr[i]>max) {
//             max = arr[i];
//         }
//     }
//     cout << max;

// }

// sort 

int bubbleSort(int arr[], int n) {
    for (int i=0;i<n-1;i++) {
        for (int j=0;j<n-i-1;j++) {
            if (arr[j]>arr[j+1]) {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
    return 0;
}

// int main() {
//     int n;
//     cin >> n;
//     int arr[n];
//     for (int i=0;i<n;i++) {
//         cin >> arr[i];
//     }
//     bubbleSort(arr,n);
//     for (int i=0;i<n;i++) {
//         cout << arr[i] << " ";
//     }
//     cout << endl;
// }

// 2nd largest

// int main() {
//     int n;
//     cin >> n;
//     int arr[n];
//     for (int i=0;i<n;i++) {
//         cin >> arr[i];
//     }
//     bubbleSort(arr,n);
//     cout << arr[n-2];
// }

// reverse array

// int main() {
//     int n;
//     cin >> n;
//     int arr[n];
//     for (int i=0;i<n;i++) {
//         cin >> arr[i];
//     }

// }

// fact

// int fact(int n) {
//     if (n==1) return 1;
//     return n*fact(n-1);
// }

// int main() {
//     int n;
//     cin >> n;
//     cout << fact(n);
// }

