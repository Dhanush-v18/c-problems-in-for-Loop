#include <stdio.h>
int main() {
    int n,count;
    scanf("%d", &n);
    for(int i=n;i>0;i=i/10) {
        count++;
    }
    printf("%d",count);
    return 0;
}
