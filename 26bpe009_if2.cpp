#include<stdio.h>

int main()
{
    int a,b,c,h,s;
    printf("ënter 3 values:");
        scanf("%d %d %d ",&a,&b,&c);
        if(a>b)
            {
                h=a; s=b;

            }
        else
            {
                h=b; s=a;
            };
            if (c>h)
                h=c;
            else
                if (a>b)
            {
                h=a; s=b;

            }

        else
        {
            h=b;s=a;

        }
            if(c>h)
                h=c;
            else
                if(c<s)
            s=c;

            if(h==s)
                printf("all values are same,\n");
                    else
                    printf("highest value: %d lowest vslue: %d\n",h,s);
return 0;
}
