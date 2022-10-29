#include<stdio.h>
int main()
{
   int n,t,i;
   printf("Enter the number of unkowns : ");
   scanf("%d",&n);
   printf("\nEnter the coefficients : ");
   float mat[n][n+1];
   for(int i=0;i<n;i++)
   {
       for(int j = 0;j<=n;j++)
          scanf("%f",&mat[i][j] );
   }
   // diagonal matrix bana le 
   for(int i=0;i<n;i++)
   {
        for(int j=0;j<=n;j++)
        {
             if(j!=i)
             {
                 float t = mat[j][i]/mat[i][i];
                 for(int k=0;k<=n;k++)
                 {
                     mat[j][k] -= t * mat[i][k] ; 
                 }
             }
         }
   }
   for(int i=0;i<n;i++)
   {
         for(int j=0;j<=n;j++)
            printf("%f ",mat[i][j]);
         printf("\n");
   }  
   for(int i=0;i<n;i++)
   {
       printf("X[%d] : %f   ",i,mat[i][n]/mat[i][i]);
   }
   return 0 ;
}

