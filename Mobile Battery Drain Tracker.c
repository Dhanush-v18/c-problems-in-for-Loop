#include<stdio.h>
int main(){
    int batteryPercent, N, drain, remainingBattery;
    scanf("%d",&batteryPercent);
    scanf("%d",&N);
    remainingBattery = batteryPercent;
    for(int i=1;i<=N;i++){
        scanf("%d",&drain);
        remainingBattery -= drain;
    }
    printf("Remaining Battery: %d%%", remainingBattery);
    return 0;
}
