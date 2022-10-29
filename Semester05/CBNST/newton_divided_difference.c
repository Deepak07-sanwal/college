#include<stdio.h>
int main()
{
	int n ,k=0,l=0;
	printf("Enter number of values : ") ;
	scanf("%d",&n);
	float X[n],Y[n][n] ;
	for(int i=0;i<n;i++)
	{
		printf("Enter the value of x%d and y%d ",k++,l++);
		scanf("%f %f",&X[i],&Y[i][0]) ;
	}
	float x = 0 ;
	printf("Enter the value of x : " ) ;
	scanf("%f",&x) ;
	int arr[n][n] ;
	for(int i=1;i<n;i++){
		for(int j=0;j<n-i;j++){
			Y[j][i] = (Y[j+1][i-1] - Y[j][i-1]) / (X[j+i] - X[j]) ;
		}
	}
	
	// printing the array
	printf("Printing the Difference Array : ") ;
	for(int i=0;i<n;i++){
		printf("\n") ;
		for(int j=1;j<n-i;j++)
		{
			printf("%f ",Y[i][j]);
		}
	}
	float y = Y[0][0], m = 1 ;
	int j = 0;
	for(int i=0;i<n-1;i++)
	{
		m = m* (x - X[i]);
		y = y + m * Y[0][i+1] ;
	}
	printf("value of y is : %f ",y) ;
	return 0 ;
}


/*Enter number of values : 4
Enter the value of x0 and y0 1 1
Enter the value of x1 and y1 2 5
Enter the value of x2 and y2 7 5
Enter the value of x3 and y3 8 4
Enter the value of x : 6
Printing the Difference Array : 
4.000000 -0.666667 0.071429 
0.000000 -0.166667 
-1.000000 
value of y is : 6.238094

*/
