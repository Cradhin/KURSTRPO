#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int generate_number()
{
    int x, x1, x2, x3, x4;
    do {
        srand(time(NULL));
        x = 999 + rand() % (10000 - 999 + 1);
        x1 = x / 1000, x2 = x / 100 % 10, x3 = x / 10 % 10, x4 = x % 10;
    } while (x1 == x2 || x1 == x3 || x1 == x4 || x2 == x3 || x2 == x4
             || x3 == x4);
    return x;
}
    
int check_input(int num)
{
    if (num > 1000 && num < 10000) {
        int x1 = num / 1000;
        int x2 = num / 100 % 10;
        int x3 = num / 10 % 10;
        int x4 = num % 10;

        if (isdigit('0' + x1) && isdigit('0' + x2) && isdigit('0' + x3)
            && isdigit('0' + x4) && x1 != x2 && x1 != x3 && x1 != x4 && x1 != x3
            && x2 != x3 && x2 != x4 && x3 != x4) {
            return 1;
        }
    }
    printf("Incorrect input, try again!\n\n");
    return 0;
}

void print_info(int num, int input)
{
    int x1 = num / 1000;
    int x2 = num / 100 % 10;
    int x3 = num / 10 % 10;
    int x4 = num % 10;

    int y1 = input / 1000;
    int y2 = input / 100 % 10;
    int y3 = input / 10 % 10;
    int y4 = input % 10;

    int cow = 0;
    int bull = 0;

    if (x1 == y1)
        bull++;
    if (x1 == y2)
        cow++;
    if (x1 == y3)
        cow++;
    if (x1 == y4)
        cow++;

    if (x2 == y1)
        cow++;
    if (x2 == y2)
        bull++;
    if (x2 == y3)
        cow++;
    if (x2 == y4)
        cow++;

    if (x3 == y1)
        cow++;
    if (x3 == y2)
        cow++;
    if (x3 == y3)
        bull++;
    if (x3 == y4)
        cow++;

    if (x4 == y1)
        cow++;
    if (x4 == y2)
        cow++;
    if (x4 == y3)
        cow++;
    if (x4 == y4)
        bull++;

    printf("\nBulls: %d\nCows: %d\n", bull, cow);

    if (bull != 4) {
        printf("Let's try again!\n");
    }
}
