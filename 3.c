#include <stdio.h>

void func(short a)
{
    short c,x;
    for(c = 15; c>=0;c--)
    {
        x = a >> c;
        if(x & 1)
            printf("1");
        else
            printf("0");
    }
}
void main()
{
    func(128);
}