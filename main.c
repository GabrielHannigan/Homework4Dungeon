#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include "tools.h"

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


//Be able to make a room
typedef struct{
    char name[100];
    char code[20];
    char explan[2000];

} Room;

// void printRoom(Room *fp);





int main(int argc, char *argv[]){
    //Open a file sent via command line
    if (argc < 2){
        printf("Usage: %s <dungeonRoomList_large.txt>", argv[0]);
        return 1;
    }
    
    //Open file to read only
    FILE *fp = fopen(argv[1], "r");
    //catch fail if open fails
    if (fp == NULL){
        printf("Failed to open file.");
        return 1;
    }
    //Declare a rooms variable
    Room rooms[100];
    //declare roomcount variable
    int roomCount = -1;
    //make a pointer to my current room 
    Room *currRoom = NULL;
    //large char buffer to be able to store all the text
    char buffer[1024];
    
   //while loop reads through text skipping blank lines and trimming colons
    while(fgets(buffer, sizeof(buffer), fp)){
        if (buffer[0] == '\n' || buffer [0] == 'r'){
            //printf("continuing\n");
            continue;
        }
        else{
            char *colon = strchr(buffer, ':');
            if (colon != NULL){
                *colon = '\0';
                char *label = buffer;
                char *value = colon + 1;

                trim(value);
                trim(label);

            //char *value = strtok(NULL, "\n");

            //if logic to line title with returned value
            if (strcasestr(label, "Name") != NULL) {
                roomCount++;
                currRoom = &rooms[roomCount];
                strcpy(currRoom->name, value);
}
            else if (roomCount >= 0 && strcasestr(label, "Room Code") != NULL) {
                strcpy(currRoom->code, value);
}
            else if (roomCount >= 0 && strcasestr(label, "Room Description") != NULL) {
                strcpy(currRoom->explan, value);}
}
}}   
    //done reading from file so we can close    
    fclose(fp);
        //display to user each room
        printf("\n===Room %d===\n\n", roomCount +1);
        for (int i = 0; i <= roomCount; i++){
            printf("=================================");
            printf("Room: %d\n", i + 1);
            printf("Name: %s\n", rooms[i].name);
            printf("Code: %s\n", rooms[i].code);
            printf("Description: %s\n", rooms[i].explan);

        }
        
        
                return 0;}  