#include <iostream>
#include<graphics.h>
using namespace std;
int main()
{
    int gd = DETECT, gm;
    initgraph(&gd, &gm, NULL);
    int r=30,cx=310,cy=120;
    int p = 1-r;
    int x=0,y=r;
    while(x<y)
    {
        if(p<0)
        {
            x=x+1;
            p=p+2*(x)+1;
        }
        else
        {
            x=x+1;
            y=y-1;
            p=p+2*x+1-2*y;
        }
        putpixel(x+cx,y+cy,WHITE);
        putpixel(y+cx,x+cy,WHITE);
        putpixel(x+cx,-y+cy,WHITE);
        putpixel(y+cx,-x+cy,WHITE);
        putpixel(-y+cx,-x+cy,WHITE);
        putpixel(-x+cx,-y+cy,WHITE);
        putpixel(-x+cx,y+cy,WHITE);
        putpixel(-y+cx,x+cy,WHITE);
    }
    getch();
}
