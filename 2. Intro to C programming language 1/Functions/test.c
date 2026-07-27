#include <stdio.h>

int max_Num(int i, int j)
{
    if (i > j)
      return i;
    else
      return j;
}

void add(int x, int y)
{
    printf("The sum of the numbers is %d",x+y);
}

int rect_Area()
{
    int len, wid;    

    printf("Enter the length of the rectangle: ");

    scanf("%d",&len);    

    printf("Enter the width of the rectangle: ");

    scanf("%d",&wid);    

    return len * wid;
}

int add_r(int x, int y)
{
    return x+y;
}

int fact(int num)
{
    if (num == 1)
        return (1);
    else
        return (num * fact(num - 1));
}

int main(void)
{
    int x = 15, y = 20;  

    int m = max_Num(x, y);  

    printf("The bigger number is %d", m);

    add(5, 2);

    printf("rect area: %d\n", rect_Area());

    return 0;
}

