#include <stdio.h>
#include <string.h>

/*
#include <sys/ptrace.h>
#include <sys/types.h>
*/

int main() {

    /*
        if (ptrace(PTRACE_TRACEME, 0, 1, 0) == -1) {
        printf("Traced! Wrong!\n");  // Fake output, exit early
        return 1;
    }
    */

    char pass[20];
    printf("Enter password: ");
    fgets(pass, 20, stdin);
    pass[strcspn(pass, "\n")] = 0;  // Remove newline

    if (strcmp(pass, "pass") == 0) {
        printf("Correct!\n");
    } else {
        printf("Wrong!\n");
    }
    return 0;
}
