#include<stdio.h>
#include<conio.h>
#include<string.h>

void rotate(int [],int,int,char []);
int main()
{
	int n,i,posi;
	printf("Enter the size of the array: ");
	scanf("%d",&n);
	int a[n];
	
	printf("\nEnter the values of the array: ");
	for(i=0;i<n;i++)
	    scanf("%d",&a[i]);
	    
	printf("\nEnter the position number you want to rotate by: ");
	scanf("%d",&posi);
	
	char dir[10];
	printf("\nEnter the direction you want to rotate in as left/right: ");
	fflush(stdin);
	fgets(dir,10,stdin);
	dir[strlen(dir)-1]='\0';
	
	rotate(a,n,posi,dir);
	getch();
}

void rotate(int a[],int size,int posi,char dir[])
{
	int temp,i,j;
	
	for(i=0;i<posi;i++)
	{
		if( strcmp(dir,"LEFT")==0 || strcmp(dir,"Left")==0 || strcmp(dir,"left")==0 )
		{
			temp=a[0];
			for(j=0;j<size;j++)
				a[j]=a[j+1];
			a[size-1]=temp;
		}
		else
			if( strcmp(dir,"RIGHT")==0 || strcmp(dir,"Right")==0 || strcmp(dir,"right")==0 )
			{
				temp=a[size-1];
			    for(j=size-1;j>=0;j--)
				    a[j]=a[j-1];
			    a[0]=temp;
			}
	}
	
	for(i=0;i<size;i++)
	    printf("%d  ",a[i]);
}
