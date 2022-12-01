#include<stdio.h>
#include<conio.h>
int main()
{
    int ma,k;
    lai:
    system("cls");
    printf("\n Nhap ma tu 1 toi 5 \n ma = ");
    scanf("%d",&ma);
    if (ma==1)
    {
        printf("\n Junior");
        getch();
    }
    else if (ma==2)
    {
        printf("\n Senior");
        getch();
    }
    else if (ma==3)
    {
        printf("\n Advanced");
        getch();
    }
    else if (ma==4)
    {
        printf("\n Olympiad");
        getch();
    }
    else if (ma==5)
    {
        printf("\n Undergraduate");
        getch();
    }
    else 
    {
        printf("\n Nhap ma sai!, hay nhan enter va nhap lai");
        k=getch();
        if (k==13) goto lai;
    };
}