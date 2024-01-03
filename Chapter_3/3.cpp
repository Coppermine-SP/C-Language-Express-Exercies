#include <stdio.h>

int main(void){
   float width, height;
   printf("삼각형의 밑변: ");
   scanf("%f", &width);
   printf("삼각형의 높이: ");
   scanf("%f", &height);

   printf("삼각형의 넓이: %.2f", width * height * 0.5);
}