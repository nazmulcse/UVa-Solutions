#include <stdio.h>
#include <string.h>

int main()
{
    int testCase,i,j;
    scanf("%d",&testCase);
    getc(stdin);
    for(i=0;i<testCase;i++)
    {
        char str[140],myStack[140];
        int top = -1;
        gets(str);
        int length = strlen(str);
        char ch;
        for(j=0;j<length;j++)
        {
            ch = str[j];
            if(ch == ')'){
                if(top >= 0 && myStack[top] == '(')
                    top--;
                else
                    myStack[++top] = ch;
            }
            else if(ch == ']'){
                if(top >= 0 && myStack[top] == '[')
                    top--;
                else
                    myStack[++top] = ch;
            }
            else if(ch == '(' || ch == '[')
                myStack[++top] = ch;
        }
        if(top < 0)
            printf("Yes\n");
        else
            printf("No\n");
    }
    return 0;
}
