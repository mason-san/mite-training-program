#include <stdio.h>  
#include <stdlib.h> 

struct student{
    char name[50]; 
    int marks; 
};   
typedef struct student *p_student;  

void studentDetails(int number_of_students, p_student pointer_student){
    for(int i = 0 ; i < number_of_students; i++){ 
        printf("Enter student %d Name: ", i+1); 
        scanf("%s", pointer_student->name); 
        printf("Enter Marks: "); 
        scanf("%d", &pointer_student->marks); 
        pointer_student++; 
    } 
} 

void printDetails(int number_of_students, p_student pointer_student){
    for(int i= 0; i < number_of_students; i++){
        printf("%s - %d\n", pointer_student->name, pointer_student->marks); 
        pointer_student++; 
    }

}

int main(){ 
    //init
    int number_of_students; 

    //entering values 
    printf("Enter number of students: ");  
    scanf("%d", &number_of_students);

    //block of memory
    p_student pointer_student = NULL; //No-wild   
    pointer_student =  (p_student) malloc(sizeof(struct student) * number_of_students); 

    studentDetails(number_of_students, pointer_student); 
     
    //output  
    printDetails(number_of_students, pointer_student); 
   
    //freeing the memory
    free(pointer_student); //dangling pointer
    //For no dangling 
    pointer_student = NULL;  

    return 0; 
}