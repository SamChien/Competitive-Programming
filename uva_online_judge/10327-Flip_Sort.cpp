#include <cstdio>
#include <iostream>
using namespace std;

int main() {
    int n;

    while (scanf("%d", &n) != EOF) {
        int arr[n];
        int exOpe = 0;

        for (int i=0; i<n; i++) scanf("%d", &arr[i]);
        for (int i=n-1; i>=0; i--) {
            bool haveSwap = false;

            for (int j=1; j<=i; j++) {
                if (arr[j-1] > arr[j]) {
                    swap(arr[j-1], arr[j]);
                    haveSwap = true;
                    exOpe++;
                }
            }
            if (!haveSwap) break;
        }
        printf("Minimum exchange operations : %d\n", exOpe);
    }

    return 0;
}
