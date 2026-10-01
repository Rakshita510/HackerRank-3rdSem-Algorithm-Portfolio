#include <bits/stdc++.h>
using namespace std;

int birthdayCakeCandles(vector<int> candles) {
    int maximum = candles[0];
    int count = 0;

    for (int x : candles) {
        if (x > maximum) {
            maximum = x;
            count = 1;
        }
        else if (x == maximum) {
            count++;
        }
    }

    return count;
}
