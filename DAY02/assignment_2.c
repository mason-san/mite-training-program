#include <stdio.h>  
#include <stdlib.h> 

struct student{
    char name[50]; 
    int marks; 
};   
typedef struct student *p_student;  

void studentDetails(int number_of_students, p_student pointer_student, struct student total_students[5]){

    for(int i = 0 ; i < number_of_students; i++){ 
        pointer_student = (p_student)malloc(sizeof(struct student));
        pointer_student= &total_students[i]; 

        printf("Enter student %d Name: ", i+1); 
        scanf("%s", pointer_student->name); 
        printf("Enter Marks: "); 
        scanf("%d", &pointer_student->marks); 
    } 
} 

void printDetails(int number_of_students, p_student pointer_student, struct student total_students[5]){

    for(int i= 0; i < number_of_students; i++){
        pointer_student = &total_students[i]; 
        printf("%s - %d\n", pointer_student->name, pointer_student->marks); 
    }

}

int main(){ 
    //init
    struct student total_students[5];  
    p_student pointer_student; 

    int number_of_students; 

    //entering values 
    printf("Enter number of students: ");  
    scanf("%d", &number_of_students); 
    studentDetails(number_of_students, pointer_student, total_students); 
     
    //output  
    printDetails(number_of_students, pointer_student, total_students); 

    return 0; 
}