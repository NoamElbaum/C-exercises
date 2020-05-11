#include <stdio.h>

void main()
{
    int matrix[10][10], some=0;

    for(int i = 0; i<10; i++)
    {
        for(int z = 0; z<10; z++)
            matrix[i][z] = z;
    }

    for(int i = 0; i<10; i++)
    {
        for(int z = 0; z<10; z++)
        {
            if(i == z)
                some = some + matrix[i][z];
        }
    }
    printf("%d", some);
}