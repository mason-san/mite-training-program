#include <stdio.h> 

int main(){
    //init
    float temperature; 
    int choice; 

    //Take Inputs
    printf("Enter Temperature: "); 
    scanf("%f", &temperature);
    printf("Choose conversion: \n1. Celsius to Farenheit\n2.Farenheit to Celsius\n3.Celsius to Kelvin\n"); 
    printf("Enter Choice: "); 
    scanf("%d", &choice);  
}