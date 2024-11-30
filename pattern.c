#include <stdio.h>
int main ()
{
int n ;
printf("enter the number for the size of pattern you want : \n");
scanf("%d",&n);

    for (int i=1 ; i<n ; i++)
    {
        for(int j=i ; j<=n ; j++)  printf("  ");
        for(int j=1 ; j<i  ; j++)  printf(" *");
        for(int k=1 ; k<=i ; k++) printf(" *");
        
        printf("\n");
    }
    for(int i=1 ; i<=n ; i++)
    {
        for(int j=1 ; j<=i ; j++) printf("  ");
        for(int j=i ; j< n ; j++) printf(" *");
        for(int j=i ; j<=n ; j++) printf(" *");
        printf("\n");
    }
return 0;
}