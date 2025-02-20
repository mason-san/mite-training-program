#include <stdio.h> 

struct Employee_t{
    int id; 
    char name[255]; 
    float basicSalary, allowances; 
}; 
typedef struct Employee_t Employee; 

void getEmployeeDetails(int n, Employee employees[]);
void searchEmployee(int id, Employee employees[], int n); 
void savePayroll(Employee employees[], int n);

int main(){ 
    //init 
    int numberEmployees; 
    Employee employees[100]; 

    //get Details 
    printf("Enter the number of employees: ");
    scanf("%d", &numberEmployees);
    getEmployeeDetails(numberEmployees, employees); 

    //save payroll to a file
    savePayroll(employees, numberEmployees);

    //search 
    int searchId; 
    printf("Enter Employee ID to search:"); 
    scanf("%d", &searchId); 
    searchEmployee(searchId, employees, numberEmployees);
    return 0; 
}

void getEmployeeDetails(int n, Employee employees[]){
    for (int i = 0; i < n; i++){ 
        printf("Employee %d", i+1); 
        scanf("%d %s %.2f %.2f", &employees[i].id,
        employees[i].name, &employees[i].basicSalary, &employees[i].allowances);
    }
}

void savePayroll(Employee employees[], int n){
    FILE *file = fopen("payroll.txt", "w");
    if (file==NULL){
        printf("Error: Cannot open file.\n"); 
        return; 
    } 

    for(int i =0 ; i < n; i++){
        fprintf(file, "%d %s %.2f %.2f\n", employees[i].id, 
        employees[i].name, employees[i].basicSalary, employees[i].allowances); 
    }
} 

void searchEmployee(int id, Employee employees[], int n){
    for (int i = 0; i < n; i++){ 
        if (id == employees[i].id){
            printf("Employee: %s\n Gross Salary: %.2f\n", 
            employees[i].name, employees[i].basicSalary + employees[i].allowances);
        }
    }
}