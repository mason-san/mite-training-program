#include <stdio.h>

int searchLinear(float salaries[], int salariesCount, float searchSalary); 
int searchBinary(float salaries[], int salariesCount, float searchSalary);

int main(){
    //init
    float salaries[] = {20.0f, 10.0f, 15.0f, 12.0f, 13.0f}; 
    int salariesCount = 5; 
    float searchSalary = 10.0f; 
    
    int index = searchLinear(salaries, salariesCount, searchSalary);  
    int binarySearch = searchBinary(salaries, salariesCount, searchSalary); 
    printf("%.2f found at index %d\n", searchSalary, index);
    printf("%.2f found at index %d using binary serach\n", searchSalary, binarySearch);  

    return 0; 
}
int searchLinear(float salaries[], int salariesCount, float searchSalary){
    for(int i = 0 ; i < salariesCount; i++){
        if (salaries[i] == searchSalary){
            return i; 
        }
    }
    return -1;  
}

int searchBinary(float salaries[], int salariesCount, float searchSalary){
    int left = 0, right = salariesCount - 1; 

    while(left <= right){
        int mid = (left+right) / 2 ; 
        if (salaries[mid]  ==  searchSalary){
            return mid; 
        } else if (searchSalary  < salaries[mid]){
            right = mid-1; 
        } else {
            left = mid+1; 
        }
    }

    return -1; 
}
