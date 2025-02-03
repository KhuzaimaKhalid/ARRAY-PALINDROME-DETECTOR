#include<stdio.h>

int main()
{
	printf("\t ARRAY PALINDROME DETECTOR \n");
	int n, p = 1;
	printf("\nEnter the size of array: ");
	scanf("%d", &n);
	int arr[n];
	for(int i = 0; i < n; i++){
		printf("\nEnter number # %d = ", i+1);
		scanf("%d", &arr[i]);
	}
 
  for(int i = 0, j = n-1; i < j; i++,j-- ){
  	if(arr[i] != arr[j]){
  		p = -1;
  		break;
	  }
  }
  	if(p == -1){
		printf("The aray is not a palindrome \n");
	} else{
		printf("The array is  palindrome \n");
	} 
		
	return 0;
} 
