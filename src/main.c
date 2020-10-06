#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {

	int num=1234;
	int input = 0, steps = 0, win = 0;

	while (input != num && win == 0) {
		printf("\nGuess: ");
		scanf("%d", &input);

		if (input == num) {
			//create info func
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
