#include<stdio.h>
int c=0;
int bin_search(int A[], int key, int left, int right)
{
	int mid;
	mid=(left+right)/2; c++;
	if(A[mid]==key) 
	{
		c++;
		printf("Count = %d \n", c);
		return(mid); 
	}
	if(left>right)
	{
		c++;
		printf("key not found \n");
		return(-1);
	} 
	if(A[mid]>key) 
	{
		c++;
		right=mid-1;
		bin_search(A,key,left,mid-1);
	}
	else
	{
		c++;
		left=mid+1;
		bin_search(A,key,mid+1,right);
	}
}
main()
{
	int i,n,A[100],key,b;
	printf("Enter the no: of elements : ");
	scanf("%d", &n);
	printf("Enter the sorted array : \n");
	for(i=0;i<n;i++)
	{
		scanf("%d", & A[i]);
	}
	printf("Enter the to b searched \n");
	scanf("%d", &key);
	b=bin_search(A,key,0,n-1);
	printf("index of the given key is : %d \n", b);
}
