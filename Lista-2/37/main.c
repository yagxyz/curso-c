#include <stdio.h>

int data;
int main()
{
    int data,a,m,d;
    printf("Digite o ano que deseja saber a data da Pascoa: ");
    scanf("%d", &a);
    int pascoa(int x);
    data=pascoa(a);
    (data-a)/10000%2==0?m=4:((data-a)/10000%2==1?m=3:0);
    d=(((data-a)/10000)-m)/100;
    switch(m)
    {
        case 4:
            printf("\nA data da pascoa sera no dia %d de abril de %d\n",d,a);
            break;
        case 3:
            printf("\nA data da pascoa sera no dia %d de marco de %d\n",d,a);
    }
    return 0;
}
int pascoa(int x)
{
    data=0;
    int c,n,k,i,j,l,m,d;
    c = x/100;
    n = x - (19*(x/19));
    k = (c - 17)/25;
    i = c - c/4 - ((c-k)/3) +(19*n) + 15;
    i = i - (30*(i/30));
    i = i - ((i/28)*(1-(i/28))*(29/(i+1))*((21-n)/11));
    j = x + x/4 + i + 2 -c + c/4;
    j = j - (7*(j/7));
    l = i - j;
    m = 3 + ((l+40)/44);
    d = l + 28 - (31*(m/4));
    data=x+m*10000+d*1000000;
    return data;

}
