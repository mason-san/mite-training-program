#include <stdio.h> 
#include <string.h> 

struct Product_t{
    char name[255]; 
    int price; 
}; 
typedef struct Product_t Product; 

void getProductDetails(int n, Product products[]); 
void sortProductDetails(int n, Product products[]);
void printProductDetails(int n, Product products[]);
void searchProductDetails(int n, Product products[]); 

int main(){ 
    //init
    int numberOfProducts; 
    Product products[100]; 

    //get dtails 
    printf("Enter number of products: "); 
    scanf("%d", &numberOfProducts); 
    getProductDetails(numberOfProducts, products);

    //print details 
    sortProductDetails(numberOfProducts, products);
    printProductDetails(numberOfProducts, products);

    searchProductDetails(numberOfProducts, products); 

    return 0; 
}

void getProductDetails(int n, Product products[]){ 
    printf("Enter product details (Name, price)"); 
    for(int i = 0; i < n; i++){
        scanf("%s %d", products[i].name, &products[i].price); 
    } 
}

void sortProductDetails(int n, Product products[]){
    for(int i = 0 ; i < n ;i++){
        for (int j = i+1; j < n; j++){
            if(products[i].price < products[j].price){
                Product tmp = products[i]; 
                products[i] = products[j]; 
                products[j] = tmp; 
            }
        }
    }
} 

void printProductDetails(int n, Product products[]){
    printf("Sorted By Price: "); 
    for(int i = 0 ; i < n ; i++){
        printf("%s (%d), ", products[i].name, products[i].price); 
    } 
    printf("\n"); 
}

void searchProductDetails(int n, Product products[]){ 
    char name[100];
    printf("Search: "); 
    scanf("%s", name);
    for(int i = 0 ; i < n ; i++){
        if (strcmp(name, products[i].name) == 0){ 
            printf("Found (Price: %d)", products[i].price); 
            return; 
        }
    }
    printf("Not found"); 
}