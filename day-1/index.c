// ========== testing syntax 
// #include <stdio.h>

// int main(){
//     int mathi;
//     printf("どうでしたか？");
//     scanf("%d" , &mathi);
//     printf("だじょうぶ %d" , mathi);
//     return 0;
// }


#include <stdio.h>

int main(){
    int first_number = 0;
    int sec_number = 0;
    int total;

    printf("Enter your First Number :");

    scanf("%d" , &first_number);

    printf("Enter your second Number :");

    scanf("%d",&sec_number);

    total = first_number + sec_number;

    printf("total number is = %d " ,total);

    return 0;
}
 