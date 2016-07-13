#include <cstdio>
#include <iostream>
#include <vector>
using namespace std;

int main() {
    string line;
    vector<string> sent;
    int sentSize, maxLen;

    while (getline(cin, line)) sent.push_back(line);
    sentSize = sent.size();
    maxLen = sent[0].size();
    for (int i=1; i<sentSize; i++) {
        int len = sent[i].size();
        if (len > maxLen) maxLen = len;
    }
    for (int i=0; i<maxLen; i++) {
        for (int j=sent.size()-1; j>=0; j--) {
            int len = sent[j].size();
            if (i < len) printf("%c", sent[j][i]);
            else printf(" ");
        }
        printf("\n");
    }

    return 0;
}
