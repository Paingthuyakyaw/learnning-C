#include <stdio.h>

int main(){
   printf("This is looping testing \n");
   for(int i = 0 ; i < 7 ; i++){
    printf("*");
    for(int x = 0 ; x < i ; x++){
        printf("#");
    }
    printf("\n");
   }
   
}

// result is 
// *
// *#
// *##
// *###
// *####
// *#####
// *######