#include <stdio.h>
#include <string.h>
int main(void)
{
    char s[200];
    clrscr();
    int count = 0, i,n,ans;
    scanf("%[^\n]s", s);
    n=strlen(s);
    for (i = 0;s[i] != '\0';i++)
    {
        if (s[i] == ' ')
            count++;    
    }
   ans=n-count;
    printf("%d",ans);
   return 0;
   getch():
}
