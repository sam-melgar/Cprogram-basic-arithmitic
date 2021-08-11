/*
 * integer arithmitic 
 *
 * 
 */

#include <stdio.h>		/* printf and scanf definitions */

int main(void)
{
	int n1, n2, n;		/* declare variables
				             
	/* Get the two integers from user */
	printf("Enter the first integer: ");
	scanf("%d", &n1);
	
	printf("Enter the second integer: ");
	scanf("%d", &n2);
	

	/* addition */
	printf("%d + %d = %d \n", n1, n2, n1+n2);
	/*subtraction */
	printf("%d - %d = %d \n", n1, n2, n1-n2);
	/* multiplication */
	printf("%d * %d = %d \n", n1, n2, n1*n2);
	/* division */
	printf("%d / %d = %d \n", n1, n2, n1/n2);
	/* remainder */
	printf("%d %% %d = %d \n", n1, n2, n1%n2);




	return (0);
}
