#include <cstdio>
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    string code;

    while (true) {
        cin >> code;
        if (code == "#") break;
        if (next_permutation(code.begin(), code.end())) cout << code << endl;
        else cout << "No Successor\n";
    }

    return 0;
}
