#include <cstdio>

long long m;

long long myPow(long long b, long long p) {
    if (!p) return 1;
    else if (p % 2) return b * myPow(b, p - 1) % m;
    else return myPow(b * b % m, p / 2);
}

int main() {
    long long b, p;

    while (scanf("%lld%lld%lld", &b, &p, &m) != EOF) printf("%lld\n", myPow(b, p));

    return 0;
}
