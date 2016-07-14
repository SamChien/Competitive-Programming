#include <cstdio>

int main() {
    while (true) {
        double h, u, d, f;
        double nowH = 0;
        scanf("%lf", &h);
        if (!h) break;
        scanf("%lf%lf%lf", &u, &d, &f);
        double nowU = u;

        for (int day=1;; day++) {
            if (day != 1) {
                nowU -= u * f / 100.0;
                if (nowU < 0) nowU = 0;
            }
            nowH += nowU;
            if (nowH > h) {
                printf("success on day %d\n", day);
                break;
            }
            nowH -= d;
            if (nowH < 0) {
                printf("failure on day %d\n", day);
                break;
            }
        }
    }

    return 0;
}
