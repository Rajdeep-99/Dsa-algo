
#include <stdio.h>
 
int binarySearch(int arr[], int l, int r, int x)
{
    if (r >= l) 
	{
        int mid = l + (r - l) / 2;
 		if (arr[mid] == x)
            return mid;
 		if (arr[mid] > x)
            return binarySearch(arr, l, mid - 1, x);
 		return binarySearch(arr, mid + 1, r, x);
    }
    return -1;
}
 
int main(void)
{
	int i,n,array[100],s,t,j,result;
	printf("Enter number of elements\n");
  	scanf("%d", &n);
	printf("Enter %d integers\n", n);
	for (i = 0; i < n; i++)
    	scanf("%d", &array[i]);
	printf("Enter value to find\n");
  	scanf("%d", &s);
  	for(i=0;i<n-1;i++)
  	{
  		for(j=0;j<n-i-1;j++)
  		{
  			if( array[j]> array[j+1])
  			{
  				t= array[j];
  			 	array[j]= array[j+1];
  			 	array[j+1]=t;
			}
		}
	}
 	printf("Sorted Array:\n");
  	for(i = 0; i < n; i++)
		printf("%d ", array[i]);
    result = binarySearch(array, 0, n - 1, s);
    if(result == -1)  
		printf("\nElement is not present in array");
    else
	printf("\nElement is present at index %d",result+1);
    return 0;
}
