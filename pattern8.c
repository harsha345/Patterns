#include<stdio.h>
int main()
{
int i,j,k,num;
printf("enter the size of pattern: ");
scanf("%d", &num);
for(i=0;i<num;i++)
{
for(j=0;j<i;j++)
{
printf("  ");
}
for(k=0;k<((num-i)*2)-1;k++)
{
printf("* ");
}
printf("\n");
}
return 0;
}

