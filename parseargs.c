#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>

char **parse_args( char *line )
{
    char s[256];
    strcpy( s, line);
    char **args = calloc(8, sizeof(char *)); 
    int i = 0;
    while( s ) {
        printf("it's OOF\n");
        args[i] = strsep( &s, " " );
        printf("OOF %s\n", args[i]);
        i++;
    }
    return args;
}

int main()
{
    char in[] = "ls -a -l ..";
    char **jeff = parse_args(in);
    int i = 0;
    printf("OOF\n");
    while( jeff[i] )
        printf("\"%s\"\n", jeff[i++]);
    free(jeff);
    return 0;
}
