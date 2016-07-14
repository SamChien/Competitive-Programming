#include <cstdio>
#include <algorithm>
using namespace std;

int main() {
    int n;

    while (true) {
        scanf("%d", &n);
        if (!n) break;
        int arr[n];
        bool firstPrint = true;

        for (int i=0; i<n; i++) scanf("%d", &arr[i]);
        sort(arr, arr + n);
        for (int i=0; i<n; i++) {
            if (firstPrint) firstPrint = false;
            else printf(" ");
            printf("%d", arr[i]);
        }
        printf("\n");
    }

    return 0;
}
