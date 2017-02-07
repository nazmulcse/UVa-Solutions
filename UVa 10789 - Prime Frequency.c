#include<stdio.h>
#include<string.h>
#include<math.h>
long int is_prime(long int n)
{
    int i, root;
    if(n<=1) return 0;
    else if(n == 2)
    {
        return 1;
    }
    if(n % 2 == 0)
    {
        return 0;
    }
    root = sqrt(n);
    for(i = 3; i <= root; i = i + 2)
    {
        if(n % i == 0)
        {
            return 0;
        }
    }
    return 1;
}
int main()
{
    int testCase,i,j;
    char str[2005];
    scanf("%d",&testCase);
    for(i = 0;i<testCase;i++)
    {
        scanf("%s",str);
        int len = strlen(str);
        long int count[10000] = {0};
        for(j = 0;j<len;j++)
        {
            count[str[j]]++;
        }
        int max=0;
        printf("Case %d: ",i+1);
        for(j = 45;j<=140;j++)
        {
           if(is_prime(count[j])==1)
            {
                printf("%c",j);
                max=1;
            }
        }
       if(max==0){ printf("empty");}
        printf("\n");

    }
    return 0;
}
