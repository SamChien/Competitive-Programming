#include <cstdio>
#include <iostream>
#include <cmath>
using namespace std;

int main() {
    while (true) {
        string strInput;
        int strInputSize;
        int decNum;

        cin >> strInput;
        if (strInput == "0") break;
        strInputSize = strInput.size();
        decNum = 0;
        for (int i=strInputSize-1, j=1; i>=0; i--, j++) {
            int digit = strInput[i] - '0';

            decNum += digit * (pow(2, j) - 1);
        }
        printf("%d\n", decNum);
    }

    return 0;
}
