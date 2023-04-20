#include<stdio.h>
#include<string.h>
int main()
{
char str[100];
int num;
printf("Enter a string.\n");
fgets(str,100,stdin);
num=strlen(str);
printf("Number of bytes:%d\n",num);
}
