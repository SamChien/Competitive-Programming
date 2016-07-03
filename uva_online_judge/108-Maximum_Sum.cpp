#include <cstdio>
#include <limits>
using namespace std;

int main() {
    int n;
    scanf("%d", &n);
    int mat[n][n];
    const int INFS = numeric_limits<int>::min();
    int maxSum = INFS;

    for (int i=0; i<n; i++) {
        for (int j=0; j<n; j++) scanf("%d", &mat[i][j]);
    }
    for (int i=0; i<n; i++) {
        for (int j=0; j<n; j++) {
            if (j - 1 >= 0) mat[j][i] += mat[j-1][i];
        }
    }
    for (int i=0; i<n; i++) {
        for (int j=i; j<n; j++) {
            int nowSum = 0;

            for (int k=0; k<n; k++) {
                int areaSum = mat[j][k];

                if (i - 1 >= 0) areaSum -= mat[i-1][k];
                nowSum += areaSum;
                if (nowSum > maxSum) maxSum = nowSum;
                if (nowSum < 0) nowSum = 0;
            }
        }
    }
    printf("%d\n", maxSum);

    return 0;
}
