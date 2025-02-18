#include <stdio.h> 

//function header
int employee_feedback(int x); 

//structure 

int main(){
    //Initialization 
    char name[100]; 
    int ID; 
    float salary; 
    int working_days; 
    float final_salary = 0 ;  
    int attendance_bonus = 0; 

    //First, we take inputs 
    printf("Enter Employee Name: "); 
    scanf("%s", name);

    printf("Enter Employee ID: "); 
    scanf("%d", &ID); 

    printf("Enter Basic Salary: "); 
    scanf("%f", &salary); 

    printf("Enter Total Days Worked: "); 
    scanf("%d", &working_days); 

    //Now we calcualte the final salary  
    float bonus = 0.0f ;
    if (working_days > 25){ 
        bonus = ((salary/100.0f) * 5.0f); 
    }
    else if (working_days < 10){
        bonus = (-1.0 * ((salary/100.0f) * 10.0f));
    }

    //Printing details
    printf("\tEmployee Name: %s\n", name); 
    printf("\tEmployee ID: %d\n", ID); 
    printf("\tBasic Salary: %.2f\n", salary); 

    //Attendance Bonus
    if (bonus != 0){ 
        printf("\tAttendance Bonus: %.2f\n", bonus); 
    }

    final_salary = salary + bonus; 
    printf("\tFinal Salary: %.2f\n", final_salary); 

    //Performance classification  
    int feedback = employee_feedback(working_days);
    switch (feedback)
    {
    case 0:
        /* code */
        printf("\tPerformance: Excellent\n");
        break;
    case 1: 
        printf("\tPerformance: Good\n"); 
        break; 
    case 2: 
        printf("\tPerformance: Need Improvement\n");
        break; 
    default:
        break;
    }    
}

int employee_feedback(int x){ 
    if (x > 25){
        return 0; 
    } 
    else if (x >= 15 && x <= 25){
        return 1; 
    }
    return 2; 
}