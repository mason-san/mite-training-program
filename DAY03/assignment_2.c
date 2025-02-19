#include <stdio.h> 
#include <string.h> 

int main(){
    //init  
    char st2[30],  st1[30]; 

    //entry 
    printf("Enter DNA Sequence: "); 
    scanf("%s", st1); 
    printf("Enter pattern to search: "); 
    scanf("%s", st2); 

    //try 
    int count = 0;
    int sublen = strlen(st2); 
    const char *tmp = st1; 

    while((tmp =strstr(tmp, st2)) != NULL){
        count++; 
        tmp+=sublen; 
    }

    printf("Patten found %d time(s) in the DNA sequence\n",count);
    return 0; 
}