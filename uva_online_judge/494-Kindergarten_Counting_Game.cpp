#include <cstdio>
#include <iostream>
using namespace std;

int main() {
    string line;

    while (getline(cin, line)) {
        bool isStart = true;
        int wordCount = 0;
        int lineLen = line.size();

        for (int i=0; i<lineLen; i++) {
            char ch = line[i];

            if ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z')) {
                if (isStart) isStart = false;
            } else if (!isStart) {
                wordCount++;
                isStart = true;
            }
        }
        if (!isStart) wordCount++;
        printf("%d\n", wordCount);
    }

    return 0;
}
