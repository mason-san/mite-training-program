#include <stdio.h> 

void patientDetails(char *name, char *wardType, int *number_of_days){
    printf("Enter Patient Name: "); 
    scanf("%s", name); 
    printf("Enter Ward Type (G/S/P): "); 
    scanf(" %c", wardType); 
    printf("Enter Number of Days: ");
    scanf("%d", number_of_days);  
}

float calcualteBill(char wardType, int days){ 
    float bill = 0 ; 
    switch (wardType){
        case 'G':
            bill = 1000 * days; 
            break; 
        case 'S': 
            bill = 2000 * days; 
            break; 
        case 'P': 
            bill = 5000 * days; 
            break; 
        default: 
            break; 
    } 
    return bill; 
}

float calcualteDiscount(int number_of_days, float bill){
    float discount = 0.00; 
    if (number_of_days > 7){
        discount = (bill / 100.00) * 5.00; 
    }
    return discount; 
}

void displayCustomer(char *name, float bill, float discount, float final_bill){ 

    printf("\tOutput\n"); 
    printf("\tPatient Name: %s\n", name); 
    printf("\tTotal Bill Before Discount: %.2f\n", bill); 
    printf("\tDiscount Applied: %.2f\n", discount); 
    printf("\tFinal Bill Amount: %.2f\n", final_bill);  

}

int main(){ 
    //init 
    char name[50];  
    char wardType; 
    int number_of_days;

    //Getting inputs 
    patientDetails(name, &wardType, &number_of_days); 

    //getting the bill 
    float bill = calcualteBill(wardType, number_of_days);  

    //getting discount   -3 
    float discount = calcualteDiscount(number_of_days, bill);  

    //total discounted bill
    float final_bill = bill - discount;   

    //display  -4  
    displayCustomer(name, bill, discount, final_bill);

    return 0; 
}