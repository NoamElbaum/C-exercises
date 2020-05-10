#include <stdio.h>

void chk2(int num, int *pr)
{
    *pr = num/100;
    *(pr+1) = num/10 % 10;
    *(pr+2) = num % 10;
}


void main()
{
    int arr[5] = {9,99,1000,999,100};
    int res[3], *pr ;
    pr = res;
    printf("%d\n", pr); //print the memory

    for(int i =0; i<5; i++)
    {
        chk2(arr[i], pr);
        printf("%d, %d, %d\n", res[0], res[1], res[2]);
    }

}