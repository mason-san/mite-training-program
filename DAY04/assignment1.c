#include <stdio.h> 

struct Date_t{
    int year, month, day; 
}; 
typedef struct Date_t Date; 

struct Medicines_t{
    int id; 
    char name[255]; 
    Date date; 
    float price; 
}; 
typedef struct Medicines_t Medicine;  

void getMedicineDetails(int n, Medicine medicines[]){
    for(int i = 0; i < n; i++){ 
        printf("Medicine %d: ", i+1);
        scanf("%d %s %d %d %d %f", &medicines[i].id, 
        medicines[i].name, &medicines[i].date.year,
        &medicines[i].date.month, &medicines[i].date.day
        , &medicines[i].price); 
    }
}

void sortMedicineDetails(int n, Medicine medicines[]){
    for(int i = 0; i < n ; i++){
        for(int j = i+1; j < n; j++){
            if (medicines[i].date.year > medicines[j].date.year){
                Medicine temp = medicines[i];
                medicines[i] = medicines[j];
                medicines[j] = temp; 
            }
        }
    }
}

void displayMedicineDetails(int n, Medicine medicines[]){
    for(int i = 0; i < n; i++){ 
        printf("%s - %d-%d-%d\n", medicines[i].name, 
        medicines[i].date.year, medicines[i].date.month,
        medicines[i].date.day);
    }
}

void saveDetailsFile(int n, Medicine medicines[]){
    FILE *fp = fopen("medicines.txt", "w");
    for(int i = 0; i < n; i++){ 
        fprintf(fp, "%d | %s | %d-%d-%d | %f", medicines[i].id, 
        medicines[i].name, medicines[i].date.year, medicines[i].date.month, 
        medicines[i].date.day, medicines[i].price); 
    }
}

void loadDetailsFile(int n, Medicine medicines[]){
    FILE *fp = fopen("medicines.txt", "r");
    for(int i = 0; i < n; i++){
        fscanf(fp, "%d | %s | %d-%d-%d | %f", 
        &medicines[i].id, medicines[i].name,
        &medicines[i].date.year, &medicines[i].date.month, 
        &medicines[i].date.day, &medicines[i].price); 
    }
}

int main(){
    //init
    int numberOfMedicines; 
    Medicine medicines[100];

    //get medicine details
    printf("Enter the number of medicines: ");
    scanf("%d", &numberOfMedicines); 
    getMedicineDetails(numberOfMedicines, medicines);

    //save in a file
    saveDetailsFile(numberOfMedicines, medicines); 

    //load from the file 
    loadDetailsFile(numberOfMedicines, medicines); 

    //sorting 
    sortMedicineDetails(numberOfMedicines, medicines);

    //Display
    printf("Sorted Medicines (by Expiry Date): \n"); 
    displayMedicineDetails(numberOfMedicines, medicines); 

    return 0;
}