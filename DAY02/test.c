#include <stdio.h> 

void displayAges(short int ages[], int len, int index){
    if (index > (len-1)){
        return; 
    } 
    printf("%d\t", ages[index]);
    displayAges(ages, len, (index+1)); 
}

void travelBackwards(short int *ages, int length, int index){
    if (index >= length){
        return; 
    }

    travelBackwards(ages, length, index+1); 
    printf("%d\t", ages[index]); 
}

int main(){
    short int ages[] = {45, 12, 14, 20, 70,30, 25};
    displayAges(ages, 7, 0); 
    return 0; 
}