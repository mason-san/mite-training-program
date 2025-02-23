#include <stdio.h> 

struct Student_t{
    int Roll_No, marks; 
    char Name[255]; 
}; 
typedef struct Student_t Student; 

void getStudentDetails(int n, Student students[]); 
void sortStudentDetails(int n, Student students[]);
void printStudentDetails(int n, Student students[]); 
void searchStudentDetails(int n, Student students[]);

int main(){ 
    //init 
    int numberOfStudents; 
    Student students[100]; 

    printf("Enter Number of students: "); 
    scanf("%d", &numberOfStudents); 
    getStudentDetails(numberOfStudents, students);
    
    //Sorting Details 
    sortStudentDetails(numberOfStudents, students); 
    //Print details 
    printStudentDetails(numberOfStudents, students); 

    //Serching Roll No 
    searchStudentDetails(numberOfStudents, students); 

    return 0; 
}

void getStudentDetails(int n, Student students[]){
    printf("Enter details (Roll No, Name, Marks): "); 
    for(int i = 0; i < n; i++){
        scanf("%d %s %d", &students[i].Roll_No, students[i].Name, &students[i].marks); 
    }
}

void sortStudentDetails(int n, Student students[]){
    for(int i = 0; i < n; i++){
        for(int j = i+1; j < n ; j++){ 
            if (students[i].marks < students[j].marks){
                Student tmp = students[i];
                students[i] = students[j]; 
                students[j] = tmp; 
            }
        }
    }
}

void printStudentDetails(int n, Student students[]){ 
    printf("Sorted by Marks: ");
    for(int i = 0 ; i < n ; i++){ 
        printf("%s (%d), ", students[i].Name, students[i].marks); 
    }
    printf("\n"); 
}

void searchStudentDetails(int n, Student students[]){
    int rollNo;
    printf("Search Roll No "); 
    scanf("%d", &rollNo);
    for(int i =0 ; i < n ; i++){
        if (rollNo == students[i].Roll_No){
            printf("Found (%s, Marks: %d)", students[i].Name, students[i].marks); 
            return ;
        }
    }
    printf("Not Found ");
    return; 
}