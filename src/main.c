#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#include "func.h"

int main(void) 
{
  printf("Guess a four-digit number.\n");
  printf("Numbers can't be repeated.\n");
  printf("The cow is the guessed number of the\npuzzle that is in the wrong "
      "place.\n");
  printf("Bull is a number that stands in its place.\n");
  int num = generate_number();
  int input = 0, steps = 0, win = 0;

    while (input != num && win == 0) {
        printf("\nGuess: ");
        scanf("%d", &input);

        if (check_input(input)) {
            print_info(num, input);
        }
        getchar();

        if (input == num) {
            win = 1;
        }

        steps++;
    }

    if (win == 1) {
     printf("Congratulations!\nYou won in %d chances ", steps);
    }
}
