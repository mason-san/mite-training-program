#include <stdio.h> 

void sortAmbulances(int n, int *distances); 
int nearestDistance(int n, int *distances);  

int main(){
    int distances[50], numberOfDistances; 

    printf("Enter number of distances: "); 
    scanf("%d", &numberOfDistances); 
    printf("Ambulances (Distance in km): "); 
    for(int i =0 ; i < numberOfDistances; i++){
        scanf("%d", &distances[i]); 
    } 
    sortAmbulances(numberOfDistances, distances);
    int smallest = nearestDistance(numberOfDistances, distances); 
    printf("Nearest Ambulance assigned: Distance %d km\n", smallest); 

    return 0; 
}

void sortAmbulances(int n, int *distances){
    for(int i = 0 ; i < n ; i++){
        for(int j = i+1; j < n ; j++){
            if (distances[i] > distances[j]){
                int tmp = distances[i]; 
                distances[i] = distances[j]; 
                distances[j] = tmp; 
            }
        }
    }
} 

int nearestDistance(int n, int *distances){
    int nearest = distances[0];
    for(int i =0 ; i < n; i++){
        if (distances[i] < nearest){
            nearest = distances[i]; 
        }
    }
    return nearest; 
}