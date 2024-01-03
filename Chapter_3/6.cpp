#include <stdio.h>

int main(void){
    int i;
    printf("몸무게를 입력하시오(단위: kg): ");
    scanf("%d", &i);
    printf("달에서의 몸무게는 %.2fkg입니다.", (double)i*0.17);
}