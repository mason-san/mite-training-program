#include <stdio.h> 

float calculateFinalBill(float bill_amount){ 
    float discount_amount = 0.00; 

    if (bill_amount >= 500 && bill_amount <= 1000){
        discount_amount = (bill_amount / 100.00) * 10.0; 
    } else if (bill_amount >1000){
        discount_amount = (bill_amount / 100.00) * 20.0; 
    }  

    return (bill_amount - discount_amount); 

}

int main(){ 
    //init
    float bill_amount; 

    //Get bill amount 
    printf("Enter total bill amount: "); 
    scanf("%f", &bill_amount); 

    //calculate final bill amount 
    float final_bill = calculateFinalBill(bill_amount);  

    //display   
    printf("Final Payable Amount: %.2f\n", final_bill);  

    return 0; 
}