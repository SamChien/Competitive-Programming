#include <cstdio>

int main() {
    while (true) {
        int a, b;
        int carryNum = 0;
        int carryOpe = 0;

        scanf("%d%d", &a, &b);
        if (a == 0 && b == 0) break;
        for (int i=1; i<=a || i<=b; i*=10) {
            int aDigit = a / i % 10;
            int bDigit = b / i % 10;
            int sum = aDigit + bDigit + carryNum;

            if (sum >= 10) carryOpe++;
            carryNum = sum / 10;
        }
        if (carryOpe == 0) printf("No carry operation.\n");
        else if (carryOpe == 1) printf("1 carry operation.\n");
        else printf("%d carry operations.\n", carryOpe);
    }

    return 0;
}
