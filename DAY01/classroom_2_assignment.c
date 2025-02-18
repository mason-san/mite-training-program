/*Write a C program that takes an integer N as input and prints a right-angled triangle
of ‘*’with N rows. Example for N = 5:*/

#include <stdio.h> 

int main(){
    int n; 
    printf("Enter N: "); 
    scanf("%d", &n); 

    for(int i=0 ; i < n; i++){
        for(int j = 0 ; j < (i+1) ; j++){
            printf("*"); 
        }
        printf("\n"); 
    }

    return 0; 
}