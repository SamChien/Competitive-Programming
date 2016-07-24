#include <cstdio>
#include <iostream>
using namespace std;

int main() {
    const int ARR_SIZE = 10000;
    int heightArr[ARR_SIZE] = {};
    int leftPos, rightPos, height;
    int nowHeight = 0;
    bool firstPrint = true;

    while (scanf("%d%d%d", &leftPos, &height, &rightPos) != EOF) {
        for (int i=leftPos; i<rightPos; i++) heightArr[i] = max(heightArr[i], height);
    }
    for (int i=0; i<ARR_SIZE; i++) {
        int h = heightArr[i];

        if (h != nowHeight) {
            if (firstPrint) firstPrint = false;
            else printf(" ");
            printf("%d %d", i, h);
            nowHeight = h;
        }
    }
    printf("\n");

    return 0;
}
