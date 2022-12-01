#include<stdio.h>
#include<conio.h>
#define N 100
int main()
{
    float x[N], y[N], s;
    int n,i;
    system("cls");
    /*Nhập số chiều thực tế*/
    printf("\n Nhap so chieu cua vector: "); scanf("%d",&n);
    /*Vào toạ độ cho vector*/
    printf("\n Nhap toa do hai vector: ");
    i=1;
    vaotd:
    printf("\n x[%d] = ",i);
    scanf("%f",&x[i]);
    printf("\n y[%d] = ",i);
    scanf("%f",&y[i]);
    if (++i<=n)
    goto vaotd;
    /*Tính tích vô hướng*/
    s=0.0;
    i=1;
    tichvohuong:
    s+=x[i]*y[i];
    if (++i<=n)
    goto tichvohuong;
    /*In kết quả*/
    i=1;
    inkq:
    printf("\n x[%d] = %0.1f, y[%d] = %0.1f",i,x[i],i,y[i]);
    if (++i<=n)
    goto inkq;
    printf("\n Tich vo huong cua hai vector x,y la: xy = %0.1f",s);
    getch();
}