#include <cstdio>
#include <cstdlib>
using namespace std;

int main() {
    long long a, b;

    while (scanf("%lld%lld", &a, &b) != EOF) {
        long long diff = abs(a - b);

        printf("%lld\n", diff);
    }

    return 0;
}
