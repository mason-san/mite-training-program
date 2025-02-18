 /*Write a C program that simulates a Zomato order tracking system. The user should
input a number (1-4) corresponding to the order status, and the program should
display the current status message.*/ 

#include <stdio.h> 

int main(){  
    //init
    int n; 
    printf("Enter order status(1-4):");   
    scanf("%d", &n); 

    switch(n){
        case 1: 
            printf("Your order has been placed. \n"); 
            break; 
        case 2: 
            printf("Your food is being prepared. \n"); 
            break; 
        case 3: 
            printf("Your order is out for delivery. \n"); 
            break; 
        case 4: 
            printf("Your order has been delivered. Enjoy your meal!\n"); 
            break; 
        default: 
            printf("Incorrect status. Please enter a number between 1 and 4. \n"); 
            break; 
    }

    return 0; 
}