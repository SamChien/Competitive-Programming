#include <cstdio>
#include <iostream>
using namespace std;

int main() {
    string line;

    while (getline(cin, line)) {
        const int TABLE_SIZE = 200;
        int table[TABLE_SIZE] = {};
        int lineLen = line.size();
        int maxFreq;

        for (int i=0; i<lineLen; i++) {
            char ch = line[i];

            if ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z')) table[(int)ch]++;
        }
        maxFreq = table[0];
        for (int i=1; i<TABLE_SIZE; i++) {
            if (table[i] > maxFreq) maxFreq = table[i];
        }
        for (int i=0; i<TABLE_SIZE; i++) {
            if (table[i] == maxFreq) printf("%c", i);
        }
        printf(" %d\n", maxFreq);
    }

    return 0;
}
