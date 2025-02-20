#include <stdio.h>  
#include <string.h> 
#define MAX 50

struct passenger{
    char name[30]; 
    int age; 
    char dest[30]; 
};

void enterPassengerDetails(int number_of_passengers, struct passenger passengers[MAX]){
    for(int i = 0 ; i < number_of_passengers; i++){
        printf("Passenger %d: ", i+1); 
        scanf("%s %d %s", passengers[i].name, &passengers[i].age, passengers[i].dest);
    }
}

int main(){
    //init
    int number_of_passengers;
    struct passenger passengers[MAX];

    //input
    printf("Enter the number of passengers: ");
    scanf("%d", &number_of_passengers);  
    enterPassengerDetails(number_of_passengers, passengers);

    //sorting 
    printf("Sorted List (by destination):\n"); 
    for(int i= 0; i < number_of_passengers; i++){
        struct passenger temp; 

        for(int j = i+1; j < number_of_passengers; j++){
            if(strcmp(passengers[i].dest, passengers[j].dest) > 0){ 
                temp = passengers[i];
                passengers[i] = passengers[j]; 
                passengers[j] = temp; 
            }
        }
    } 

    //print Sorted list 
    for(int i = 0 ; i < number_of_passengers; i++){
        printf("%s - %s\n", passengers[i].name, passengers[i].dest); 
    } 

    //searching destination  
    char search[30]; 
    printf("Enter destination to search: "); 
    scanf("%s", search);
    for(int i =0 ; i < number_of_passengers; i++){
        if (strcmp(search, passengers[i].dest) == 0){ 
            printf("Passenger travelling to %s: %s\n", search, passengers[i].name); 
        }
    }
    return 0; 
}