#include <stdio.h>

int main(void){
    int i;
    printf("마일을 입력하시오: ");
    scanf("%d", &i);

    printf("%.2f 마일은 %.2f미터 입니다.", (float)i, (float)i * 1609);
}