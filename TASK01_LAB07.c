#include <stdio.h>

int main(){
	
	/*TASK01_take 5 integers in an array and shifts all elements one position to the right, and
    moves the last element to the first position.
    Example:
        Input = 1 2 3 4 5
        Output = 5 1 2 3 4 */
        
        
	int arr[5];
	int i=0;
	
	printf("Enter 5 Numbers:\n");
	
	while(i<5){
        scanf("%d", &arr[i]);
        i++;
    }
	
	printf("%d", arr[4]);
	for(i=0 ; i<=3 ; i++){
        printf("%d", arr[i]);
    }
	
	return 0;
}

