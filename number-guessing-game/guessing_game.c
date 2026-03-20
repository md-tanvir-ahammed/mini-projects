#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    srand(time(0));
    
    int secret = rand() % 100 + 1;
    int guess, attempts = 0;
    
    printf("===== Number Guessing Game =====\n");
    printf("I picked a number between 1 and 100!\n");
    
    while (1) {
        printf("Your guess: ");
        scanf("%d", &guess);
        attempts++;
        
        if (guess < secret)
            printf("Higher number please!\n");
        else if (guess > secret)
            printf("Lower number please!\n");
        else {
            printf("Yes! You got it in %d attempts!\n", attempts);
            break;
        }
    }
    
    return 0;
}
