#include <stdio.h>
#include <string.h>

#define SECRET_COMPLETE -1 

void bad_code(char *input) {
    char buf[23];
    strcpy(buf, "Username: Vanish#Magic");
    strcpy(buf + 22, input);
}

int main() {
    char input[20];
    printf("Thanks for everything, Pete. I have hidden the secret here. Type \"Hello World\" to start: \n");
    scanf("%s", input);    
    bad_code(input);

    return SECRET_COMPLETE;
}
