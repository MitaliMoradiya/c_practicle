#include <stdio.h>

int isLeapYear(int year) {
    // Leap year if divisible by 4 and not divisible by 100, or divisible by 400
    return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
}

int isValidDate(int day, int month, int year) {
    if (year < 1 || month < 1 || month > 12 || day < 1)
        return 0;

    switch (month) {
        case 2: // February
            if (isLeapYear(year)) {
                return (day <= 29);
            } else {
                return (day <= 28);
            }
        case 4: case 6: case 9: case 11: // April, June, September, November
            return (day <= 30);
        default: // All other months
            return (day <= 31);
    }
}

int main() {
    int day, month, year;

    printf("Enter a date (DD MM YYYY): ");
    scanf("%d %d %d", &day, &month, &year);

    if (isValidDate(day, month, year)) {
        printf("The date is valid.\n");
    } else {
        printf("The date is not valid.\n");
    }

    return 0;
}





