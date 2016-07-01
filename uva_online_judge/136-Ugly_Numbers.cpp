#include <cstdio>
#include <limits>
#include <iostream>
using namespace std;

int main() {
    const int UGLY_SIZE = 1500;
    int uglyTable[UGLY_SIZE];

    uglyTable[0] = 1;
    for (int i=1; i<UGLY_SIZE; i++) {
        const int INF = numeric_limits<int>::max();
        int nextNum = INF;

        for (int j=i-1; j>=0; j--) {
            int preNum = uglyTable[i-1];
            int testNum = uglyTable[j];
            bool haveChange = false;

            if (testNum * 2 > preNum) {
                haveChange = true;
                nextNum = min(nextNum, testNum * 2);
            } else if (testNum * 3 > preNum) {
                haveChange = true;
                nextNum = min(nextNum, testNum * 3);
            } else if (testNum * 5 > preNum) {
                haveChange = true;
                nextNum = min(nextNum, testNum * 5);
            }
            if (!haveChange) break;
        }
        uglyTable[i] = nextNum;
    }
    printf("The 1500'th ugly number is %d.\n", uglyTable[UGLY_SIZE-1]);

    return 0;
}
