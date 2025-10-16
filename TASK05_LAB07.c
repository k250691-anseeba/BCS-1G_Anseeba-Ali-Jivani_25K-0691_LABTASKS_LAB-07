#include <stdio.h>

int main (){
	
	/*TASK05_Write a program that reads 10 integers into an array.
    Finds and prints the difference (max - min) between the largest and smallest elements.*/
	
    int arr[10], i=0; 
    int min, max;
    
    printf("Enter 10 numbers:\n");
    
	while (i<10){
    	scanf("%d", &arr[i]);
		i++;
	}
    
    min=arr[0];
	max=arr[0];
	
    for(i=1 ; i<10 ; i++){
    	if(arr[i] > max){
    		max = arr[i];
		}
		if(arr[i] < min){
    		min = arr[i];
		}
	}
	
	printf("\nThe differnce of the largest number (%d) and the smallest number (%d) is: %d", max,min,max-min);
    
	
	return 0;
}