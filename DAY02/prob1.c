#include <stdio.h> 

void inputMarks(int *marks, int *n){  
    printf("Enter number of students: "); 
    scanf("%d", n); 

    printf("Enter Marks: "); 
    for (int i = 0 ; i < *n; i++){
        scanf("%d", marks+i); 
    }
}

float calculateAverage(int *marks, int n){
    int sum = 0 ; 
    for (int i = 0 ; i < n ; i++){
        sum += marks[i]; 
    }
    float average = (float) sum / (float) n;  
    return average; 
}

int main(){
    //init 
    int number_of_students; 
    int marks[100];
    
    //Calling values 
    inputMarks(marks, &number_of_students); 

    //calucation of average 
    float average = calculateAverage(marks, number_of_students);  

    //Print average marks 
    printf("Average Marks: %.2f\n", average);  

    return 0; 
}