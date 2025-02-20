#include <stdio.h>
int main(){
    //init
    int scores[5];

    //take values
    printf("Enter score of 5 matches: "); 
    for(int i= 0; i < 5; i++){
        scanf("%d", &scores[i]);
    }

    //highest score
    int highest = scores[0];
    for(int i = 1; i < 5; i++){
        if(scores[i] > highest){
            highest = scores[i];
        }
    }

    //lowest
    int lowest = scores[0];
    for(int i = 1; i < 5; i++){
        if(scores[i] < lowest){
            lowest = scores[i];
        }
    }

    //average
    int sum = 0; 
    for(int i = 0 ; i < 5; i++){
        sum += scores[i];
    }
    int average = sum / 5; 

    printf("Highest Score: %d\n", highest);
    printf("Lowest Score: %d\n", lowest);
    printf("Average Score: %d\n", average);

    return 0; 
}