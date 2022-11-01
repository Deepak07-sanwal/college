
#include<stdio.h>
#include<math.h>
float f(float x)
{
    return (2*x - log10(x) - 7) ;
}
int i = 1;
float solve (float x0,float x1,float error)
{
    float mid = (x0*f(x1) - x1*f(x0))/(f(x1) - f(x0)) ;
    printf("%d Iteration x1 = %f x2 = %f Mid is : %f and F(Mid) is : %f\n",i++,x0,x1,mid,fabs(f(mid)));
    if(fabs(f(mid)) < error || f(mid) == 0)
       return mid;
    return solve(x1,mid,error) ;
}
int main()
{
   float x1,x2,error ;
   int flag = 0 ;
      printf("Enter intervals  : " ) ;
      scanf("%f %f",&x1,&x2) ;
      printf("%f %f ",f(x1),f(x2) ) ;
   printf("Allowed error : ") ;
   scanf("%f",&error) ;
   float ans = solve(x1,x2,error) ;
   printf("Root is : %f\n",ans) ;
   return 0 ;
}




