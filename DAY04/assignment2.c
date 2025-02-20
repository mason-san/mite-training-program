#include <stdio.h>  

union Rent_t {
    int typeOfRent;  
    float dailyRent, totalRent; 
};
typedef union Rent_t Rent; 

struct Car_t{
    int id; 
    char model[255];  
    Rent rent; 
}; 
typedef struct Car_t Car;  

void getCarDetails(int n, Car cars[]); 
void saveCarDetails(int n, Car cars[]); 
void displayCarDetails(int n, Car cars[]); 

int main(){
    //init 
    int numberCars; 
    Car cars[100]; 

    //get details 
    printf("Enter number of cars: "); 
    scanf("%d", &numberCars); 
    getCarDetails(numberCars, cars); 

    //save details in a file 
    saveCarDetails(numberCars, cars); 

    //display Car details
    displayCarDetails(numberCars, cars);

    return 0; 
}

void getCarDetails(int n, Car cars[]){ 
    for(int i = 0; i < n; i++){ 
        printf("Car %d (id, model)", i+1); 
        scanf("%d %s", &cars[i].id, cars[i].model);  
        printf("Enter type of Rent (1 - Daily, 2 - Total): ");
        scanf("%d", &cars[i].rent.typeOfRent);  
        switch(cars[i].rent.typeOfRent){
            case 1: {
                printf("Enter daily rent: ");
                scanf("%f", &cars[i].rent.dailyRent); 
            } break; 
            case 2: {
                printf("Enter total rent: ");
                scanf("%f", &cars[i].rent.totalRent); 
            } break; 
        }
    } 
}

void saveCarDetails(int n, Car cars[]){
    FILE *file = fopen("cars.txt", "w");
    if (file == NULL){
        printf("Error opening file.\n"); 
        return; 
    } 

    for(int i = 0 ; i < n ; i++){
        fprintf(file, "%d, %s", cars[i].id, cars[i].model); 
        switch(cars[i].rent.typeOfRent){
            case 1: { 
                fprintf(file, "%.2f/day \n", cars[i].rent.dailyRent); 
            } break; 
            case 2: { 
                fprintf(file, "%.2f/month \n", cars[i].rent.totalRent);
            } break; 
        }
    }
}

void displayCarDetails(int n, Car cars[]){
    printf("Cars Available: \n"); 
    for(int i= 0 ; i < n; i++){
        printf("%d. %s -", i+1, cars[i].model); 
        switch(cars[i].rent.typeOfRent){
            case 1: {
                printf("%.2f/day\n", cars[i].rent.dailyRent); 
            } break; 
            case 2: {
                printf("%.2f/month\n", cars[i].rent.totalRent);
            } break; 
        }
    }
}