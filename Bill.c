// Online C compiler to run C program online
#include <stdio.h>

int main() {
    int item_id, quantity, num_items;
    float price = 0.0, total = 0.0;
    char customer_name[50];

    printf("Enter Customer Name: ");
    scanf(" %[^\n]", customer_name);

    printf("\n--- MENU ---\n");
    printf("1. Pizza - ₹250.00\n");
    printf("2. Burger - ₹150.00\n");
    printf("3. Pasta - ₹200.00\n");
    printf("4. Sandwich - ₹120.00\n");
    printf("5. Coffee - ₹80.00\n");

    printf("\nEnter number of items to order: ");
    scanf("%d", &num_items);

    printf("\n--- BILL ---\n");
    printf("Customer: %s\n", customer_name);
    printf("Items Ordered:\n");

    for (int i = 0; i < num_items; i++) {
        printf("\nEnter Item ID: ");
        scanf("%d", &item_id);
        printf("Enter Quantity: ");
        scanf("%d", &quantity);

        if (item_id == 1) {
            price = 250.0;
            printf("Pizza * %d = ₹%.2f\n", quantity, price * quantity);
        } else if (item_id == 2) {
            price = 150.0;
            printf("Burger * %d = ₹%.2f\n", quantity, price * quantity);
        } else if (item_id == 3) {
            price = 200.0;
            printf("Pasta * %d = ₹%.2f\n", quantity, price * quantity);
        } else if (item_id == 4) {
            price = 120.0;
            printf("Sandwich * %d = ₹%.2f\n", quantity, price * quantity);
        } else if (item_id == 5) {
            price = 80.0;
            printf("Coffee * %d = ₹%.2f\n", quantity, price * quantity);
        } else {
            printf("Invalid Item ID\n");
            price = 0.0;
        }

        total += price * quantity;
    }

    printf("\nTotal Amount: ₹%.2f\n", total);
    printf("Thank you for dining with us!\n");

    return 0;
}
