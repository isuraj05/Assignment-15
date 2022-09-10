#include<stdio.h>
#include<conio.h>
void merge(int [],int,int [],int);
void sort(int[],int);
int main()
{
	int n,i;
	printf("Enter the size of the array: ");
	scanf("%d",&n);
	int a[n],b[n];
	
	printf("\nEnter the values of first array: ");
	for(i=0;i<n;i++)
	    scanf("%d",&a[i]);
	    
	printf("\nEnter the values of second array: ");
	for(i=0;i<n;i++)
	    scanf("%d",&b[i]);
	merge(a,n,b,n);
	getch();
}

void merge(int a[],int n1,int b[],int n2)
{
	int m,i,j,grtr,temp;
	m=n1+n2;
	int c[m];
	
	for(i=0;i<m;i++)
	{
		if(i<m/2)
			c[i]=a[i];
		else
			c[i]=b[i-m/2];
	}
	
	sort(c,m);
}

void sort(int c[],int m)
{
	int i,j,grtr,temp;
	for(i=0;i<m;i++)
	{
		grtr=c[i];
		for(j=i;j<m-1;j++)
		{
			if(grtr<c[j+1])
			{
				temp=grtr;
				grtr=c[j+1];
				c[j+1]=temp;
			}
		}
		printf("%d ",grtr);
	}
}
