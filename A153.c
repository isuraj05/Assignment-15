#include<stdio.h>
#include<conio.h>
int sort(int [],int,int);
int main()
{
	int n,i,s;
	printf("Enter the size of the array: ");
	scanf("%d",&n);
	int a[n];
	
	printf("Enter the values of the array: ");
	for(i=0;i<n;i++)
	    scanf("%d",&a[i]);
	    
	for(i=0;i<n;i++)
	{
		s=sort(a,n,i);
		printf("%d  ",s);
	}
	getch();
}

int sort(int a[],int n,int k)
{
	int j,temp,sml;
	sml=a[k];
	for(j=k;j<n;j++)
	{
		if(j!=n-1)
		    if(sml>a[j+1])
			{
				temp=sml;
				sml=a[j+1];
				a[j+1]=temp;
			}
	}
	return sml;
}
