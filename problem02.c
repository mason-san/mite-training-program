#include <stdio.h> 

int main(){ 
    //initializtion 
    char name[50]; 
    int id; 
    int total_units_consumed; 

    //reading values        -1 
    printf("Enter Customer Name:"); 
    scanf("%s", name); 
    printf("Enter Customer ID: "); 
    scanf("%d", &id); 
    printf("Enter Total Units Consumed: "); 
    scanf("%d", &total_units_consumed); 

    //calculate Base Bill
    int units = 100; 
    
    if (total_units_consumed < 100){
        units += (total_units_consumed * 5);
        printf("%d\n", units); 
    }else if (total_units_consumed < 300){
        total_units_consumed -= 100;
        units += ((total_units_consumed * 7) + 500);
        printf("%d\n", units); 
    }else{
        total_units_consumed -= 300; 
        units += ((total_units_consumed * 10) + 500 + 1400);
        printf("%d\n", units); 
    }

    return 0; 
}
