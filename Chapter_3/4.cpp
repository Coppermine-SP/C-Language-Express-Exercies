#include <stdio.h>

int main(void){
    float f;
    printf("화씨값을 입력하시오: ");
    scanf("%f", &f);
    printf("섭씨값은 %.2f도 입니다.", 5/9*(f-32));
}