#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
    float a,b,max,min;
    int k;
    tt:
    system("cls");
    printf("Nhap so:");
    printf("\n a = ");
    scanf("%f",&a);
    printf("b = ");
    scanf("%f",&b);
    if (a>b)
    {
        max = a;
        min = b;
    }
    else 
    {
        max = b;
        min = a;
    };
    printf("max(a,b) = %0.2f\n min(a,b) = %0.2f",max,min);
    printf("\n Co tiep tuc khong, c/k?");
    k = getch();
    if (k=='c'||k=='C') goto tt;
}