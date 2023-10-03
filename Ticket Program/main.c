#include <stdio.h>

int main() {
    int ctickets, atickets;
    double cprice, aprice;
    int totalNumPeople;
    float price;
    char day;
    printf("Enter W for Wednesday, S for Saturday or Sunday and B if it's a bank holiday\n");
    scanf("%c", &day);
    printf("Enter the number of child tickets");
    scanf("%d", &ctickets);
    printf("Enter the number of adult tickets");
    scanf("%d", &atickets);
    if (ctickets > 0 && atickets > 0) {

        if (day == 'W') {
            aprice = 8.00;
            cprice = 5.00;
            price = (cprice * ctickets) + (aprice * atickets);
        }
        else if (day == 'S') {
            aprice = 12.00;
            cprice = 7.50;
            price = (cprice * ctickets) + (aprice * atickets);
        }
        else if (day == 'B') {
            aprice = 14.00;
            cprice = 7.50;
            price = (cprice * ctickets) + (aprice * atickets);
        }
    printf("%f", price);

    }

}
