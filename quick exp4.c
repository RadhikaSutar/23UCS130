#include<stdio.h>
void swap(int *a,int *b){
	int temp=*a;
	*a=*b;
	*b=temp;
}

int partition(int arr[],int lb,int ub)
{
	int pivot=arr[lb];
	int i=lb+1,j=ub;
	while(i<j){
		while(arr[i]<=pivot){
			i++;
		}
		while(arr[j]>pivot){
			j--;
		}
		if(i<j){
			swap(&arr[i],&arr[j]);
		}
		if(i>j){
			swap(&arr[j],&arr[lb]);
		}
	}
	return j;
}

void quicksort(int arr[],int low,int high)
{
	if(low<high)
	{
		int loc=partition(arr,low,high);
		quicksort(arr,low,loc-1);
		quicksort(arr,loc+1,high);
	}
}

void printArray(int arr[],int n)
{
	int i;
	for(i=0;i<n;i++){
		printf("%d \n",arr[i]);
	}
}

int main()
{
	int n;
	printf("Enter size: ");
	scanf("%d",&n);
	
	printf("\n Enter elements: ");
	int i,arr[n];
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	
	printf("\n Before sorting:");
	printArray(arr,n);
	
	quicksort(arr,0,n-1);
	
	printf("\n After sorting: ");
	printArray(arr,n);
	
}
