
#include <stdio.h>

void main()
{
    int choice, choice2;
    int quantity, quantity2;
    int total_bill = 0;

    char more;

    printf("Welcome to Ice Cream Store!\n");

    printf("\nHere is our menu:\n");
    printf("1. Vanilla - Rs. 100\n");
    printf("2. Chocolate - Rs. 160\n");
    printf("3. Strawberry - Rs. 200\n");
    printf("4. Mango - Rs. 230\n");
    printf("5. Butterscotch - Rs. 250");

    printf("\nOrder what do you want to order: ");
    scanf("%d", &choice);

    if(choice == 1 || choice == 2 || choice == 3 || choice == 4 || choice == 5)
    {
        printf("Enter quantity: ");
        scanf("%d", &quantity);

        if(choice == 1)
            total_bill = 100 * quantity;

        else if(choice == 2)
            total_bill = 160 * quantity;

        else if(choice == 3)
            total_bill = 200 * quantity;

        else if(choice == 4)
            total_bill = 230 * quantity;
        else if(choice == 5)
            total_bill = 250 * quantity;

        printf("Your bill is: Rs. %d\n", total_bill);

        printf("Do you want to order more? (y/n): ");
        scanf(" %c", &more);

        if(more == 'y' || more == 'Y')
        {
            printf("Enter second ice cream choice: ");
            scanf("%d", &choice2);

            if(choice2 >= 1 && choice2 <= 5)
            {
                printf("Enter quantity: ");
                scanf("%d", &quantity2);

                if(choice2 == 1)
                    total_bill = total_bill + (100 * quantity2);

                else if(choice2 == 2)
                    total_bill = total_bill + (160 * quantity2);

                else if(choice2 == 3)
                    total_bill = total_bill + (200 * quantity2);

                else if(choice2 == 4)
                    total_bill = total_bill + (230 * quantity2);
                
                else if(choice2 == 5)
                    total_bill =
total_bill + (250 * quantity2);
            }
            else
                printf("Invalid choice!\n");
        }

        printf("\n=================================\n");
        printf("Your Total Bill is: Rs. %d\n", total_bill);
        printf("Thank you for ordering!\n");
        printf("===================================\n");
    }
    else
    {
        printf("Invalid choice!");
    }
}

