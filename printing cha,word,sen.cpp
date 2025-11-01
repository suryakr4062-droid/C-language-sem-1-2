#include <stdio.h>
int main()
{
        char ch;
        char s[1000];
        char sen[10000];
        
        printf("enter char:");
        scanf("%c",&ch);
        
        printf("enter word:");
        scanf("%s",s);
        
        printf("enter sentence:");
        scanf("%s",sen);
        
        printf("%c\n",ch);
        printf("%s\n",s);
        printf("%s",sen);
        return 0;
}