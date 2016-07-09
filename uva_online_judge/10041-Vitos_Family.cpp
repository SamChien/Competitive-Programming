#include <cstdio>
#include <cstdlib>
#include <algorithm>
using namespace std;

int main() {
    int caseNum;

    scanf("%d", &caseNum);
    while (caseNum--) {
        int relNum, midNum;
        scanf("%d", &relNum);
        int strArr[relNum];
        int sum = 0;

        for (int i=0; i<relNum; i++) scanf("%d", &strArr[i]);
        sort(strArr, strArr + relNum);
        midNum = strArr[(relNum-1)/2];
        for (int i=0; i<relNum; i++) sum += abs(midNum - strArr[i]);
        printf("%d\n", sum);
    }

    return 0;
}
