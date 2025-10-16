#include <stdio.h>

int main (){
	
	/*TASK02_reads the 10 numbers from user and store these numbers into an array of same size.
You program should provide a searching mechanism in such a way that how many times a particular number
occurred and then print it on screen. If number is not in array, then program should display a message
“number not found”.*/

    int arr[10], i=0, num, count=0; 
	
	printf("Enter 10 numbers:\n");
	while (i<10){
		scanf("%d", &arr[i]);
		i++;
	}
	
	printf("Enter a number you want to search for:  ");
	scanf("%d", &num);
	
	for(i=0 ; i<10 ; i++){
		if(arr[i] == num){
			count++;
		}
	}
	if(count == 0){
		printf("Number not found.");
	}
	else{
    	printf("The number %d you entered occured in the array %d times" ,num ,count);
    }
	
return 0;
 }
 