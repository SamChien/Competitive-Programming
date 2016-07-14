#include <cstdio>
#include <iostream>
using namespace std;

int main() {
    string a, b;

    while (cin >> a >> b) {
        int aLen = a.size();
        int bLen = b.size();
        const int MAX_DIGITS = 600;
        int numA[MAX_DIGITS] = {};
        int numB[MAX_DIGITS] = {};
        int numRes[MAX_DIGITS] = {};
        bool startPrint = false;

        for (int i=0, j=aLen-1; i<aLen; i++, j--) numA[i] = a[j] - '0';
        for (int i=0, j=bLen-1; i<bLen; i++, j--) numB[i] = b[j] - '0';
        for (int i=0; i<aLen; i++) {
            int temp[MAX_DIGITS] = {};
            int aDigit = numA[i];
            int carry = 0;

            for (int j=0, k=i; k<MAX_DIGITS; j++, k++) {
                int pro = aDigit * numB[j] + carry;

                temp[k] = pro % 10;
                carry = pro / 10;
            }
            carry = 0;
            for (int j=0; j<MAX_DIGITS; j++) {
                int sum = numRes[j] + temp[j] + carry;

                numRes[j] = sum % 10;
                carry = sum / 10;
            }
        }
        for (int i=MAX_DIGITS-1; i>=0; i--) {
            if (numRes[i]) startPrint = true;
            if (startPrint) printf("%d", numRes[i]);
        }
        if (!startPrint) printf("0");
        printf("\n");
    }

    return 0;
}
