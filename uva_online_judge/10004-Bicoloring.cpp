#include <cstdio>

bool** adjMat;
int* colorTable;
int nodeNum;
bool isBiCol;

void dfs(int nowNode, int nowColor) {
    if (isBiCol) {
        colorTable[nowNode] = nowColor;
        for (int otherNode=0; otherNode<nodeNum; otherNode++) {
            if (adjMat[nowNode][otherNode] && colorTable[otherNode] == colorTable[nowNode]) isBiCol = false;
        }
        for (int otherNode=0; otherNode<nodeNum; otherNode++) {
            if (adjMat[nowNode][otherNode] && colorTable[otherNode] == -1) dfs(otherNode, (nowColor + 1) % 2);
        }
    }
}

int main() {
    while (true) {
        int edgeNum;

        scanf("%d", &nodeNum);
        if (nodeNum == 0) break;
        isBiCol = true;
        adjMat = new bool*[nodeNum];
        for (int i=0; i<nodeNum; i++) {
            adjMat[i] = new bool[nodeNum];
            for (int j=0; j<nodeNum; j++) adjMat[i][j] = false;
        }
        colorTable = new int[nodeNum];
        for (int i=0; i<nodeNum; i++) colorTable[i] = -1;

        scanf("%d", &edgeNum);
        while (edgeNum--) {
            int startNode, endNode;

            scanf("%d%d", &startNode, &endNode);
            adjMat[startNode][endNode] = true;
            adjMat[endNode][startNode] = true;
        }
        dfs(0, 0);
        if (isBiCol) printf("BICOLORABLE.\n");
        else printf("NOT BICOLORABLE.\n");
        for (int i=0; i<nodeNum; i++) delete[] adjMat[i];
        delete[] adjMat;
        delete[] colorTable;
    }

    return 0;
}
