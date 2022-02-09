#include"math.h"
main()
{
    float a,b,c,s,area;
    printf("enter the values of a,b,c");
    scanf("%f %f %f",&a,&b,&c);
    s=(a+b+c)/2;
    area=sqrt(s*(s-a)*(s-b)*(s-c));
    printf("area of tringle=%f",area);
    getch();

}
