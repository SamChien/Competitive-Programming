#include <cstdio>
#include <iostream>
using namespace std;

int main() {
    string line;

    while (getline(cin, line)) {
        int lineLen = line.length();
        int sum = 0;

        for (int i=0; i<lineLen; i++) {
            char ch = line[i];

            if (ch >= '0' && ch <= '9') sum += ch - '0';
            else if (ch == '!') printf("\n");
            else {
                for (int j=0; j<sum; j++) {
                    if (ch == 'b') printf(" ");
                    else printf("%c", ch);
                }
                sum = 0;
            }
        }
        printf("\n");
    }

    return 0;
}
