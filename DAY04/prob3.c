#include <stdio.h> 

struct Fiction_t{ //383
    char title[250]; 
    char author[125]; 
    float price; 
}; 
typedef struct Fiction_t Fiction; 

struct Non_fiction_t{ //758
    char title[250]; 
    char subject[500]; 
    float price; 
}; 
typedef struct Non_fiction_t Non_fiction; 

union Booktype_t{ //758
    Fiction fiction; 
    Non_fiction nonFiction; 
}; 
typedef union Booktype_t Booktype; 

struct Book_t{ //762
    int type; 
    Booktype bookType; 
};
typedef struct Book_t Book; 

//global variable
Book books[1000]; 

//init
int bookCount; 

void addBooks(); 
void displayBooks(); 

int main(){

    addbooks(); 
    displayBooks(); 

    return 0; 
}

void addBooks(){
    printf("Enter number of books: "); 
    scanf("%d", &bookCount); 

    for(int i = 0 ; i < bookCount; i++){
        printf("Type of book (1 - Fiction, 2 - Non-Fiction)"); 
        scanf("%d", &books[i].type); 
        switch (books[i].type) {
            case 1:{
                /* code */
                printf("Book %d: %s -", i+1, "Fiction");
                printf("title, author, price: ") ; 
                scanf("%s %s %f", 
                    books[i].bookType.fiction.title, 
                    books[i].bookType.fiction.author, 
                    &books[i].bookType.fiction.price);
                } break;
            case 2:{
                printf("Book %d: %s -", i+1, "Non Fiction"); 
                printf("title, subject, price: ") ; 
                scanf("%s %s %f", 
                    books[i].bookType.nonFiction.title, 
                    books[i].bookType.nonFiction.subject, 
                    books[i].bookType.nonFiction.price);
                } break;
            default:
                break;
        }
    } 
}
void displayBooks(){
    for(int i = 0 ; i < bookCount; i++){
        switch(books[i].type){
            case 1:{
                printf("Fiction Book: %s, Author: %s, Price: $%.2f\n", books[i].bookType.fiction.title, 
                    books[i].bookType.fiction.author, 
                    books[i].bookType.fiction.price);
            } break; 
            case 2:{
                printf("Non-Fiction Book: %s, Subject: %s, Price: $%.2f\n", books[i].bookType.nonFiction.title, 
                    books[i].bookType.nonFiction.subject, 
                    books[i].bookType.nonFiction.price);
            } break;
            default: 
                break;  
        }    
    }
} 