#include<stdio.h>
#include<conio.h>


void main()
{
    float a,b,ad,sb,ml ;
    float dv;
    printf("Ënter 2 Values:");
    scanf("%f %f",&a,&b);
    ad = a + b;
    sb = a - b;
    ml = a * b;
    dv =  a/b;
    printf("Ye le tehelka omlet = %.2f %.2f %.2f %.2f\n",ad,sb,ml,dv);
}
