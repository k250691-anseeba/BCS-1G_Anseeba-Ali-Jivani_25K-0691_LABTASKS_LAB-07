#include <stdio.h>

int main(){
	
	char str[100];
	int i;
	
	//ASCII VALUES: a-z = 97-122 and A-Z = 65-90 
	//lower ---> Upper  (__ - 32)
	//Upper ---> Lower  (__ + 32)
	
	printf("Enter a sentence:\n\n");
	scanf("%[^\n]", str);
	
	for(i=0 ; str[i] != '\0' ; i++){
		if(str[i] >= 'a' && str[i] <= 'z'){
			str[i] = str[i] - 32;   
		}
		else if(str[i] >= 'A' && str[i] <= 'Z'){
			str[i] = str[i] + 32;   
		}
	}
	
	printf("Your Converted Message is:\n\n");
	printf("%s", str);
	
	
	return 0;
}
