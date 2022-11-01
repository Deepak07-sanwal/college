
#include<stdio.h>
#include<math.h>
float f(float x)
{
    return (cos(x) - 3*x + 1) ;
}
int i = 1;
float solve (float x0,float x1,float error)
{
    float mid = (x0*f(x1) - x1*f(x0))/(f(x1) - f(x0)) ;
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



