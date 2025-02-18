#include <stdio.h> 

void customerDetails(int *salary, int *credit_score, int *experience){ 

    printf("Enter Salary:"); 
    scanf("%d", salary);
    printf("Enter Credit Score: ") ; 
    scanf("%d", credit_score); 
    printf("Enter Experience (Years): "); 
    scanf("%d", experience); 

}

int loanApproved(int salary, int credit_score, int experience){
   if ((salary >= 30000) && (credit_score >= 750) && (experience >=3)){
        return 1; 
   } 
   return 0; 
}

int main(){ 
    //initialization 
    int salary; 
    int credit_score; 
    int experience; 

    //Taking Inputs   -1  
    customerDetails(&salary, &credit_score, &experience); 

    //Checking if loan approved 
    if (loanApproved(salary, credit_score, experience)){
        printf("\nLoad Approved\n");  
        return 0; 
    }  
    printf("\nLoan Not Approved.\n"); 
    return 0; 
}