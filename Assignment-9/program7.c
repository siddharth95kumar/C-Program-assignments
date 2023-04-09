/*
Program to take the value from the user as input electricity unit charges and
calculate total electricity bill according to the given condition .
Using the switch statement.
For the first 50 units Rs. 0.50/unit
For the next 100 units Rs. 0.75/unit
For the next 100 units Rs. 1.20/unit
For units above 250 Rs. 1.50/unit
An additional surcharge of 20% is added to the bill.
*/

#include <stdio.h>

int main()
{
    int unit;
    float total,total_bill;

    printf("Enter the electricity unit charges: ");
    scanf("%d", &unit);

    switch(unit<51)
    {
    case 1:
        total=unit * 0.5;
        break;
    case 0:
        switch(unit<151)
        {
            case 1:
                total= 25 + (unit - 50)*0.75;
                break;
            case 0:
                switch(unit<251)
                 {
                    case 1:
                        total=25 + 112.5 + (unit - 150)*1.2;
                        break;
                    case 0:
                        total=25 + 112.5 + 300 + (unit - 250)*1.5;
                        break;
                 }
    }
    }
    total_bill = total*0.2 + total;
    printf("Total electricity bill: Rs. %.2f\n", total_bill);

    return 0;
}
