#include <cstdio>

int main() {
    int caseNum;

    scanf("%d", &caseNum);
    while (caseNum--) {
        int n, p, loseDays;
        scanf("%d%d", &n, &p);
        bool table[n];

        for (int i=0; i<n; i++) table[i] = false;
        for (int i=0; i<p; i++) {
            int hartal;

            scanf("%d", &hartal);
            for (int j=hartal-1; j<n; j+=hartal) {
                if (j % 7 != 5 && j % 7 != 6) table[j] = true;
            }
        }
        loseDays = 0;
        for (int i=0; i<n; i++) {
            if (table[i]) loseDays++;
        }
        printf("%d\n", loseDays);
    }

    return 0;
}
