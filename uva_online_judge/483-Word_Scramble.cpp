#include <iostream>
#include <sstream>
#include <algorithm>
using namespace std;

int main() {
    string line;

    while (getline(cin, line)) {
        stringstream ss(line);
        string word;
        bool isFirst = true;

        while (ss >> word) {
            reverse(word.begin(), word.end());
            if (isFirst) {
                isFirst = false;
                cout << word;
            } else {
                cout << " " << word;
            }
        }
        cout << endl;
    }

    return 0;
}
