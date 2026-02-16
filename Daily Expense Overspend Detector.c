#include <stdio.h>
int main()
{
    int n,expense,total=0,overspend=0;
    scanf("%d",&n);
    
    for(int i=1;i<=n;i++){
    scanf("%d",&expense);
    total+=expense;
    overspend+=(expense>1000);
}
printf("Total Expense: %d\n",total);
printf("Over SpendDays: %d",overspend);
return 0;
}
