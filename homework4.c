#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include "dungeonRoomList_large.txt"
#include "tools.c"

//Open a file sent via command line
//Be able to make a room
// be able to trim a string
// how can we tell were done reading a single room 
// How many rooms exist in the file 
// how can we tell were at the "Room Name" line?
// how can we trim the label
// trim 11 chars in after room name cuz name doesnt change do for others but diff num
// Name, Code, Descr you can line it up with(NCD)
// how can we create a struct from data
// How can we print info from single struct in a loop
// how can we print info from a single room
// how can we print the info for all rooms


// typedef struct{
//     char name[100];
//     char code[3];
//     char explan[100];

//     char theRoom = Room(malloc(sizeof(char)*100));


// } Room;

// void printRoom(Room *fp);

int main(){
    FILE *fp = fopen("dungeonRoomList_large.txt", "r")
    char sep[] = ":";
    char buffer[1024];
    
    while(fgets(buffer,sizeof(buffer), fp){
        if (isspace(buffer[0])){
            printf("continuing\n");
            continue;
        
        else:
            printf("failed")

        }
        char *tp = strtok(buffer, sep);
        printf("|%s|\n", tp);
    
    }
    return 0;

}