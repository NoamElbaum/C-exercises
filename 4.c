#include <stdio.h>

void main()
{
    int R[10];
    int arr[10];
    int cntr=0,z =9;

    for (int i = 0; i <10; i++)
    {
        printf("Enter ten numbers");
        scanf("%d", R[i]);
    }

    for(int i=0; i<10; i++)
    {
        if(R[i]%2 == 0)
        {
            arr[cntr] =  R[i];
            cntr++;
        }
    }

    for(int i=0; i<10; i++)
    {
        if(R[i]%2 != 0)
        {
            arr[z] =  R[i];
            z--;
        }
    }

    for(int i = 0; i< 10; i++)
        printf("%d, ", arr[i]);

    printf("\nnum of even: %d", cntr);

}