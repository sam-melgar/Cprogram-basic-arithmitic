/*
 * average of three numbers with user input
 */

#include <stdio.h>		/* printf and scanf definitions */

int main(void) {

	float n1, n2, n3, average_of_three_numbers;		/* declare variables*/
				             
	/* Get the three numbers from user */
	printf("Enter the first number: ");
	scanf("%f", &n1);
	
	printf("Enter the second number: ");
	scanf("%f", &n2);
	
	printf("Enter the third number: ");
	scanf("%f", &n3);

	/* add all three numbers and divide. */
	average_of_three_numbers = (n1 + n2 + n3) / 3;

	/* Display the average. */
	printf("The average of these three numbers is %f.\n", average_of_three_numbers);

	return (0);
}
