#include <stdio.h>

void main()
{
    int arr[] = {1,2,2,4,5,6,6,5,4,3,2,1};
    int z = 11;

    for(int i = 0; i<12;i++)
    {
        if(arr[i] == arr[z])
            z--;
        else
            break;
    }
    if(z >5)
        printf("fail");
    else
        printf("success");
}