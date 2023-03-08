#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int string_to_int(char *str) {
    int result = 0, i;
    for (i = 0; str[i] != '\0'; i++) {
        if (!isdigit(str[i])) {
            printf("Error\n");
            exit(1);
        }
        result = result * 10 + (str[i] - '0');
    }
    return result;
}

int main(int argc, char *argv[]) {
    int sum = 0, i;
    if (argc == 1) {
        printf("%d\n", sum);
        return 0;
    }
    for (i = 1; i < argc; i++) {
        sum += string_to_int(argv[i]);
    }
    printf("%d\n", sum);
    return 0;
}

