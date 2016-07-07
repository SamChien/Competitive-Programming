#include <cstdio>
#include <iostream>
#include <vector>
using namespace std;

int main() {
    int caseNum;

    scanf("%d", &caseNum);
    getchar();
    while (caseNum--) {
        string str;
        int strSize;
        vector<char> parStack;
        bool isBal = true;

        getline(cin, str);
        strSize = str.size();
        for (int i=0; i<strSize; i++) {
            if (str[i] == '(' || str[i] == '[') parStack.push_back(str[i]);
            else {
                if (str[i] == ')' && !parStack.empty() && parStack.back() == '(') parStack.pop_back();
                else if (str[i] == ']' && !parStack.empty() && parStack.back() == '[') parStack.pop_back();
                else {
                    isBal = false;
                    break;
                }
            }
        }
        if (!parStack.empty()) isBal = false;
        printf((isBal)? "Yes\n":"No\n");
    }

    return 0;
}
