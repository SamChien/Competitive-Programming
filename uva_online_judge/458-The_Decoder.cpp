#include <cstdio>
#include <iostream>
using namespace std;

int main() {
    string line;

    while (getline(cin, line)) {
        int lineLen = line.size();

        for (int i=0; i<lineLen; i++) {
            char ch = line[i];

            printf("%c", ch - 7);
        }
        printf("\n");
    }

    return 0;
}
