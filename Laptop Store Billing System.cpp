#include<stdio.h>
#include <conio.h>

#define DELL_PRICE 110.00
#define HP_PRICE 80.00
#define LENOVO_PRICE 9.20

int main(void)
{

    //	Local Declarations

    const double APPLE_PRICE = 500.00;
    const double ACER_PRICE = 48.00;
    const double taxRate = 8.25; 

    int dellQTY;
    int hpQTY;
    int lenovoQTY;
    int appleQTY;
    int acerQTY;

    float total_dell;
    float total_hp;
    float total_lenovo;
    float total_apple;
    float total_acer;
    float subTotal;
    float tax;
    float bill_Amount;
    char name[250];
    char cname[250];

    //	Statements

    printf("\t\tWelcome To Aimen's Laptop Sales Billing System\n");
    printf("\n Please Enter the following details. \n\n");
    
    printf("Cashier's Name: \n");
    scanf("%s", name);
    printf("Customer's Name: \n");
    scanf("%s", cname);
    
    printf("\n\t***Enter 0 for none****");

    printf("\nHow many Dell Laptops were sold? \n");
    scanf("%d", &dellQTY);

    printf("How many HP Laptops were sold? \n");
    scanf("%d", &hpQTY);

    printf("How many Lenovo Laptops were sold? \n");
    scanf("%d", &lenovoQTY);

    printf("How many Apple Laptops were sold? \n");
    scanf("%d", &appleQTY);

    printf("How many Acer Laptops were sold? \n");
    scanf("%d", &acerQTY);
    
    printf("\n Press Any Key To Generate Bill");
    getch();

    printf("\n\n\n\t\t\t\t\tLOADING \n\t\t\t\t\t");
    int a;
    for(a = 1; a < 8; a++) // Change 'a<?' to how many * you want
    {
        Sleep(500);
        printf("...");
    }
    printf("\n\n\t\t\t\t\tBill Generated. \n\n");
      
    system("PAUSE");
    system("CLS");

    //	Calculation Statements

    total_dell = dellQTY * DELL_PRICE;
    total_hp = hpQTY * HP_PRICE;
    total_lenovo = lenovoQTY * LENOVO_PRICE;
    total_apple = appleQTY * APPLE_PRICE;
    total_acer = acerQTY * ACER_PRICE;
    subTotal = total_dell + total_hp + total_lenovo + total_apple + total_acer;
    tax = (subTotal * taxRate) / 100;
    bill_Amount = subTotal + tax;

    //	Printing Bills
    printf("\n");
    printf("\t\t\t====================================================\n");
    printf("\t\t\t\t           Laptop Sales Bill\n");
    printf("\t\t\t====================================================\n");
    printf("\t\t\tQTY \t Description \t Unit Price$\t Total Price$\n");
    printf("\t\t\t--- \t ----------- \t ---------- \t -----------\n\n");
    printf("\t\t\t%02d \t Dell Laptop       %.2f       %10.2f \n", dellQTY, DELL_PRICE, total_dell);
    printf("\t\t\t%02d \t HP Laptop         %.2f       %10.2f  \n", hpQTY, HP_PRICE, total_hp);
    printf("\t\t\t%02d \t Lenovo Laptop     %.2f       %10.2f   \n", lenovoQTY, LENOVO_PRICE, total_lenovo);
    printf("\t\t\t%02d \t Apple Laptop      %.2f       %10.2f    \n", appleQTY, APPLE_PRICE, total_apple);
    printf("\t\t\t%02d \t Acer Laptop       %.2f       %10.2f     \n\n", acerQTY, ACER_PRICE, total_acer);
    printf("\t\t\t                                           ---------\n\n");
    printf("\t\t\t                           SUBTOTAL       %10.2f   \n", subTotal);
    printf("\t\t\t                           TAX            %10.2f    \n", tax);
    printf("\t\t\t                           Total$         %10.2f     \n", bill_Amount);
    printf("\t\t\t                           Customer       %s     \n", cname);
    printf("\t\t\t                           Cashier        %s     \n", name);
    printf("\t\t\t====================================================\n\n");
    printf("\t\t\t\t\t\tEnd of bill\n\n");

    system("PAUSE");
    system("CLS");
    //main();
    printf("\n\n\n\t\t\tBrought To You By code-projects.org\n\n");
    return 0;
}

