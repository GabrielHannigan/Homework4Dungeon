#include <string.h>
#include <ctype.h>
#include "tools.h"

void trim(char *str){
    int i =0, j = 0;
    while(str[i] && isspace((unsigned char)str[i])){
        i++;
    }
    while (str[i]){
        str[j++] = str[i++];
    }
    str[j] = '\0';
    j--;
    while(j >= 0 && isspace((unsigned char)str[i])){
        str[j] = '\0';
        j--;
    }

}

