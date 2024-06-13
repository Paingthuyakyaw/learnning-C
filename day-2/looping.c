#include <stdio.h>

// looping

int main (){
    int i = 0;
    int count = 0;
    printf("This is for loop");
    for (int i = 0; i < 100; i = i +2)
    {   
       printf("Count = %d \n" , i);
       printf("last Count = %d \n" , count );
       count++;
    }
    return 0;
}