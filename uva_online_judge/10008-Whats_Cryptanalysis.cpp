#include <cstdio>
#include <iostream>
using namespace std;

int main() {
    int n, maxCount;
    int table[100] = {};

    scanf("%d", &n);
    getchar();
    while (n--) {
        string line;
        getline(cin, line);
        int lineLen = line.size();

        for (int i=0; i<lineLen; i++) {
            char ch = line[i];

            if (ch >= 'a' && ch <= 'z') ch = 'A' + (ch - 'a');
            table[(int)ch]++;
        }
    }
    maxCount = table[(int)'A'];
    for (int i='B'; i<'Z'; i++) {
        int theCount = table[i];

        if (theCount > maxCount) maxCount = theCount;
    }
    for (int i=maxCount; i>=1; i--) {
        for (int j='A'; j<='Z'; j++) {
            int theCount = table[j];

            if (theCount == i) printf("%c %d\n", j, i);
        }
    }

    return 0;
}
