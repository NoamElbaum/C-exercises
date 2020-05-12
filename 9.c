#include <stdio.h>

void main(){

    int arr [10];

    int counter =0;

    printf("Hi, enter 10 numbers please :\n");

    for (int i=0; i<10; i++){

        scanf("%d", & arr[i]);

        if (arr[i] >10 && arr[i] <50)

            counter ++;
    }

    printf("Hello,we have %d numbers between 10 - 50 \n", counter);

}