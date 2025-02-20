#include <stdio.h>
#include <string.h>  

void reverseString(char *str){
    int l = 0; 
    int r = strlen(str) - 1; 
    char t; 

    while (l < r){
        //swap them 
        t = str[l]; 
        str[l] = str[r]; 
        str[r] = t; 

        //increment and decrement 
        l++; 
        r--; 
    }
}

int main(){
    char s[100] = "Hello";  
    reverseString(s); 
    printf("Reversed String: %s\n", s); 
    return 0; 
}