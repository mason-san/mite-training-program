#include <stdio.h> 

struct Employee_t{
    int id; 
    char name[255]; 
    float salary; 
    char department[50]; 
}; 

typedef struct Employee_t Employee; 
void readEmployees(Employee emp[], int n);
void saveEmployees(Employee emp[], int n); 
void loadEmployees(Employee emp[], int n); 
void displayEmployees(Employee emp[], int n); 
Employee findHighestSalaryEmployee(Employee emp[], int n);  

int main(){
    //init
    int number_of_employees; 

    //get details
    printf("Enter number of employees: "); 
    scanf("%d", &number_of_employees);
    Employee employees[1000]; 
    readEmployees(employees, number_of_employees); 

    //displaying Employees
    displayEmployees(employees, number_of_employees);
    
    //Finding highest salary 
    Employee highestSalariedEmployee = findHighestSalaryEmployee(employees, number_of_employees);  

    //displaying highest salary employee 
    printf("Employee with Highest Salary: %s, %.2f, (%s)\n",
            highestSalariedEmployee.name, 
            highestSalariedEmployee.salary, 
            highestSalariedEmployee.department); 

    return 0; 
}

void readEmployees(Employee emp[], int n){ 
    printf("Enter details (ID, Name, Salary, Department):\n"); 

    for (int i =0 ; i < n; i++){
        scanf("%d %s %f %s", &emp[i].id, emp[i].name, &emp[i].salary, emp[i].department);
    }

}
void displayEmployees(Employee emp[], int n){
    printf("Employee Details: \n"); 

    for(int i = 0 ; i < n ; i++){
        printf("ID: %d | Name: %s | Salary: %.2f | Dept: %s\n", emp[i].id, emp[i].name, emp[i].salary, emp[i].department); 
    }
}

void saveEmployees(Employee emp[], int n){
    FILE *fptr; 

    fptr = fopen("employees.txt", "w"); 
    if (fptr == NULL){
        printf("Error; Cannot open file.\n"); 
        return; 
    }

    for(int i = 0 ; i < n; i++){
        fprintf(fptr,"%d %s %.2f %s \n", emp[i].id, emp[i].name, emp[i].salary, emp[i].department); 
    } 

    fclose(fptr); 
}
void loadEmployees(Employee emp[], int n){
    FILE *fptr = fopen("employees.txt", "r"); 
    if(fptr == NULL){
        printf("Error: Cannot open file.\n"); 
        return ; 
    }

    for(int i = 0 ; i < n ; i++){
        fscanf(fptr, "%d %s %f %s", &emp[i].id, emp[i].name, &emp[i].salary, emp[i].department); 
    }
}


Employee findHighestSalaryEmployee(Employee emp[], int n){
    Employee max_salary = emp[0]; 

    for(int i = 0 ; i < n ; i++){
        if (emp[i].salary > max_salary.salary){
            max_salary = emp[i]; 
        } 
    } 

    return max_salary; 
}