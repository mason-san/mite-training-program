#include <stdio.h> 

int main(){ 
    //init
    int n; 

    printf("Select Payment Method (1-3): "); 
    scanf("%d", &n); 

    switch(n){
        case 1:  
            char *cardNum; 
            printf("Enter your 16-digit card number: ");  
            scanf("%s", cardNum); 
            break; 
        case 2: 
            char upiId[50]; 
            printf("Enter your UPI ID: "); 
            scanf("%s", upiId);
            break; 
        case 3: 
            int choice; 
            printf("Select your bank (1 for SBI, 2 for HDFC): "); 
            scanf("%d", &choice);  
            break; 
        default:  
            printf("Transaction Failed. Please try again. \n"); 
            break;  
    }
    return 0; 
}