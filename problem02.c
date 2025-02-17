#include <stdio.h>  

void enterCustomerDetails(char *name, int *id, int *total_units_consumed){ 

    //reading values        -1 
    printf("Enter Customer Name:"); 
    scanf("%s", name); 
    printf("Enter Customer ID: "); 
    scanf("%d", id); 
    printf("Enter Total Units Consumed: "); 
    scanf("%d", total_units_consumed); 

} 

int baseBillCalculation(int total_units_consumed){ 

    int base_bill= 100;
    int total_units_copy = total_units_consumed;  
    
    if (total_units_copy < 100){
        base_bill += (total_units_consumed * 5);
    }else if (total_units_copy < 300){
        total_units_copy -= 100;
        base_bill += ((total_units_consumed * 7) + 500);
    }else{
        total_units_copy -= 300; 
        base_bill += ((total_units_copy * 10) + 500 + 1400);
    }  

    return base_bill ; 
} 

float surchargeCalculation(int base_bill){ 

    float surcharge  = 0.00; 
    if (base_bill > 1000){
        surcharge = (base_bill / 100.0) * 5.0; 
    }  
    return surcharge; 

} 

void displayCustomerDetails(char *name, int id, int total_units_consumed, int base_bill, float surcharge, float total_bill){  

    printf("\t Output: \n"); 
    printf("\t Customer Name: %s\n", name); 
    printf("\t Customer ID: %d\n", id);  
    printf("\t Units Consumed: %d\n", total_units_consumed); 
    printf("\t Base Bill: %d\n", base_bill); 
    printf("\t Surcharge: %f\n", surcharge); 
    printf("\t Total Bill: %f\n", total_bill); 

}

int main(){ 
    //initializtion 
    char name[50]; 
    int id; 
    int total_units_consumed;  

    //reading values -1 
    enterCustomerDetails(name, &id, &total_units_consumed);  

    //calculate Base Bill        -2  
    int base_bill = baseBillCalculation(total_units_consumed); 

    //calculate Surcharge                 -3    
    float surcharge = surchargeCalculation(base_bill); 

    // calcualte total bill 
    float total_bill = base_bill + surcharge;  

    //Display  
    displayCustomerDetails(name, id, total_units_consumed, base_bill, surcharge, total_bill); 

    return 0; 
}
