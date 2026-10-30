#include <string.h>
#include <ctype.h>
#include "tools.h"

// be able to trim a string
void trim(char *str){
    int i =0, j = 0;
    //removes spaces and scans through string
    while(str[i] && isspace((unsigned char)str[i])){
        // moves i ahead
        i++;
    }
    
    while (str[i]){
        str[j++] = str[i++];
    }
    //end of string identifier
    str[j] = '\0';
    //returns j backward
    j--;
    //gets rid of spaces at the end
    while(j >= 0 && isspace((unsigned char)str[i])){
        str[j] = '\0';
        j--;
    }

}

