#include <cstdio>

int main() {
    double v, t;

    while (scanf("%lf%lf", &v, &t) != EOF) {
        if (t == 0) printf("0\n");
        else {
            double a = v / t;
            double x = v * t + a * t * t;

            printf("%d\n", (int)x);
        }
    }

    return 0;
}
