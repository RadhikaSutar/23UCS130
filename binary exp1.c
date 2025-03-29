#include<stdio.h>
#include<string.h>

int binarySearch(int a[],int n,int sv)
{
	int l=0,h=n-1,mid;
	while(l<=h)
	{
		mid=(l+h)/2;
		
		if(sv==a[mid])
		{
			return mid;
			break;
		}
		
		if(sv<a[mid])
		{
			h=mid-1;
		}
		
		if(sv>a[mid])
		{
			l=mid+1;
		}
	}
	return -1;
}

int main()
{
	int sv,i,a[20],r;
	int n;
	
	printf("\n enter size of array: ");
	scanf("%d",&n);
	
	printf("\n enter array elements: ");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	
	printf("\n enter search value: ");
	scanf("%d",&sv);
	
	r=binarySearch(a,n,sv);
	if(r!= -1){
		printf("\n element found at %d",r);
	}
	else{
		printf("\n not found");
	}
}
