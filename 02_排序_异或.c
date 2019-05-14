#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//选择法 假设法
int main(int argc,char *argv[])
{
	int arr[10],i,j,tmp;
	srand((unsigned)time(NULL));
	
	for(i=0;i<10;i++)
	{
		arr[i] = rand()%100;
		printf("%d ",arr[i]);
	}
	puts("");
	for(i=0;i<10;i++)
		for(j=i+1;j<10;j++)
		{
			if(arr[i] > arr[j])
			{
				//交换
				arr[i] ^= arr[j];
				arr[j] ^= arr[i];
				arr[i] ^= arr[j];
			}
		}
	for(i=0;i<10;i++)
		printf("%d ",arr[i]);
	puts("");
		
	return 0;	
}