#include <stdio.h>

int main(void){
    float x;
    printf("실수를 입력하시오: ");
    scanf("%f", &x);
    printf("다항식의 값은 %.2f", (float)((3*x*x) + (7*x) + 11));
}