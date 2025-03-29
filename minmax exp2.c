#include<stdio.h>

void findminmax(int num[], int size, int *min, int *max) {
    int i;
    
    *min = num[0];
    *max = num[0];
    
    for (i = 1; i < size; i++) {
        if (num[i] < *min) {
            *min = num[i];
        }
        if (num[i] > *max) {
            *max = num[i];
        }
    }
    
    printf("The min is %d and the max is %d\n", *min, *max);
}

int main() {
    int num[20], i, size;
    int min, max;
    
    printf("Enter array size: ");
    scanf("%d", &size);
    
    printf("Enter the array elements: ");
    for (i = 0; i < size; i++) {  
        scanf("%d", &num[i]);
    }
    
    findminmax(num, size, &min, &max); 
    
    return 0;
}

