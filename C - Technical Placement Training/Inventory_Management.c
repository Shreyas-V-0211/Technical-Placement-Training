#include<stdio.h>
#include<string.h>

int countItems();
void addItem(char *item);
void showItems();

char *items[10] = {"0","0","0","0","0","0","0","0","0","0"};
int count[10] = {0,0,0,0,0,0,0,0,0,0};
int inv[10] = {0,0,0,0,0,0,0,0,0,0};

int countItems() {
    int count = 0;
    for (int i = 0; i < 10; i++) {
        if (inv[i] != 0) {
            count++;
        }
    }
    return count;
}

void addItem(char *item) {
    for (int i = 0; i < 10; i++) {
        if (strcmp(items[i],item) == 0){
            count[i]++;
            break;
        }else if (strcmp(items[i], "0") == 0) {
            items[i] = strdup(item);
            inv[i] = 1;
            count[i]++;
            break;
        }
    }
}

void showItems() {
    for (int i = 0; i < 10; i++) {
        if (strcmp(items[i], "0") != 0) {
            printf("\nItem: %s, amount: %d", items[i], count[i]);
        }
    }
}

int main() {
    while (1) {
        int choice;
        printf("\n1. Add item\t2. Show items\t3. Count items\t4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1: {
                char item[50];
                printf("Enter item: ");
                scanf("%s", item);
                addItem(item);
                break;
            }
            case 2:
                printf("Inventory:");
                showItems();
                break;
            case 3:
                printf("Total items: %d\n", countItems());
                break;
            case 4:
                printf("Thank you for visiting\n");
                return 0;
            default:
                printf("Invalid input\n");
        }
    }
    return 0;
}