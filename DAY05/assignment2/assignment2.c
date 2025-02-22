#include <stdio.h> 
#include "stack_assignment2.h" 
#include "Item.h"
#define MAX 100

void readItems(int n, Item items[]); 
void stackOperationPrinting(Stack *stk, int n, Item items[]);

Stack stk; 

int main(){
    //init
    int numberOfItems;  
    Item items[MAX];

    //read items into array
    printf("Enter number of items: "); 
    scanf("%d", &numberOfItems); 
    readItems(numberOfItems, items); 

    //Stack Operations
    stackOperationPrinting(&stk, numberOfItems, items); 

    return 0; 
}

void readItems(int n, Item items[]){
    StackInit(&stk); 
    //read n items into items array
    for(int i = 0; i < n; i++){
        printf("Stock Added: Item "); 
        scanf(" %c", &items[i].itemName); 
        StackPush(&stk, items[i]); 
    }
}

void stackOperationPrinting(Stack *stk, int n, Item items[]){
    Item item = StackTop(stk);  
    printf("Dispatching Item: %c\n", item.itemName); 
    StackPop(stk);
    printf("Remaining Stock: "); 
    while(!StackEmpty(stk)){
        Item item = StackTop(stk); 
        printf("%c ", item.itemName);
        stk->_top--; 
    }
    printf("\n");
}