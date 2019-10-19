#include<graphics.h>

void A(int i);
void B(int i);
void C(int i);
void D(int i);
int h=128,x=300,y=300,i,n=7;

int main()
{
   initwindow(800,800,"ser");
   do
   {
       ++i;
       x-=h; h/=2; y-=h;
       moveto(x,y); setcolor(i);
       A(i); x+=h; y+=h; lineto(x,y);
       B(i); x-=h; y+=h; lineto(x,y);
       C(i); x-=h; y-=h; lineto(x,y);
       D(i); x+=h; y-=h; lineto(x,y);
       getch();
   }
   while(i<n);

}
void A(int i)
{
    if(i>0)
    {
        A(i-1); x+=h; y+=h; lineto(x,y);
        B(i-1); x+=2*h;      lineto(x,y);
        D(i-1); x+=h; y-=h; lineto(x,y);
        A(i-1);
    }
}
void B(int i)
{
    if(i>0)
    {
        B(i-1); x-=h; y+=h; lineto(x,y);
        C(i-1); y+=2*h;      lineto(x,y);
        A(i-1); x+=h; y+=h; lineto(x,y);
        B(i-1);
    }
}
void C (int i)
{
    if (i>0)
    {
        C(i-1); x-=h; y-=h; lineto(x,y);
        D(i-1); x-=2*h;      lineto(x,y);
        B(i-1); x-=h; y+=h; lineto(x,y);
        C(i-1);
    }
}
void D(int i)
{
    if(i>0)
    {
        D(i-1); x+=h; y-=h; lineto(x,y);
        A(i-1); y-=2*h;      lineto(x,y);
        C(i-1); x-=h; y-=h; lineto(x,y);
        D(i-1);
    }
}
