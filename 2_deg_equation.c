#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
    float a,b,c,D,x1,x2;
    printf("Chuong trinh giai phuong trinh ax^2+bx+c=0");
    printf("\n Nhap cac he so a,b,c:");
    scanf("%f%f%f",&a,&b,&c);
    D=b*b-4*a*c;
    if (D>0)
    {
        x1=(-b-sqrt(D))/(2*a);
        x2=(-b+sqrt(D))/(2*a);
        printf("\n Phuong trinh co hai nghiem \n x1 = %0.2f, x2 = %0.2f",x1,x2);
    }
    else if (D==0)
    {
        x1=-b/(2*a);
        printf("\n Phuong trinh co nghiem kep \n x = %0.2f",x1);
    }
    else 
    printf("\n Phuong trinh khong co nghiem thuc");
    getch();
}