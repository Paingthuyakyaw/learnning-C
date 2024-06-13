#include <stdio.h>

int main(){
    int age = 0;

    printf("Enter your age:");
    scanf("%d", &age);
    if(age >= 17) {
        printf("Over 18");
    }else {
        printf("Under 17");

    }
    return 0;
}