#include<stdio.h>
int main()
{
    char pn;
    int qty;
    float pr, dis, Total, FA;

    printf("Enter the product name: ");
    scanf("%s", &pn);

    printf("Enter quantity of the product: ");
    scanf("%d", &qty);

    printf("Enter price of the product: ");
    scanf("%f", &pr);

    Total = qty * pr;

    if (Total > 10000)
    {
        dis = Total * 0.15;
    }
    else if (Total > 5000)
    {
        dis = Total * 0.10;
    }
    else
    {
        dis = Total * 0.05;
    }

    FA = Total - dis;

    
    printf("\nTotal Amount : %f", Total);
    printf("\nDiscount     : %f", dis);
    printf("\nFinal Amount : %f", FA);


}


