#include <cstdio>
#include <iostream>
#include <sstream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    string line;

    while (getline(cin, line)) {
        stringstream ss(line);
        int dia;
        vector<int> pcakes;
        int pcakesNum;
        bool firstPrint = true;

        while (ss >> dia) pcakes.push_back(dia);
        pcakesNum = pcakes.size();
        for (int i=0; i<pcakesNum; i++) {
            if (i == pcakesNum - 1) printf("%d", pcakes[i]);
            else printf("%d ", pcakes[i]);
        }
        printf("\n");
        for (int i=pcakesNum-1; i>=0; i--) {
            int largest = i;

            for (int j=i-1; j>=0; j--) {
                if (pcakes[j] > pcakes[largest]) largest = j;
            }
            if (largest != i) {
                if (largest != 0) {
                    if (firstPrint) firstPrint = false;
                    else printf(" ");
                    printf("%d", pcakesNum - largest);
                    reverse(pcakes.begin(), pcakes.begin() + largest + 1);
                }
                if (firstPrint) firstPrint = false;
                else printf(" ");
                printf("%d", pcakesNum - i);
                reverse(pcakes.begin(), pcakes.begin() + i + 1);
            }
        }
        if (firstPrint) firstPrint = false;
        else printf(" ");
        printf("0\n");
    }

    return 0;
}
