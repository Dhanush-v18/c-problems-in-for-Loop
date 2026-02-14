#include <stdio.h>
int main()
{
    int a,b;
    int lcm =1;
    scanf("%d %d",&a,&b);
    for(int i=1;i++)
    {
        if(i%a==1 && i%b==0)
        {
            lcm =i;
            break;
        }
    }
    printf("%d",lcm);
    return 0;
}
