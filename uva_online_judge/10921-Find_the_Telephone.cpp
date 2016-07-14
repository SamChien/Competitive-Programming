#include <cstdio>
#include <iostream>
#include <map>
using namespace std;

int main() {
    string exp;
    map<char, int> table;

    table['A'] = table['B'] = table['C'] = 2;
    table['D'] = table['E'] = table['F'] = 3;
    table['G'] = table['H'] = table['I'] = 4;
    table['J'] = table['K'] = table['L'] = 5;
    table['M'] = table['N'] = table['O'] = 6;
    table['P'] = table['Q'] = table['R'] = table['S'] = 7;
    table['T'] = table['U'] = table['V'] = 8;
    table['W'] = table['X'] = table['Y'] = table['Z'] = 9;

    while (cin >> exp) {
        int expLen = exp.size();

        for (int i=0; i<expLen; i++) {
            char ch = exp[i];

            if (ch == '0' || ch == '1' || ch == '-') printf("%c", ch);
            else printf("%d", table[ch]);
        }
        printf("\n");
    }

    return 0;
}
