#include <stdio.h>
#include <stdlib.h>  
#include "Music.h"

circularLinkedList* makeNode();
void makeCircularLinkedList(int n, circularLinkedList *head);
void printCircularLinkedList(int n, circularLinkedList *head);
void updateCircularLinkedList(char c, int n, circularLinkedList *head);

int main(){ 
    //init
    int numberOfSongs;
    char songChar; 
    circularLinkedList *head = NULL;

    //get details 
    printf("Enter the number of songs: "); 
    scanf("%d", &numberOfSongs); 
    makeCircularLinkedList(numberOfSongs, head); 
    for(int i = 0; i < numberOfSongs ; i++){
        printf("Enter Song Character: "); 
        scanf("%c", &songChar); 
        updateCircularLinkedList(songChar, numberOfSongs, head);
    }
    //now print the details
    printCircularLinkedList(numberOfSongs, head); 

    return 0; 
}

circularLinkedList* makeNode(){
    circularLinkedList *p = (circularLinkedList*)malloc(sizeof(circularLinkedList));
    return p; 
}

void makeCircularLinkedList(int n, circularLinkedList *head){
    circularLinkedList *node; 
    node = makeNode();
    head = node; 
    node->next = head;
}

void updateCircularLinkedList(char c, int n, circularLinkedList *head){
    circularLinkedList *p = head;
    for (; p != NULL; p = p->next){
        p->songName = c; 
    }
    p->next = head;  

}

void printCircularLinkedList(int n, circularLinkedList *head){ 
    printf("Current Song: %c", head->songName); 
    circularLinkedList *p = makeNode();
    p = head->next; 
    for (; p->next != NULL; p = p->next){
        if (p == head){
            printf("Next Song: Song %c (Looped Back)\n", p->songName);
        } else {
            printf("Next Song: Song %c\n", p->songName);
        }
    }
}