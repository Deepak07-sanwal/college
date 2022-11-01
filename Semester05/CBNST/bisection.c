
#include<stdio.h>
#include<math.h>
float f(float x)
{
    return (cos(x) - 3*x + 1) ;
}
int i = 1;
float solve (float x0,float x1,float error)
{
    //float mid = (x1*f(x2) - x2*f(x1))/(f(x2) - f(x1)) ;
    float mid = (x0 + x1 ) / 2 ;
    printf("%d Iteration x1 = %f x2 = %f Mid is : %f and F(Mid) is : %f\n",i++,x0,x1,mid,fabs(f(mid)));
    if(fabs(f(mid)) < error || f(mid) == 0)
       return mid;
    if(f(mid)*f(x1) < 0)
       return solve(mid,x1,error) ;
    else
       return solve(x0,mid,error) ;
}
int main()
{
   float x1,x2,error ;
   int flag = 0 ;
   while(!flag)
   {
      printf("Enter intervals  : " ) ;
      scanf("%f %f",&x1,&x2) ;
      printf("%f %f ",f(x1),f(x2) ) ;
      if(f(x1)*f(x2) < 0 )
         flag = 1 ;
      else
         printf("Worng Intervals !!!\n") ;
   }
   printf("Allowed error : ") ;
   scanf("%f",&error) ;
   float ans = solve(x1,x2,error) ;
   printf("Root is : %f\n",ans) ;
   return 0 ;
}

/*
Enter intervals  : 0 1
2.000000 -1.459698 Allowed error : 0.0001
1 Iteration x1 = 0.000000 x2 = 1.000000 Mid is : 0.500000 and F(Mid) is : 0.377583
2 Iteration x1 = 0.500000 x2 = 1.000000 Mid is : 0.750000 and F(Mid) is : 0.518311
3 Iteration x1 = 0.500000 x2 = 0.750000 Mid is : 0.625000 and F(Mid) is : 0.064037
4 Iteration x1 = 0.500000 x2 = 0.625000 Mid is : 0.562500 and F(Mid) is : 0.158424
5 Iteration x1 = 0.562500 x2 = 0.625000 Mid is : 0.593750 and F(Mid) is : 0.047598
6 Iteration x1 = 0.593750 x2 = 0.625000 Mid is : 0.609375 and F(Mid) is : 0.008119
7 Iteration x1 = 0.593750 x2 = 0.609375 Mid is : 0.601563 and F(Mid) is : 0.019765
8 Iteration x1 = 0.601563 x2 = 0.609375 Mid is : 0.605469 and F(Mid) is : 0.005829
9 Iteration x1 = 0.605469 x2 = 0.609375 Mid is : 0.607422 and F(Mid) is : 0.001143
10 Iteration x1 = 0.605469 x2 = 0.607422 Mid is : 0.606445 and F(Mid) is : 0.002343
11 Iteration x1 = 0.606445 x2 = 0.607422 Mid is : 0.606934 and F(Mid) is : 0.000600
12 Iteration x1 = 0.606934 x2 = 0.607422 Mid is : 0.607178 and F(Mid) is : 0.000272
13 Iteration x1 = 0.606934 x2 = 0.607178 Mid is : 0.607056 and F(Mid) is : 0.000164
14 Iteration x1 = 0.607056 x2 = 0.607178 Mid is : 0.607117 and F(Mid) is : 0.000054
Root is : 0.607117
*/
