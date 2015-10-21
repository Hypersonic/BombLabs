#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>

void tick(char *s, int sleeptime)
{
    size_t n = 0;
    size_t len = strlen(s);
    for (n = 0; n < len; ++n) {
        printf("%c", s[n]);
        fflush(stdout);
        usleep(sleeptime);
    }
}

void explode()
{
    tick("tick...",100000);tick("tick...",100000);tick("tick...",100000);
    printf("\n"
           "     _.-^^---....,,--      \n"
           " _--                  --_  \n"
           "<                        >)\n"
           "|         B O O M         |\n"
           " \\._                   _./ \n"
           "    ```--. . , ; .--'''    \n"
           "          | |   |          \n"
           "       .-=||  | |=-.       \n"
           "       `-=#$%%&%%$#=-'       \n"
           "          | ;  :|          \n"
           " _____.,-#%%&$@%%#&#~,._____ \n");
    tick(  " ~~~~~    R. I. P.   ~~~~~\n", 100000);
    exit(0);
}

void phase1(char *in)
{
    if (strlen(in) < 10) {
        explode();
    }
    size_t n = 0;
    if (in[n++] != 'b') explode();
    if (in[n++] != 'o') explode();
    if (in[n++] != 'm') explode();
    if (in[n++] != 'b') explode();
    if (in[n++] != 's') explode();
    if (in[n++] != 'a') explode();
    if (in[n++] != 'r') explode();
    if (in[n++] != 'e') explode();
    if (in[n++] != 'e') explode();
    if (in[n++] != 'z') explode();
}

int main()
{
    char buf[256];
    size_t n = 0;
    int c;
    tick("Welcome to my evil bomb! Enter the correct passphrase to defuse it, if you can! Tools like IDA or objdump may come in handy...\n", 10000);
    while (n < sizeof(buf) && (c = getc(stdin)) != '\n') {
        buf[n++] = c;
    }
    buf[n] = '\0';
    phase1(buf);
    tick("tick...",100000);tick("tick...",100000);tick("tick...",100000);
    printf("\n");
    tick(". . .\n", 600000);
    tick("It seems the bomb is defused... for now.\n", 50000);
    tick("Just wait until version two on Thursday! It'll knock your socks off!\n", 50000);
    return 0;
}
