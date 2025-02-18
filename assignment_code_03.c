#include <stdio.h>  
#include <string.h> 

int main(){ 
    //init 
    int number_of_vehicles;   
    //Reading values 
    printf("Enter number of vehicles: "); 
    scanf("%d", &number_of_vehicles);  
    printf("Enter vehicle types: ");  
    
    //calculation  
    int total_toll = 0; 
     
    for (int i= 0; i < number_of_vehicles; i++){  
        char vehicle[100];
        scanf("%s", &vehicle); 

        if (strcmp(vehicle, "Car") == 0){
            total_toll+=50; 
        } else if (strcmp(vehicle, "Truck") == 0){
            total_toll+= 100; 
        } else {
            total_toll+= 20; 
        }

    }

    //display
    printf("Total Toll Collection: %d\n", total_toll); 

    return 0; 
}