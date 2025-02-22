#include <stdio.h> 

struct Marks_t{
    int marks[3]; 
    int total; 
    float average;
    char grade;  
};
typedef struct Marks_t Marks; 

struct Student_t{
    int id; 
    char name[255];
    Marks allMarks;  
}; 
typedef struct Student_t Student; 

void readStudents(Student students[], int n); 
void calculateStudents(Student students[], int n); 
void displayStudents(Student students[], int n); 

int main(){
    //init
    int numberStudents; 
    Student students[100]; 
    
    //entering details 
    printf("Enter number of students: "); 
    scanf("%d", &numberStudents); 
    readStudents(students, numberStudents);  

    return 0; 
}

void readStudents(Student students[], int n){
    printf("Enter details (ID, Name, Marks in 3 subjects):"); 
    for(int i = 0 ; i < n; i++){
        scanf("%d %s", &students[i].id, students[i].name); 
        for(int j = 0 ; j < 3; j++){
            scanf("%d", &students[i].allMarks.marks[j]); 
        }
    }
}

void calculateStudents(Student students[], int n){
    for(int i = 0 ; i < n ; i++){
        students[i].allMarks.total = 0 ;
        students[i].allMarks.average = 0.00; 
        for (int j = 0 ; j < n ; j++){
            students[i].allMarks.total += students[i].allMarks.marks[j]; 
        } 
        students[i].allMarks.average = students[i].allMarks.total / 3.0;  
        if (students[i].allMarks.average >= 90){
            students[i].allMarks.grade = 'A'; 
        } else if ((students[i].allMarks.average >= 75) || (students[i].allMarks.average <= 89)){
            students[i].allMarks.grade = 'B'; 
        }
    } 
} 

void displayStudents(Student students[], int n){
    for(int i =0  ; i < n ; i++){
        printf("%s - Total: %d, Average: %.2f, Grade: %c",students[i].name,
             students[i].allMarks.total, students[i].allMarks.average , students[i].allMarks.grade); 
    }
}
