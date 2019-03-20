/* Example of recursion for a pal */

void loopCountdown(int n);
void recursiveCountdown(int n);

int main(void)
{
    printf("Testing loopCountdown with n = 5 \n\n");
    loopCountdown(5);
    
    printf("\nTesting recursiveCountdown with n = 5 \n\n");
    recursiveCountdown(5);
    return 0;
}

/*  
 *  Simply loops through to count down from n, one at a time
 */
void loopCountdown(int n)
{
    while(n > 0)
    {
        printf("\tCurrent count of loop: %d \n", n);
        n--;
    }
}

/*  
 *  Recursively counts down to show how simple recursion works
 *  Trust me, it gets way cooler than this 
 */
void recursiveCountdown(int n)
{
    if(n == 0)  // Base case, this is how it knows to stop recursing
    {
        printf("**Hit the bottom, time to go back up!** \n");
    }
    else        // Recursive case, this contains a call to itself with some change in parameters
    {
        printf("\tEntering level %d \n", n);

        recursiveCountdown(n--);    // Recursive call

        printf("\tLeaving level %d \n", n);   // Important to note that this will happen *after* recursing
    }
}