 #include<stdio.h>
int main()
{
	int n ,k=0,l=0;
	printf("Enter number of values : ") ;
	scanf("%d",&n);
	int X[n],Y[n] ;
	for(int i=0;i<n;i++)
	{
		printf("Enter the value of x%d and y%d ",k++,l++);
		scanf("%d %d",&X[i],&Y[i]) ;
	}
	float x,y = 0;
	printf("Enter the value of x for which you want y : ") ;
	scanf("%f",&x) ;
	for(int i=0;i<n;i++)
	{
	        float temp = 1;
		for(int j=0;j<n;j++)
		{
			if(i!=j) temp *= (x-X[j]) / (X[i] - X[j]) ;
		}
		y += temp * Y[i] ;
	}
	printf("Value of y is : %f\n",y) ;
	return 0 ;
}


/*
Enter number of values : 4
Enter the value of x0 and y0 1 1 
Enter the value of x1 and y1 2 5
Enter the value of x2 and y2 7 5
Enter the value of x3 and y3 8 4
Enter the value of x for which you want y : 6
Value of y is : 6.238095
*/
