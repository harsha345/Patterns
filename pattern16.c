#include<stdio.h>
int main()
{
int i,j,k,num;
printf("enter the size of pattern: ");
scanf("%d",&num);
for(i=0;i<num;i++)
{
for(j=0;j<num-i-1;j++)
{
printf("  ");
}
for(k=0;k<=i*2;k++)
{
printf("* ");
}
printf("\n");
}
for(i=0;i<num-1;i++)
{
for(j=0;j<=i;j++)
{
printf("  ");
}
for(k=1;k<(num-i-1)*2;k++)
{
printf("* ");
}
printf("\n");
}
return 0;
}

