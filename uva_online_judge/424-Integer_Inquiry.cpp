#include <cstdio>
#include <iostream>
using namespace std;

int main() {
    string strNum;
    const int digitNum = 110;
    int sumArr[digitNum] = {};
    bool startPrint = false;

    while (true) {
        int strNumSize, carry;
        int numArr[digitNum] = {};

        cin >> strNum;
        if (strNum == "0") break;

        strNumSize = strNum.size();
        for (int i=strNumSize-1, j=0; i>=0; i--, j++) numArr[j] = strNum[i] - '0';
        carry = 0;
        for (int i=0; i<digitNum; i++) {
            sumArr[i] += numArr[i] + carry;
            carry = sumArr[i] / 10;
            sumArr[i] %= 10;
        }
    }
    for (int i=digitNum-1; i>=0; i--) {
        if (sumArr[i] != 0) startPrint = true;
        if (startPrint) printf("%d", sumArr[i]);
    }
    printf("\n");

    return 0;
}
