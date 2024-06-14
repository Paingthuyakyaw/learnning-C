#include <stdio.h>


int main(){
    for (int i = 0; i < 10; i++)
    {
        for (int s = 0; s < 10 -i; s++)
        {
           printf(" ");
        }
        for (int st1 = 0; st1 < i * 2 + 1 ; st1++)
        {
           printf("*");
        }
        for (int s2 = 0; s2 < 10 - i  ; s2++)
        {
            printf(" ");
        }
           for (int s3 = 0; s3 < 10 - i ; s3++)
        {
            printf(" ");
        }
        for (int st2 = 0; st2 < i * 2 + 1; st2++)
        {
          printf("*");
        }
        
        // for (int st2 = 0; st2 < i * 2 ; st2++)
        // {
        //    printf("*");
        // }
        
        
        

        printf("\n");
        
    }
    
}