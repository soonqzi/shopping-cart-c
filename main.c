#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <windows.h>

#ifdef _WIN32
#include <windows.h>
#define sleep_seconds(x) Sleep((x) * 1000)
#else
#include <unistd.h>
#define sleep_seconds(x) sleep(x)
#endif

int main()
{
    // SHOPPING CART PROGRAM

    // list all variables:
    char item[50] = "";
    float price = 0.0f;
    int quantity = 0;
    char currency = '$';
    float total = 0.0f;

    // welcome page:
    printf("You've entered the supermarket!\n\nCheck out our top sales this month:\n");
    printf("====================================\n");
    printf("%-20s | %5d purchases\n", "Zuckerberg's Socks", 1229);
    printf("%-20s | %5d purchases\n", "Pumpkin Spice", 632);
    printf("%-20s | %5d purchases\n", "Kombucha", 505);
    printf("%-20s | %5d purchases\n", "Toilet paper", 412);
    printf("%-20s | %5d purchases\n", "Anti-Magpie Set", 310);
    printf("====================================\n");

    // what the user can purchase
    printf("\n\nHere's what's on the shelf today:\n");
    printf("====================================\n");
    printf("Item name                             Price (USD)\n\n");
    printf("%-40s| %5.2f\n", "Frozen Margherita Pizza", 19.99);
    printf("%-40s| %5.2f\n", "Nestle ice cream tub", 7.99);
    printf("%-40s| %5.2f\n", "Mineral water", 5.99);
    printf("%-40s| %5.2f\n", "Play-Doh set", 29.99);
    printf("%-40s| %5.2f\n", "Unlimited Kombucha membership card", 99.99);
    printf("====================================\n");

    // asks the user what they want to buy
    printf("\nWhat item would you like to buy?: ");
    fgets(item, sizeof(item), stdin);
    item[strlen(item) - 1] = '\0';

    // how much it is
    printf("How much does each item cost?: %c ", currency);
    scanf("%f", &price);

    //...and how many of that item they'd like
    printf("How many would you like?: ");
    scanf("%d", &quantity);

    // total bill calculation formula
    total = price * quantity;

    if (quantity <= 0)
    {
        total = 0;
    }

    if (price <= 0)
    {
        total = 0;
    }

    // prints out user's order
    if (total > 0)
    {
        printf("\nYour order: %d %s(s).\n", quantity, item);
    }

    if (total < 0)
    {
        printf("Your shopping cart is empty....\n");
    }

    printf("======================");

    // prints out total price
    printf("\nYour total is: %c%.2f\n", currency, total);

    // prints a message if the user isn't buying anything
    if (total == 0)
    {
        printf("\nYou walked out, empty handed....\n");
    }

    if (total > 0)
    {
        printf("\n\nYou've arrived at the self-service counter! Please wait...\n");
        sleep_seconds(5);
        printf("=====================\n");
        printf("Payment complete. \n\nPlease come again. Have a nice day!\n");
    }

    return 0;
}
