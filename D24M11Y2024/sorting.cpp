// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {

//     int n;
//     cin >> n;

//     int arr[n];
//     for (int i = 0; i < n; i++)
//     {
//         cin >> arr[i];
//     }
//     sort(arr,&arr[n]); //ascending
//     sort(arr,&arr[n],greater<int>()); //descending
//     for (int i = 0; i < n; i++)
//     {
//         cout << arr[i]<<" ";
//     }
//     cout << endl;
//     return 0;
// }

#include <iostream>
using namespace std;

bool isSumPossible(int A[], int N, int S) {
    for (int i = 0; i < N - 2; ++i) {
        for (int j = i + 1; j < N - 1; ++j) {
            for (int k = j + 1; k < N; ++k) {
                if (A[i] + A[j] + A[k] == S) {
                    return true; 
                }
            }
        }
    }
    return false;
}

int main() {
    int T; 
    cin >> T;

    while (T--) {
        int N, S; 
        cin >> N >> S;

        int A[N]; 
        for (int i = 0; i < N; ++i) {
            cin >> A[i];
        }

        if (isSumPossible(A, N, S)) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }

    return 0;
}