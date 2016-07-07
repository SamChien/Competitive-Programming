#include <cstdio>
#include <cmath>

int main() {
    while (true) {
        long long root;
        long long n;

        scanf("%lld", &n);
        if (n == 0) break;
        root = sqrt(n);
        if (root * root == n) printf("yes\n");
        else printf("no\n");
    }

    return 0;
}
