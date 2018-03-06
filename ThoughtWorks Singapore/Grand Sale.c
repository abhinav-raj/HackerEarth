#include <stdio.h>

int main(void) {
	// your code goes here
	int n,i,j;
	scanf("%d",&n);
	int server1[n];
	int count=1;
	//int server[count];
	int data[n][4];
	int ti[n][2];
	for(i=0;i<n;i++)
	{
		scanf("%d %d %d %d",&data[i][1],&data[i][2],&data[i][3],&data[i][4]);
		ti[i][0]=60*data[i][1]+data[i][2];
		ti[i][1]=60*data[i][3]+data[i][4];
		
	}
	server1[0]=ti[0][1];
	for(i=0;i<n;i++)
	{
		for(j=0;j<count;j++)
		{
			if(ti[i][1]>server1[j]+5)
			{
				server1[j]=ti[i][2];
				break;
			}
			
		}
		if(j==count)
		{
			count++;
			server1[count]=ti[i][2];
		}
	}
printf("%d",count);	
	return 0;
}
