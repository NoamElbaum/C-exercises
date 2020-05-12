#include <stdio.h>

void main()
{
    short x,inp = 13;
    short arr[8];
    for(int i = 7; i >= 0; i--)
    {
        x = inp >> i;
        arr[i] = x & 1;
        printf("%d\n", x&1);
    }
    for(int i = 0; i<8; i++)
    {
        printf("%d, ",arr[i]);
    }
}