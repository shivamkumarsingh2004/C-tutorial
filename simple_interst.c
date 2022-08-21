#include <stdio.h>
int main()
{
    int principle = 10000, rate = 5, year = 5;
    int Si = (principle * rate * year)/100;
    printf("the simple interest is %d", Si);

return 0;
}