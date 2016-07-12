#include <cstdio>

int main() {
    int queryNum;

    while (true) {
        int divPointX, divPointY;

        scanf("%d", &queryNum);
        if (queryNum == 0) break;
        scanf("%d%d", &divPointX, &divPointY);
        for (int i=0; i<queryNum; i++) {
            int x, y;

            scanf("%d%d", &x, &y);
            if (divPointX == x || divPointY == y) printf("divisa\n");
            else if (x < divPointX && y > divPointY) printf("NO\n");
            else if (x > divPointX && y > divPointY) printf("NE\n");
            else if (x > divPointX && y < divPointY) printf("SE\n");
            else if (x < divPointX && y < divPointY) printf("SO\n");
        }
    }

    return 0;
}
