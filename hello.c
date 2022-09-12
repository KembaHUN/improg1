#include <stdio.h>

int main()
{
    char name[100];
    int n;
    printf("%s","Adja meg a nevét:");
    scanf("%s", name);
    printf("%s","Adja meg hányszor köszönjön a program:");
    scanf("%d",n);
    
    for (int i=0; i<n;++i)
    {
        printf("Hello, %s!\n",name);
    }
    
    
}