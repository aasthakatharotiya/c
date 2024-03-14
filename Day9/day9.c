#include <stdio.h>

void main(){

    //Question-1

    int odd_even;
    printf("Enter any Number:");
    scanf("%d",&odd_even);
    
    (odd_even%2==0) ? printf("%d is Even Number",odd_even) : printf("%d is Odd Number",odd_even); 
    
    

    //Question-2

    int unit;
    float amt, total_amt, sur_charge;

    printf("Enter total units consumed: ");
    scanf("%d", &unit);

    if(unit <= 50)
    {
        amt = unit * 0.50;
    }
    else if(unit <= 150)
    {
        amt = 25 + ((unit-50) * 0.75);
    }
    else if(unit <= 250)
    {
        amt = 100 + ((unit-150) * 1.20);
    }
    else
    {
        amt = 220 + ((unit-250) * 1.50);
    }


    sur_charge = amt * 0.20;
    total_amt  = amt + sur_charge;

    printf("Electricity Bill = Rs. %.2f", total_amt);

   
}