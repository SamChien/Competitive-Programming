#include <cstdio>
#include <algorithm>
using namespace std;

int main() {
    int caseNum;

    scanf("%d", &caseNum);
    for (int caseCount=1; caseCount<=caseNum; caseCount++) {
        int tTime, na, nb;
        scanf("%d", &tTime);
        scanf("%d%d", &na, &nb);
        int resA = na;
        int resB = nb;
        int aStartTimes[na];
        int aEndTimes[na];
        int bStartTimes[nb];
        int bEndTimes[nb];
        int endTimeIndex = 0;
        int startTimeIndex = 0;

        for (int i=0; i<na; i++) {
            for (int j=0; j<2; j++) {
                int hour, min, time;

                scanf("%d:%d", &hour, &min);
                time = hour * 60 + min;
                if (j == 0) aStartTimes[i] = time;
                else if (j == 1) aEndTimes[i] = time;
            }
        }
        for (int i=0; i<nb; i++) {
            for (int j=0; j<2; j++) {
                int hour, min, time;

                scanf("%d:%d", &hour, &min);
                time = hour * 60 + min;
                if (j == 0) bStartTimes[i] = time;
                else if (j == 1) bEndTimes[i] = time;
            }
        }
        sort(aStartTimes, aStartTimes + na);
        sort(aEndTimes, aEndTimes + na);
        sort(bStartTimes, bStartTimes + nb);
        sort(bEndTimes, bEndTimes + nb);
        while (endTimeIndex < na && startTimeIndex < nb) {
            int restartTime = aEndTimes[endTimeIndex] + tTime % 1440;
            int startTime = bStartTimes[startTimeIndex];

            if (startTime >= restartTime) {
                endTimeIndex++;
                resB--;
            }
            startTimeIndex++;
        }
        startTimeIndex = endTimeIndex = 0;
        while (endTimeIndex < nb && startTimeIndex < na) {
            int restartTime = bEndTimes[endTimeIndex] + tTime % 1440;
            int startTime = aStartTimes[startTimeIndex];

            if (startTime >= restartTime) {
                endTimeIndex++;
                resA--;
            }
            startTimeIndex++;
        }
        printf("Case #%d: %d %d\n", caseCount, resA, resB);
    }

    return 0;
}
