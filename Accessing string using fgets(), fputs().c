// accessing string using fgets(), fputs()

#include<stdio.h>
void main()
{
    char str[20];
    printf("\n Enter thr name: ");
    fgets(str,10,stdin);
    fputs(str,stdout);
}
