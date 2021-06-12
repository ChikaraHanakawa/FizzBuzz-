#include<stdio.h>
int main(void){

    int i;
    printf("数値を入力してください\n");

    scanf("%d", &i);

    if (0 == i % 3 && 0 == i % 5){
       printf("FizzBuzz\n");
   } else if (0 == i % 3){
       printf("Fizz\n");
   } else if (0 == i % 5){
       printf("Buzz\n");
   } else {
       printf("not FizzBuzz\n");
}

return 0;

}
