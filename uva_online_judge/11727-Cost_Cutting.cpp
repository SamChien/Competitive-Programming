#include <cstdio>
#include <algorithm>
using namespace std;

int main() {
    int caseNum;

    scanf("%d", &caseNum);
    for (int caseCount=1; caseCount<=caseNum; caseCount++) {
        int empNum = 3;
        int salArr[empNum];

        for (int i=0; i<empNum; i++) {
            int salary;

            scanf("%d", &salary);
            salArr[i] = salary;
        }
        sort(salArr, salArr + empNum);
        printf("Case %d: %d\n", caseCount, salArr[1]);
    }

    return 0;
}
