#include <stdio.h>
//
int main(void) {
	// your code goes here

int testcase;
scanf("%d",&testcase);
int k, y, a[testcase];

for(k=0;k<testcase;k++)
{
    scanf("%d",&a[k]);
}

for(y=0;y<testcase;y++)

{

int size=a[y];
	int i;
	int a[size];
	for(i=1;i<=size;i++)
	{
		a[i]=i;
	//	printf("%d\t",a[i]);
	}
	int size1= size;
	while(size1>1)
	{
		int temp=a[2];
	 //	printf("%d\t",a[4]);
		for(i=1;i<=size1-2;i++)
		{

			a[i]=a[i+2];
		//	printf("%d\t",a[i]);
		}
		a[size1-1]=temp;
		for(i=1;i<size1;i++)
		{
		//printf("%d\t",a[i]);

		}
		size1--;
	//	printf("\n");
	}

	printf("%d\n",a[1]);
}
	return 0;
}
