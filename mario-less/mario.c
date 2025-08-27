#include <stdio.h>
#include <string.h>

int scan(char *x){
        fgets(x, sizeof(x), stdin);
        x[strcspn(x, "\n")] = '\0';
        return(sscanf(x, "%d", &x));
}

int main() {
    int lines;
    char input[69];

    while (1){
        printf("Enter the number of lines in bricks:");

        if (scan(input) != 1) {
            printf("Invalid input! Please enter a positive \"NUMBER\" not \"%s\"\n", input);
            continue;
        }

        if (lines<1){
            printf("Invalid input. Please enter a positive number. Enter Number again\n");
        }

        else{
            for (int i = 0; i < lines; i++) {
                for (int j = 0; j < lines - i - 1; j++) {
                    printf(" ");
                }
                for (int j = 0; j <= i; j++) {
                    printf("#");
                }
                printf("\n");
            }
            break;
        }
    }
    return 0;
}