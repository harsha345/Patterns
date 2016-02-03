#include<stdio.h>
int main()
{
int i,j,k,num;
printf("enter the size of pattern: ");
scanf("%d",&num);
for(i=0;i<num;i++)
{
for(k=0;k<i;k++)
{
printf(" ");
}
for(j=0;j<num-i;j++)
{
printf("*");
}

printf("\n");
}
return 0;
}
