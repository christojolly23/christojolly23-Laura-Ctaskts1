#include <stdio.h>
#include <string.h>

int main() {
    char origin[20];
    int size, ukSize;

    printf("Enter the origin of the item (USA, Europe, UK in all caps)!: ");
    scanf("%s", origin);

    if (strcmp(origin, "USA") == 0 || strcmp(origin, "EUROPE") == 0 || strcmp(origin, "UK") == 0) {
        printf("Enter the size of the item: ");
        scanf("%d", &size);

        if (size >= 0) {
            if (strcmp(origin, "USA") == 0) {
                ukSize = size + 4;
            }
            else if (strcmp(origin, "EUROPE") == 0) {
                ukSize = size - 28;
            }
            else if (strcmp(origin, "UK") == 0) {
                ukSize = size;
            }

            printf("The converted UK size is: %d\n", ukSize);
        } else if (size < 1) {
            printf("Invalid size entered..\n");
        }
    } else {
        printf("Invalid origin entered. Please enter 'USA', 'Europe', or 'UK'.\n");
    }

    return 0;
}