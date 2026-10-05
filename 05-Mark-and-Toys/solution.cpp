#include <bits/stdc++.h>
using namespace std;

int maximumToys(vector<int> prices, int k) {
    sort(prices.begin(), prices.end());

    int count = 0;
    int total = 0;

    for (int price : prices) {
        if (total + price <= k) {
            total += price;
            count++;
        } else {
            break;
        }
    }

    return count;
}
