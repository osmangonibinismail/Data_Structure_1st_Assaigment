// #include <iostream>
// #include <unordered_set>
// #include <vector>
// using namespace std;

// int main() {
//     int N;
//     cin >> N;

//     vector<int> A(N);
//     for (int i = 0; i < N; ++i) {
//         cin >> A[i];
//     }

//     unordered_set<int> seen;

//     for (int num : A) {
//         if (seen.find(num) != seen.end()) {
//             cout << "YES" << endl;
//             return 0;
//         }
//         seen.insert(num);
//     }

//     cout << "NO" << endl;
//     return 0;
// }


// #include <iostream>
// #include <vector>
// using namespace std;

// int main() {
//     int N;
//     cin >> N;

//     vector<long long> A(N), prefixSum(N);

//     for (int i = 0; i < N; ++i) {
//         cin >> A[i];
//     }

//     prefixSum[0] = A[0];
//     for (int i = 1; i < N; ++i) {
//         prefixSum[i] = prefixSum[i - 1] + A[i];
//     }

//     for (int i = N - 1; i >= 0; --i) {
//         cout << prefixSum[i] << " ";
//     }

//     return 0;
// }


// #include <iostream>
// #include <vector>
// using namespace std;

// bool isSorted(const vector<int>& arr) {
//     for (size_t i = 1; i < arr.size(); ++i) {
//         if (arr[i] < arr[i - 1]) {
//             return false;
//         }
//     }
//     return true;
// }

// int main() {
//     int T;
//     cin >> T;

//     while (T--) {
//         int N;
//         cin >> N;

//         vector<int> A(N);
//         for (int i = 0; i < N; ++i) {
//             cin >> A[i];
//         }

//         if (isSorted(A)) {
//             cout << "YES\n";
//         } else {
//             cout << "NO\n";
//         }
//     }

//     return 0;
// }


// #include <iostream>
// #include <vector>
// using namespace std;

// int main() {
//     int N, M, X;

//     cin >> N;
//     vector<int> A(N);
//     for (int i = 0; i < N; ++i) {
//         cin >> A[i];
//     }

//     cin >> M;
//     vector<int> B(M);
//     for (int i = 0; i < M; ++i) {
//         cin >> B[i];
//     }

//     cin >> X;
//     A.insert(A.begin() + X, B.begin(), B.end());

//     for (int i = 0; i < A.size(); ++i) {
//         cout << A[i] << " ";
//     }

//     return 0;
// }


// #include <iostream>
// using namespace std;

// int main() {
//     int N;
//     cin >> N;

//     for (int i = 0; i < N / 2; ++i) {
//         for (int j = 0; j < N; ++j) {
//             if (j == i) {
//                 cout << "\\";
//             } else if (j == N - i - 1) {
//                 cout << "/";
//             } else {
//                 cout << " ";
//             }
//         }
//         cout << endl;
//     }

//     for (int j = 0; j < N; ++j) {
//         if (j == N / 2) {
//             cout << "X";
//         } else {
//             cout << " ";
//         }
//     }
//     cout << endl;

//     for (int i = N / 2 - 1; i >= 0; --i) {
//         for (int j = 0; j < N; ++j) {
//             if (j == i) {
//                 cout << "/";
//             } else if (j == N - i - 1) {
//                 cout << "\\";
//             } else {
//                 cout << " ";
//             }
//         }
//         cout << endl;
//     }

//     return 0;
// }
