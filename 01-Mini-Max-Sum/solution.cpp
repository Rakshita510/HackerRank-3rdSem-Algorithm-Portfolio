#include <bits/stdc++.h>
using namespace std;

void miniMaxSum(vector<int> arr) {
    long long sum = 0;
    int minimum = arr[0];
    int maximum = arr[0];

    for (int x : arr) {
        sum += x;

        if (x < minimum)
            minimum = x;

        if (x > maximum)
            maximum = x;
    }

    cout << sum - maximum << " " << sum - minimum << endl;
}
