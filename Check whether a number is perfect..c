#include <stdio.h>
int main()
{
    int n;
    int sum = 0;
    scanf("%d",&n);
    for(int i=1;i<n;i++)
    {
        if(n%i==0)
        {
            sum = sum + i;
        }
    }
    (sum == n) && printf("Yes");
    (sum != n) && printf("No");
    return 0;
}
