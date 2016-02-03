#include<stdio.h>
int main()
{
    int i, n, k, space, count = 1;
 
    printf("Enter number of rows:\n");
    scanf("%d",&n);
 
    space = n;
 
    for ( i = 1 ; i <= n ; i++)
    {
        for( k = 1 ; k < space ; k++)
           printf("  ");//two white space
 
        for ( k = 1 ; k <= i ; k++)
        {
            printf(" *");//one white space
 
            if ( i > 1 && count < i)
            {
                 printf(" A");//one white space    
                 count++;
            }      
        }    
 
        printf("\n");
        space--;
        count = 1;
    }
    return 0;
}
