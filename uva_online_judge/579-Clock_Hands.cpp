#include <cstdio>

int main() {
    while (true) {
        int hour, minute, minuDeg;
        double hourDeg, finalDeg;

        scanf("%d:%d", &hour, &minute);
        if (hour == 0 && minute == 0) break;

        minuDeg = 6 * minute;
        hourDeg = 30 * hour + 0.5 * minute;
        if (hourDeg >= minuDeg) finalDeg = hourDeg - minuDeg;
        else finalDeg = minuDeg - hourDeg;
        if (finalDeg > 180) finalDeg = 360 - finalDeg;
        printf("%.3f\n", finalDeg);
    }

    return 0;
}
