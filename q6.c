#include <stdio.h>

char* formatName(char *first, char *last) {
    static char result[100];
    sprintf(result, "%s %s", first, last);
    return result;
}

int main() {
    char first[100];
    char last[100];
    char ch_first = 0;
    int counter1 = 0;

    printf("Enter First Name: ");
    while (ch_first != '\n' && counter1 < 99)
    {
        ch_first = getchar();
        if (ch_first == '\n')
        {
            break;
        }
        
        first[counter1] = ch_first;
        counter1 ++;
    }
    first[counter1] = '\0';
    
    int counter2 = 0;
    char ch_last = 0;
    printf("Enter Last Name: ");
    
    while (ch_last != '\n' && counter2 < 99)
    {
        ch_last = getchar();
        if (ch_last == '\n')
        {
            break;
        }
        
        last[counter2] = ch_last;
        counter2 ++;
    }
    last[counter2] = '\0';
    printf("Your Full Name is: %s", formatName(first, last));
    return 0;
}