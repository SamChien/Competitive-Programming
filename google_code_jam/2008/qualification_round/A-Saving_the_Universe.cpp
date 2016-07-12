#include <cstdio>
#include <iostream>
#include <set>
using namespace std;

int main() {
    int caseNum;

    scanf("%d", &caseNum);
    for (int caseCount=1; caseCount<=caseNum; caseCount++) {
        int engNum, quNum;
        scanf("%d", &engNum);
        string* engArr[engNum];
        set<string> engSet;
        int switchNum = 0;

        getchar();
        for (int i=0; i<engNum; i++) {
            string* eng = new string;

            getline(cin, *eng);
            engArr[i] = eng;
            engSet.insert(*eng);
        }
        scanf("%d", &quNum);
        getchar();
        while (quNum--) {
            string query;

            getline(cin, query);
            engSet.erase(query);
            if (engSet.empty()) {
                switchNum++;
                for (int i=0; i<engNum; i++) engSet.insert(*engArr[i]);
                engSet.erase(query);
            }
        }
        printf("Case #%d: %d\n", caseCount, switchNum);
        for (int i=0; i<engNum; i++) delete engArr[i];
    }

    return 0;
}
