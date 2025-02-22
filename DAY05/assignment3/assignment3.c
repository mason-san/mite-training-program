#include <stdio.h>
#include <stdlib.h>  
#include "Music.h"

circularLinkedList* makeNode();
void updateCircularLinkedList(char c, int n, circularLinkedList *head);
void printCircularLinkedList(int n, circularLinkedList *head); 

int main(){ 
    //init
    int numberOfSongs;
    char songChar; 
    circularLinkedList *head = NULL;

    //get details 
    printf("Enter the number of songs: "); 
    scanf("%d", &numberOfSongs); 
    for(int i = 0; i < numberOfSongs ; i++){
        printf("Enter Song Character: "); 
        scanf(" %c", &songChar); 
        updateCircularLinkedList(songChar, numberOfSongs, head);
    }
    //now print the details
    printf("%c", head->songName);
    //printCircularLinkedList(numberOfSongs, head); 

    return 0; 
}

circularLinkedList* makeNode(){
    circularLinkedList *p = (circularLinkedList*)malloc(sizeof(circularLinkedList));
    return p; 
}

/*void makeCircularLinkedList(int n, circularLinkedList *head){
    circularLinkedList *node; 
    node = makeNode();
    if(node == NULL){
        printf("Memory Overflow\n"); 
        return;
    }    
    head = node; 
    node->next = head;
}*/

void updateCircularLinkedList(char c, int n, circularLinkedList *head){
    circularLinkedList *node; 
    node = makeNode();
    if(node == NULL){
        printf("Memory Overflow\n"); 
        return;
    } 

    node->songName = c;

    if (head == NULL){
        head = node; 
    } else {
        circularLinkedList *p = head;
        for (; p->next != head ; p= p->next);
        p->next = node;
    }

    node->next = head;  
    free(node);

}

void printCircularLinkedList(int n, circularLinkedList *head){ 
    printf("Current Song: %c", head->songName); 
    /*circularLinkedList *p;
    p = head; 
    while (p!=head){
        if (p == head){
            printf("Next Song: Song %c (Looped Back)\n", p->songName);
            return;
        } else {
            printf("Next Song: Song %c\n", p->songName);
        }
        p = p->next; 
    }*/
}