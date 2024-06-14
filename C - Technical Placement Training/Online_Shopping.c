#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_ITEMS 100

typedef struct {
    int id;
    char name[50];
    float price;
} Item;

typedef struct {
    Item items[MAX_ITEMS];
    int itemCount;
} Cart;

void addItemToStore(Item store[], int *storeItemCount, int id, const char *name, float price) {
    store[*storeItemCount].id = id;
    strcpy(store[*storeItemCount].name, name);
    store[*storeItemCount].price = price;
    (*storeItemCount)++;
}

void displayStoreItems(Item store[], int storeItemCount) {
    printf("Available items:\n");
    for (int i = 0; i < storeItemCount; i++) {
        printf("ID: %d, Name: %s, Price: %.2f\n", store[i].id, store[i].name, store[i].price);
    }
}

void addItemToCart(Cart *cart, Item item) {
    cart->items[cart->itemCount] = item;
    cart->itemCount++;
    printf("Added %s to cart.\n", item.name);
}

void removeItemFromCart(Cart *cart, int itemId) {
    int found = 0;
    for (int i = 0; i < cart->itemCount; i++) {
        if (cart->items[i].id == itemId) {
            found = 1;
            for (int j = i; j < cart->itemCount - 1; j++) {
                cart->items[j] = cart->items[j + 1];
            }
            cart->itemCount--;
            printf("Removed item with ID %d from cart.\n", itemId);
            break;
        }
    }
    if (!found) {
        printf("Item with ID %d not found in cart.\n", itemId);
    }
}

void displayCart(Cart cart) {
    if (cart.itemCount == 0) {
        printf("Cart is empty.\n");
        return;
    }
    printf("Items in cart:\n");
    for (int i = 0; i < cart.itemCount; i++) {
        printf("ID: %d, Name: %s, Price: %.2f\n", cart.items[i].id, cart.items[i].name, cart.items[i].price);
    }
}

void orderItems(Cart *cart) {
    if (cart->itemCount == 0) {
        printf("Cart is empty. Nothing to order.\n");
        return;
    }

    printf("Ordering the following items:\n");
    float total = 0.0;
    for (int i = 0; i < cart->itemCount; i++) {
        printf("ID: %d, Name: %s, Price: %.2f\n", cart->items[i].id, cart->items[i].name, cart->items[i].price);
        total += cart->items[i].price;
    }
    printf("Total price: %.2f\n", total);

    // Clear the cart
    cart->itemCount = 0;
    printf("Order placed successfully! Your cart is now empty.\n");
}

int main() {
    Item store[MAX_ITEMS];
    int storeItemCount = 0;

    Cart cart = { .itemCount = 0 };

    addItemToStore(store, &storeItemCount, 1, "Laptop", 999.99);
    addItemToStore(store, &storeItemCount, 2, "Smartphone", 499.99);
    addItemToStore(store, &storeItemCount, 3, "Headphones", 29.99);
    addItemToStore(store, &storeItemCount, 4, "Keyboard", 19.99);

    int choice, itemId;

    while (1) {
        printf("\nMenu:\n");
        printf("1. Display Store Items\n");
        printf("2. Add Item to Cart\n");
        printf("3. Remove Item from Cart\n");
        printf("4. Display Cart\n");
        printf("5. Order Items\n");
        printf("6. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                displayStoreItems(store, storeItemCount);
                break;
            case 2:
                printf("Enter the ID of the item to add to cart: ");
                scanf("%d", &itemId);
                for (int i = 0; i < storeItemCount; i++) {
                    if (store[i].id == itemId) {
                        addItemToCart(&cart, store[i]);
                        break;
                    }
                }
                break;
            case 3:
                printf("Enter the ID of the item to remove from cart: ");
                scanf("%d", &itemId);
                removeItemFromCart(&cart, itemId);
                break;
            case 4:
                displayCart(cart);
                break;
            case 5:
                orderItems(&cart);
                break;
            case 6:
                exit(0);
            default:
                printf("Invalid choice.\n");
        }
    }

    return 0;
}
