#include <bits/stdc++.h>
using namespace std;

int birthdayCakeCandles(vector<int> candles) {
    int maxHeight = *max_element(candles.begin(), candles.end());
    int count = 0;

    for (int height : candles) {
        if (height == maxHeight) {
            count++;
        }
    }

    return count;
}
