#include <cstdio>
#include <iostream>
using namespace std;

int main() {
    int n;
    int arr[10010];
    int nowIndex = 0;

    while (scanf("%d", &n) != EOF) {
        int mid;

        arr[nowIndex] = n;
        for (int i=nowIndex-1; i>=0 && arr[i]>arr[i+1]; i--) swap(arr[i], arr[i+1]);
        mid = nowIndex / 2;
        if (nowIndex % 2) printf("%d\n", (arr[mid] + arr[mid+1]) / 2);
        else printf("%d\n", arr[mid]);
        nowIndex++;
    }

    return 0;
}
