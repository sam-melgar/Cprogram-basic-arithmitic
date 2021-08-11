/* Code reads an integer from the user, stores this input in an integer variable, 
then adds one to that value and stores the result in another integer variable. 
The program should then print out the result of this addition. 
For example, if the user enters 64, your program's output should be
64 + 1 = 65 */

#include <stdio.h>
int main(void)
{ 
    int num, numplus; /*declare two integer variables*/ 
    
    printf("Input a number:");
    scanf("%d", &num);   /* store user input into the address (&) of variable "num" */
    
    numplus = num + 1;   /*UPDATE variable "numplus" with arithmitic on the right "num + 1" */
    
    printf("%d + 1 = %d\n",num, numplus); /*To check this should be exactly like printf("%d + 1 = %d\n", num, (num + 1) ); */
    
    return(0); 
}
