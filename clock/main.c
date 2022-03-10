#include <stdio.h>
#include <stdlib.h>

int main()
{
    int h=0,m=0,s=0;
    int d;

    printf("Set time: Hours:Minutes:Second \n");
    scanf("  %d %d %d",&h,&m,&s);

    for(h;h<24;h++)
    {

        for(m;m<60;m++)
        {

            for(s;s<60;s++)
            {
                printf("          %d:%d:%d\n\n ",h,m,s);
                for(double d=0;d<99999999;d++)
                {
                    d++;
                    d--;
                }


            }
           s=0;

        }
        m=0;

    }

    return 0;
}
