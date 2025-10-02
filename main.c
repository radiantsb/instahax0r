#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//imports for cross platform sleep
#ifdef _WIN32
#include <windows.h>
#else
#include <unistd.h>
#endif
void sleep_ms(int milliseconds) {//cross platform sleep function
#ifdef _WIN32
    Sleep(milliseconds);
#else
    usleep(milliseconds * 1000);
#endif
// Color macros
#define GREEN  "\x1b[32m"
#define RESET  "\x1b[0m"

}
int main(){
    printf(GREEN "---------------INSTAHAX0R v0.6.4---------------\n\n" RESET "Enter user to crack password: ");
    char* user = (char*)malloc(30);
    scanf("%s",user);
    sleep_ms(500);
    printf(GREEN "Brute forcing password for user %s\n",user);
    sleep_ms(300);
    printf("initializing password cracker");fflush(stdout);
    for(int i=0;i<3;i++){
    sleep_ms(700);
    printf(".");
    fflush(stdout);
    }
    printf("\n");
    sleep_ms(300);
    const int letters = 26;
    const int combos = letters * letters;
    const int line_len = 23;
    const int newline = 1;
    const size_t buffer_size = (line_len + newline) * combos + 1;

    for (char c1 = 'a'; c1 <= 'z'; c1++) {
        for (char c2 = 'a'; c2 <= 'z'; c2++) {
            char *buffer = malloc(buffer_size);
            if (!buffer) {
                fprintf(stderr, "malloc failed bruh\n");
                return 1;
            }

            size_t offset = 0;
            char temp[line_len + 1];

            for (char c3 = 'a'; c3 <= 'z'; c3++) {
                for (char c4 = 'a'; c4 <= 'z'; c4++) {
                    int len = snprintf(temp, sizeof temp, "guessing password: %c%c%c%c",
                                       c1, c2, c3, c4);
                    if (len != line_len) {
                        fprintf(stderr, "unexpected formatted length: %d\n", len);
                        free(buffer);
                        return 2;
                    }
                    memcpy(buffer + offset, temp, (size_t)len);
                    offset += (size_t)len;
                    buffer[offset++] = '\n';
                }
            }

            buffer[offset] = '\0';
            puts(buffer);
            free(buffer);
            //might want to put a short sleep here on linux since stdout is much faster than on windows
        }
    }
    printf("\n");
    sleep_ms(2000);
    printf("JK\n");
    sleep_ms(1000);
    printf("did you really just fucking run a random .exe file from the internet\n");
    sleep_ms(1000);
    printf("are you fucking stupid\n");
    sleep_ms(1000);
    printf("this could easily have been a virus\n");
    sleep_ms(1000);
    printf("learn some basic online security, please\n");
    scanf("%s");
    return 0;
}
