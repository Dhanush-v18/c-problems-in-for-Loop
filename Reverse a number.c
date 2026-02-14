#include <stdio.h>
int main() {
    int n,rev = 0,rem;
    scanf("%d", &n);
    for(int i=n;i>0;i=i/10) {
        rem=i%10;
        rev=rev*10 +rem;
    }
    printf("%d",rev);
    return 0;
}
