#include<stdio.h>

void printSalaries(float* salaries, int size);
void swap(float *first, float *second); 
void sortSelection(float *salaries, int size); 

int main() {
    float salaries[] = {20.0f, 10.0f, 15.0f, 12.0f, 13.0f};
    int salariiesCount = 5; 

    printf("Before Sort:\n");printSalaries(salaries, salariiesCount);
    sortSelection(salaries, salariiesCount);
    printf("Before Sort:\n");printSalaries(salaries, salariiesCount);
    
    return 0;
}

void printSalaries(float* salaries, int size) {

    for(int I = 0; I < size; I++) {
        printf("%.2f ", salaries[I]);
    }

    printf("\n");

}

void swap(float *first, float *second){
    float temp = (*first); 
    (*first) = (*second); 
    (*second) = temp;
}

void sortSelection(float *salaries, int size){
    for (int i = 0 ; i < (size-1); i++){
        int minIndex = i; 
        for(int j = i+1; j < size; j++){
            if(salaries[j] < salaries[minIndex]){
                minIndex = j;
            }
        }
        if (i != minIndex){
            swap(&salaries[i], &salaries[minIndex]);
        }
    }
}
