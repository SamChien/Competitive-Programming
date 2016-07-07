#include <cstdio>
#include <iostream>
#include <vector>
using namespace std;

vector<int>** blocks;
int* where;

void backToOri(int blockId, int pos) {
    vector<int>* theStack = blocks[pos];

    while (theStack->back() != blockId) {
        int topBlock = theStack->back();

        theStack->pop_back();
        blocks[topBlock]->push_back(topBlock);
        where[topBlock] = topBlock;
    }
}

int main() {
    int blockNum;

    scanf("%d", &blockNum);
    blocks = new vector<int>*[blockNum];
    for (int i=0; i<blockNum; i++) {
        blocks[i] = new vector<int>();
        blocks[i]->push_back(i);
    }
    where = new int[blockNum];
    for (int i=0; i<blockNum; i++) where[i] = i;
    while (true) {
        int from, to, fromPos, toPos;
        string act, method;

        cin >> act;
        if (act == "quit") break;
        cin >> from >> method >> to;
        fromPos = where[from];
        toPos = where[to];
        if (fromPos == toPos) continue;
        if (act == "move") {
            backToOri(from, fromPos);
            if (method == "onto") backToOri(to, toPos);
            blocks[fromPos]->pop_back();
            blocks[toPos]->push_back(from);
            where[from] = toPos;
        } else {
            vector<int> pile;
            vector<int>* theStack = blocks[fromPos];

            while (true) {
                int topBlock = theStack->back();

                theStack->pop_back();
                pile.push_back(topBlock);
                if (topBlock == from) break;
            }
            if (method == "onto") backToOri(to, toPos);
            while (!pile.empty()) {
                int topBlock = pile.back();

                pile.pop_back();
                blocks[toPos]->push_back(topBlock);
                where[topBlock] = toPos;
            }
        }
    }
    for (int i=0; i<blockNum; i++) {
        vector<int>* theStack = blocks[i];
        int stackSize = theStack->size();

        printf("%d:", i);
        for (int j=0; j<stackSize; j++) printf(" %d", (*theStack)[j]);
        printf("\n");
    }

    return 0;
}
