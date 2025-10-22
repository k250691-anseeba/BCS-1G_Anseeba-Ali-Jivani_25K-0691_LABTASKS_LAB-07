#include <stdio.h>

int main(){
	
    int arr[10];
	int checked[10000] = {0};
    int i;
   
    printf("Enter 10 IDs:\n");
    for (i = 0; i < 10; i++) {
        scanf("%d", &arr[i]);

        if (checked[arr[i]] == 1) {
            arr[i] = -1;    
        } 
        else {
            checked[arr[i]] = 1; 
        }
    }

    printf("\nUpdated list of IDs:\n");
    for(i=0 ; i<10 ; i++){
        printf("%d, ", arr[i]);
    }

	return 0;
}
