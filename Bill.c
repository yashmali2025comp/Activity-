// Online C compiler to run C program online
#include <stdio.h>
#include <string.h>

#define MAX_ITEMS 10

struct MenuItem {
    int id;
    char name[30];
    float price;
};

struct OrderItem {
    int id;
    int quantity;
};

int main() {
    struct MenuItem menu[] = {
        {1, "Pizza", 250.0},
        {2, "Burger", 150.0},
        {3, "Pasta", 200.0},
        {4, "Sandwich", 120.0},
        {5, "Coffee", 80.0}
    };

    struct OrderItem order[MAX_ITEMS];
    int num_items = 0;
    char customer_name[50];
    float total = 0.0;

    printf("Enter Customer Name: ");
    scanf(" %[^\n]", customer_name);

    printf("\n--- MENU ---\n");
    for (int i = 0; i < 5; i++) {
        printf("%d. %s - ₹%.2f\n", menu[i].id, menu[i].name, menu[i].price);
    }

    printf("\nEnter number of items to order: ");
    scanf("%d", &num_items);

    for (int i = 0; i < num_items; i++) {
        printf("\nEnter Item ID: ");
        scanf("%d", &order[i].id);
        printf("Enter Quantity: ");
        scanf("%d", &order[i].quantity);
    }

    printf("\n--- BILL ---\n");
    printf("Customer: %s\n", customer_name);
    printf("Items Ordered:\n");

    for (int i = 0; i < num_items; i++) {
        for (int j = 0; j < 5; j++) {
            if (order[i].id == menu[j].id) {
                float item_total = menu[j].price * order[i].quantity;
                printf("%s x %d = ₹%.2f\n", menu[j].name, order[i].quantity, item_total);
                total += item_total;
            }
        }
    }

    printf("Total Amount: ₹%.2f\n", total);
    printf("Thank you for dining with us!\n");

    return 0;
}
