#include <cstdio>
#include <iostream>
using namespace std;

int main() {
    string num;

    while (true) {
        int numLen;
        int evenSum = 0;
        int oddSum = 0;

        cin >> num;
        if (num == "0") break;
        numLen = num.size();
        for (int i=0; i<numLen; i++) {
            int nowDigit = num[i] - '0';

            if (i % 2 == 0) evenSum += nowDigit;
            else oddSum += nowDigit;
        }
        if (abs(evenSum - oddSum) % 11 == 0) cout << num << " is a multiple of 11.\n";
        else cout << num << " is not a multiple of 11.\n";
    }

    return 0;
}
