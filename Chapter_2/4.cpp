#include <stdio.h>

int main(void){
    printf("일\t월\t화\t수\t목\t금\t토\n");
    for(int i = 1; i <= 31; i++){
         printf("%-8d%s",i, i % 7 == 0 ? "\n" : "");
     }
     printf("\n");
     return 0;
}
    
