#include <stdio.h>
int main()
{
    int I,j;
    while(scanf("%d",&I) != 0)
    {
        if(I == 0)
            break;
        int num = I,index=0,binary[1000];
        int parity = 0;
        while(I > 0)
        {
            if((I&1) == 1){
                parity++;
                binary[index++] = 1;
            }else{
                binary[index++] = 0;
            }

            I = I >> 1;
        }
        // printf("%d",parity);
       printf("The parity of ");
       for(j=index-1;j>=0;j--)
       {
           printf("%d",binary[j]);
       }
        printf(" is %d (mod 2).\n",parity);
    }
    return 0;
}
