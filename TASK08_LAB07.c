#include <stdio.h>

int main(){

    char str[100];  
    
    printf("Enter characters\n(The program will only read characters entered before first alphabet in your input):\n\n");
    
    //only reads until a letter appears
    scanf("%[^A-Za-z]", str);  
    
    printf("\nNon-alphabetic characters entered are as following:\n");
    printf("%s", str);  
    
    return 0;
}


