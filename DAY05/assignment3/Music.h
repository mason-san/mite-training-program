#ifndef MUSIC_HEADER
#define MUSIC_HEADER

struct node{
    char songName; 
    struct node *next; 
}; 
typedef struct node circularLinkedList;  

#endif