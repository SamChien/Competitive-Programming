#include <cstdio>
#include <iostream>
using namespace std;

int main() {
    string str;

    while (cin >> str) {
        int strSize = str.size();
        bool isPali = true;
        bool isMirror = true;
        int revTable[200] = {};

        revTable[(int)'A'] = 'A';
        revTable[(int)'E'] = '3';
        revTable[(int)'H'] = 'H';
        revTable[(int)'I'] = 'I';
        revTable[(int)'J'] = 'L';
        revTable[(int)'L'] = 'J';
        revTable[(int)'M'] = 'M';
        revTable[(int)'O'] = 'O';
        revTable[(int)'S'] = '2';
        revTable[(int)'T'] = 'T';
        revTable[(int)'U'] = 'U';
        revTable[(int)'V'] = 'V';
        revTable[(int)'W'] = 'W';
        revTable[(int)'X'] = 'X';
        revTable[(int)'Y'] = 'Y';
        revTable[(int)'Z'] = '5';
        revTable[(int)'1'] = '1';
        revTable[(int)'2'] = 'S';
        revTable[(int)'3'] = 'E';
        revTable[(int)'5'] = 'Z';
        revTable[(int)'8'] = '8';
        for (int i=0, j=strSize-1; i<=j; i++, j--) {
            if (str[i] != str[j]) isPali = false;
            if (revTable[(int)str[i]] == 0 || revTable[(int)str[i]] != str[j]) isMirror = false;
        }
        cout << str;
        if (isPali && isMirror) printf(" -- is a mirrored palindrome.\n");
        else if (isPali) printf(" -- is a regular palindrome.\n");
        else if (isMirror) printf(" -- is a mirrored string.\n");
        else printf(" -- is not a palindrome.\n");
        printf("\n");
    }

    return 0;
}
