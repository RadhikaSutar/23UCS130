#include<stdio.h>

void mergesort(int a[],int l,int h)   //l=low h=high
{
	int mid;
	if(l<h)
	{
		mid=l+(h-l)/2;
		mergesort(a,l,mid);
		mergesort(a,mid+1,h);
		merge(a,l,mid,h);
	}
}

void merge(int a[],int l,int mid,int h)
{
	int b[h-l+1],i=l,k=0,j=mid+1,s;
	
	while(i<=mid && j<=h)
	{
		if(a[i]<=a[j])
		b[k++]=a[i++];
		else
		b[k++]=a[j++];
	}
	if(i>mid)
	{
		while(j<=h)
		b[k++]=a[j++];	
	}
	else
	{
		while(i<=mid)
		b[k++]=a[i++];	
	}
	
	for(s=0;s<k;s++)
	{
		a[l+s]=b[s];
	}
}

void print_array(int a[],int n)
{
	int i;
	
	for(i=0;i<n;i++)
	{
		printf("%d \n", a[i]);
	}

}

int main()
{
	int n,i;
	printf("enter array size: ");
	scanf("%d",&n);
	
	int a[n];
	printf("enter array elements: ");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	
	printf("before sorting: ");
	print_array(a,n);
	
	mergesort(a,0,n-1);
	
	printf("After sorting: ");
	print_array(a,n);

}


