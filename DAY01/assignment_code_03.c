#include <stdio.h>  
#include <string.h> 

int main(){ 
    //init 
    int number_of_vehicles;    
    char vehicleTypes[10]; 

    //Reading values 
    printf("Enter number of vehicles: "); 
    scanf("%d", &number_of_vehicles);  

    //calculation  
    float total_toll = 0;

    for (int i= 1; i <= number_of_vehicles; i++){
        printf("Enter vehicle type: "); 
        scanf("%s", vehicleTypes); 

        if (strcmp(vehicleTypes, "Car") == 0){
            total_toll+=50.00; 
        } else if (strcmp(vehicleTypes, "Truck") == 0){
            total_toll+= 100.00; 
        } else if (strcmp(vehicleTypes, "Bike") == 0) {
            total_toll+= 20.00; 
        }
    }

    //display
    printf("Total Toll Collection: %.2f\n", total_toll); 

    return 0; 
}
