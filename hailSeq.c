/*hailstone sequence challenge. if n = 1 seq is over. if n is even the next value is n/2 if n is odd, the next value
 * is (n*3) + 1. eventually the sequence terminates with n==1 */

#include <stdio.h>

int main(){

    int hail, count;
    /* gather input */
    printf("Enter the starting value: ");
    scanf("%d", &hail);

    /* eliminate zero and negative values*/
    if (hail < 1)
        return(1);

    /* output sequence*/
    count = 1;
    printf("Hailstone sequence: ");

    while(hail != 1){
        printf("%d, ", hail);
        if(hail % 2){
            hail= (hail * 3) +1;
        } else {
            hail /= 2;
        }
        count++;
    }
    printf("%d\n", hail);
    printf("Sequence length: %d\n", count);
    return(0);
}