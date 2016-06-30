#include <iostream>
using namespace std;

int main() {
    string line;
    bool isFirst = true;

    while (getline(cin, line)) {
        int lineLen = line.size();

        for (int i=0; i<lineLen; i++) {
            char ch = line[i];

            if (ch == '"') {
                if (isFirst) {
                    printf("``");
                    isFirst = false;
                } else {
                    printf("''");
                    isFirst = true;
                }
            } else printf("%c", ch);
        }
        printf("\n");
    }

    return 0;
}
