#include<stdio.h>
#include<math.h>
int main()
{
    int x;
    float y,price;
    scanf("%d %f",&x,&y);
    price=y/(1-(x/100.0));
    printf("%.2f\n", ceil(price*100)/100);
    return 0;
}


