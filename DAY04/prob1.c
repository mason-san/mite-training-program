#include <stdio.h> 

struct Employee_t{
    int id; 
    char name[255]; 
    float salary; 
    char department[50]; 
}; 

typedef struct Employee_t Employee; 
void readEmployees(Employee emp[], int n);
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

Employee findHighestSalaryEmployee(Employee emp[], int n){
    Employee max_salary = emp[0]; 

    for(int i = 0 ; i < n ; i++){
        if (emp[i].salary > max_salary.salary){
            max_salary = emp[i]; 
        } 
    } 

    return max_salary; 
}