#include <stdio.h> 

void swap(int *a, int *b){
    int temp = *a; 
    *a = *b;
    *b = temp;  
} 

int main(){
    int a, b; 

    printf("Enter two numbers: "); 
    scanf("%d %d", &a, &b);

    swap(&a, &b);  

    printf("First Number: %d\n", a); 
    printf("Second Number: %d\n", b); 
    return 0; 
}