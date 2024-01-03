#include <stdio.h>

int main(void){
    printf("연봉을 입력하시오(단위: 만원): ");
    int i;
    scanf("%d", &i);
    printf("\n10억을 모으는데 걸리는 시간(단위: 년) : %.2f", float(100000 / i));
}