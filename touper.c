#include <stdio.h>
#include <ctype.h>
#include <string.h>
 
int main() {
 
    char str[51];

    fgets(str, sizeof(str), stdin);

    int alt = 1;

    for (int i = 0; str[i] != '\0'; i++){

        if (str[i] != ' '){

        if (alt){
            str[i] = toupper(str[i]);
        } else{
            str[i] = tolower(str[i]);
        }
        
        alt = !alt;

        }
        
    }

    printf("%s\n", str);
    
 
    return 0;
}