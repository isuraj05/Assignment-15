#include<stdio.h>
#include<conio.h>
int unique(int [],int);
int main()
{
	int n,i;
	printf("Enter the size of the array: ");
	scanf("%d",&n);
	int a[n];
	
	printf("Enter the values of the array: ");
	for(i=0;i<n;i++)
	    scanf("%d",&a[i]);
	    
	unique(a,n);
	getch();
}

int unique(int a[],int n)
{
	int i,j,d;
	for(i=0;i<n;i++)
	{
		d=a[i];
		for(j=0;j<i;j++)
		{
			if(d==a[j])
				break;	
		}
		if(j==i)
			printf("%d  ",d);
	}
}
