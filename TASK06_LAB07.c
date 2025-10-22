#include <stdio.h>

int main(){
	
	int i;
	char str[50];
	int vowels = 0, consonants = 0;
	
	printf("Enter a word:    ");
	scanf("%s", str);
	
	for (i=0 ; str[i] != '\0' ; i++){
		if ((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z')){
				if(str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u'){
			        vowels++;
		        }
		        else if(str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U'){
			        vowels++;
		        }
		        else{
		        	consonants++;
	        	}
	    }
	    else{
	    	printf("Inavlid characters in your entered word that are not alphabets!");
	    	return 0;
		}
    }
    
	printf("The number of vowels in word '%s' are: %d\n", str, vowels);
	printf("The number of consonants in word '%s' are: %d", str, consonants);
	
	return 0;
}



