#include <stdio.h>  
#include <string.h> 

int main(){ 
    //init 
    int number_of_vehicles; 
    char vehicles[500];     
    //Reading values 
    printf("Enter number of vehicles: "); 
    scanf("%d", &number_of_vehicles);  
    printf("Enter vehicle types: ");  
    scanf("%s", vehicles); 
    //calculation  
    int total_toll = 0; 
    for (int i= 0; i < number_of_vehicles; i++){ 
        if (strcmp(vehicles[i], "Car")){
            total_toll+=50; 
        } else if (strcmp(vehicles[i], "Bike")){
            total_toll+=20; 
        }else{
            total_toll+=100; 
        }
    }

    //display
    printf("Total Toll Collection: %d\n", total_toll); 

    return 0; 
}
    //display
    printf("Total Toll Collection: %d\n", total_toll); 

    return 0; 
}
