#include <bits/stdc++.h>
using namespace std;

int encoderCharacter(int a){
    if (a < 109){
        int x = 109 - a; 
        int y = x + (x+1); 
        return y + a; 
    } else if (a > 109){
        int x = a - 109; 
        int y = x + (x-1); 
        return a - y; 
    } else {
        return 0; 
    }
}

int main() {
	// your code goes here
    int t; 
    cin>>t; 
    while(t--){
        //init
        char s[25]; 
        int n; 
        cin>>n; 
        scanf("%s", s); 
        
        //encode first (swap characters)
        //First encoding 
        if ((n%2) == 0){
            for(int i = 0 ; i < n ; i+=2){
                char temp = s[i]; 
                s[i] = s[i+1]; 
                s[i+1] = temp; 
            }
        } else {
            for(int i = 0 ; i!=(n - 1); i+=2){
                char temp = s[i]; 
                s[i] = s[i+1]; 
                s[i+1] = temp; 
            }
        }
        
        //second enconding
        for(int i = 0 ; i < n; i++){
            s[i] = encoderCharacter(s[i]);
        }
        printf("%s\n", s); 
    }
}
