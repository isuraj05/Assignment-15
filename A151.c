#include<stdio.h>
#include<conio.h>
int greatest(int [],int);
int main()
{
	int n,i,grt;
	printf("Enter the size of the array: ");
	scanf("%d",&n);
	int a[n];
	
	printf("Enter the values of the array: ");
	for(i=0;i<n;i++)
	    scanf("%d",&a[i]);
	grt=greatest(a,n);
	printf("Greatest number from the given array is %d",grt);
	getch();
}
int greatest(int a[],int n)
{
	int g,i;
	g=a[0];
	for(i=0;i<n;i++)
	{
		if(i!=n-1)
		{
			if(g<a[i+1])
			    g=a[i+1];
		}
	}
	return g;
}
