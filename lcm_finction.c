#include<stdio.h>

int main()
{
    int a,b;
    printf("enter the two number");
    scanf("%d %d",&a,&b);
    for(int i=1; i<=a*b ; i++)
    if(i%a==0 && i%b==0)
    {
      printf("lcm is %d",i);
      break;
    }
    return 0;
}
