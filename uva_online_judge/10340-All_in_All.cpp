#include <cstdio>
#include <iostream>
using namespace std;

int main() {
    string s, t;

    while (cin >> s >> t) {
        int tSize = t.size();
        int sSize = s.size();
        int sIndex = 0;

        for (int i=0; i<tSize; i++) {
            if (t[i] == s[sIndex]) sIndex++;
        }
        if (sIndex == sSize) printf("Yes\n");
        else printf("No\n");
    }

    return 0;
}
