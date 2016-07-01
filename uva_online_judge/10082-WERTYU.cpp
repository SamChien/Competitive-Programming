#include <cstdio>
#include <iostream>
using namespace std;

int main() {
    char arr[] = {
        '`', '1', '2', '3', '4', '5', '6', '7', '8', '9', '0', '-', '=',
        'Q', 'W', 'E', 'R', 'T', 'Y', 'U', 'I', 'O', 'P', '[', ']', '\\',
        'A', 'S', 'D', 'F', 'G', 'H', 'J', 'K', 'L', ';', '\'',
        'Z', 'X', 'C', 'V', 'B', 'N', 'M', ',', '.', '/'};
    int arrLen = sizeof(arr) / sizeof(char);
    string line;

    while (getline(cin, line)) {
        int lineLen = line.size();

        for (int i=0; i<lineLen; i++) {
            char target = line[i];
            int targetIndex = -1;

            for (int j=0; j<arrLen; j++) {
                char nowCh = arr[j];

                if (nowCh == target) targetIndex = j;
            }
            if (targetIndex == -1) printf("%c", target);
            else printf("%c", arr[targetIndex-1]);
        }
        printf("\n");
    }

    return 0;
}
