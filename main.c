#include <stdio.h>
const int taxrate = 9;
float itemcost , salestax;
int main() {
    printf("Please Enter Cost of item : ");
    scanf("%f" , &itemcost);
    salestax = (taxrate * itemcost) / 100;
    printf(" item Cost is = %.2f \n" , itemcost);
    printf(" Sales tax is %.2f\n" , salestax);
    return(0);
}