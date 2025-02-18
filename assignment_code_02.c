#include <stdio.h>  

void readWeights(int *weights, int *number_of_products){  

    printf("Enter number of products: "); 
    scanf("%d", number_of_products);  

    printf("Enter weights (in grams): ");   
    for (int i = 0 ; i < number_of_products; i++){
        scanf("%d", &weights[i]); 
    } 
    
} 



int main(){ 
    //init 
    int number_of_products = 0; 
    int weights[25]; 
  
    //read details  
    readWeights(weights, &number_of_products); 
    //Output example  
    int accepted_number = 0 ; 
    int rejected_number = 0 ; 
    for (int i = 0 ; i < number_of_products; i++){
        if ((weights[i] >= 950) && (weights[i] <= 1050)){ 
            accepted_number++; 
        } else {
            rejected_number++; 
        }
    }

    //Display 
    printf("Accepted Products: %d\n", accepted_number); 
    printf("Rejected Products: %d\n", rejected_number); 

    return 0; 
}
