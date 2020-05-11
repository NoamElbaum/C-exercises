#include <stdio.h>

void main()
{
    int arr[100],x, i=0; //able to list up to a 100 days
    int rainy=0, dry=0;
    int dry_period=1, max_period=0;

    while(1)
    {
        printf("to stop write 1000\nwrite the amount of rain: ");
        scanf("%d", &x);
        if(x == 1000)
            break;
        else
        {
            arr[i] = x;
            i++;
        }
    }
    for(int y =0; y<i; y++)
    {
        if(arr[y] == 0)
            dry++;
        else
            rainy++;
    }

    for(int y =0; y<i; y++)
    {
        if (arr[y] == 0 && arr[y+1]  == 0)
            dry_period++;
        else if(arr[y] == 0)
        {
            if(max_period < dry_period)
                max_period = dry_period;
            dry_period = 1;
        }
    }
    printf("rainy days: %d\ndry days: %d\nmax dry period: %d",rainy, dry, max_period);
}