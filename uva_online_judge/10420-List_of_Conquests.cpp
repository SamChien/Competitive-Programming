#include <cstdio>
#include <iostream>
#include <sstream>
#include <map>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int lineNum, countryNum;
    map<string, int> table;
    vector<string> countries;

    scanf("%d", &lineNum);
    getchar();
    while (lineNum--) {
        string line, country, name;
        getline(cin, line);
        stringstream ss(line);

        ss >> country >> name;
        table[country]++;
    }
    for (map<string, int>::iterator it=table.begin(); it!=table.end(); it++) {
        string country = it->first;

        countries.push_back(country);
    }
    sort(countries.begin(), countries.end());
    countryNum = countries.size();
    for (int i=0; i<countryNum; i++) cout << countries[i] << " " << table[countries[i]] << endl;

    return 0;
}
