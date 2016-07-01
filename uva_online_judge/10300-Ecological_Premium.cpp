#include <cstdio>

int main() {
    int caseNum;

    scanf("%d", &caseNum);
    while (caseNum != 0) {
        int farmerNum;
        int sum = 0;

        scanf("%d", &farmerNum);
        while (farmerNum != 0) {
            int size, aniNum, envFriend;

            scanf("%d%d%d", &size, &aniNum, &envFriend);
            sum += size * envFriend;
            farmerNum--;
        }
        printf("%d\n", sum);
        caseNum--;
    }

    return 0;
}
