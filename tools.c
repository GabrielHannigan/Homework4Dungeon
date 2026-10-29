#include <stdio.h>
#include "tools.h"
#include "dungeonRoomList_large.txt"


roomOpen(){
    
    *fp("dungeonRoomList_large.txt");
    fopen(fp);
    fgets(fp);
    printf(fp);
    fclose(fp);
    
}