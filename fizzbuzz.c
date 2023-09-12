#include <stdio.h>
int main(){
    short const LIMIT = 100;
    short i;
    for(i=1; i<=LIMIT; i++){

        if ((i % 3 == 0) && (i % 5 == 0)){
            printf("Fizzbuzz");
        }

        else if (i % 3 == 0){
            printf("Fizz");
        }

        else if (i % 5 == 0){
            printf("Buzz");
        }

        else
        {
            printf("%d",i);
        }

        if (i != LIMIT){
            printf(", "); /* We do not want to print the comma at the end, as it is there to separate the outputs) */
        }
    }
    return 0;
}