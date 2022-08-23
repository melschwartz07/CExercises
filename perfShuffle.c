/* Shuffle a character array of the alphabet. output the number of perfect shuffles required to restore
 * the array back to its original order. */

#include <stdio.h>
#include <string.h>

int main(){
    char og[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    char deck[27], shuffle[27];
    const int shuffleSize = 13;
    int count, s, d;

    printf("Original deck: %s\n", og);
    strcpy(deck, og);
    count = 0;
    while(1){
        for(d =0, s= 0; d < shuffleSize; d++, s+=2){
            shuffle[s] = deck[d];
            shuffle[s+1] = deck[d + shuffleSize];
        }
        shuffle[s] = '\0';
        count++;
        printf("%2d: %s\n", count, shuffle);

        if(strcmp(og, shuffle) == 0)
        break;
        strcpy(deck,shuffle);
    }
        printf("Deck restored after %d iterations\n", count);
        return(0);

}

