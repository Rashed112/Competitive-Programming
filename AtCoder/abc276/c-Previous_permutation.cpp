/*
problem statement understanding: given array is the k-th permutation of given numbers and we have to find the previous permutation of those number 
    according to lexicographical order
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> p(n);
    for (int i = 0; i < n; ++i) {
        cin >> p[i];
    }
    prev_permutation(p.begin(), p.end());/*this function stores the previous permutation according to lexicographical order and our problem also wanted that
                                          and next_permuatation function stores the next permutation according to lexicographical order*/
    for (int i = 0; i < n; ++i) {
        cout << p[i] << " ";
    }
    return 0;
}
