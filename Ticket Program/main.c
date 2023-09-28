#include <stdio.h>

int main() {
    int ctickets;
    int atickets;
    int totalNumPeople;
    float price;
    char day;
    printf("Enter W for Wednesday, S for Saturday or Sunday and B if it's a bank holiday\n");
    scanf("%c", &day);
    printf("Enter the number of child tickets");
    scanf("%c", &ctickets);
    printf("Enter the number of adult tickets");
    scanf("%c", &atickets);
    if (ctickets > 0) {

        if (day == 'W') {
            price = 5 * ctickets;
        }
        else if (day == 'S') || (day == 'B'){
            price = 7.5 * ctickets;
        }
}   }
