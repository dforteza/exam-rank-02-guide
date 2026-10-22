#include <stdio.h>

int	    is_power_of_2(unsigned int n)
{
    int flg;

    if (n == 0)
        return (0);
        
    flg = 1;
    while (n >= 2)
    {
        // printf("%d\n", n);
        if (n % 2 != 0)
        {
            flg = 0;
            break ;
        }
        n /= 2;
    }
    if (flg == 0)
        return (0);
    return (1);
}

int main(void)
{
    printf("33: %d\n", is_power_of_2(33));
    printf("22: %d\n", is_power_of_2(22));
    printf("2 : %d\n", is_power_of_2(2));
    return (0);
}